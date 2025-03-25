/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:59:35 by vtian             #+#    #+#             */
/*   Updated: 2025/03/25 20:52:59 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../ex00/ft_strcmp.h"
#include "../ex01/ft_strncmp.h"
#include "../ex02/ft_strcat.h"
#include "../ex03/ft_strncat.h"
#include "../ex04/ft_strstr.h"
#include "../ex05/ft_strlcat.h"

int	main(void)
{
	// ex00
	printf("\nTesting: %s\n", "ft_strcmp(\"\", \"\")");
	printf("Result: %d\n", ft_strcmp("", ""));

	// ex01
	printf("\nTesting: %s\n", "ft_strncmp(\"More Complicatef\", \"More Complicated\", 16)");
	printf("Result: %d\n", ft_strncmp("More Complicatef", "More Complicated", 16));

	// ex02
	printf("\nTesting: %s\n", "ft_strcat(Str1, \" World!\")");
	char Str1[20] = "Hello";
	ft_strcat(Str1, " World!");
	printf("Result: %s\n", Str1);

	// ex03
	printf("\nTesting: %s\n", "ft_strncat(Str2, \" World!\", 3)");
	char Str2[20] = "Hello";
	ft_strncat(Str2, " World!", 3);
	printf("Result: %s\n", Str2);
	
	// ex04
	printf("\nTesting: %s\n", "ft_strstr(myStr, \"main\")");
	char myStr[] = "The rain in Spain falls mainly on the plains";
	char *myPtr = ft_strstr(myStr, "main");
	if (myPtr != NULL)
	{
		printf("%s\n", myPtr);
	}
	else
	{
		printf("Not found\n");
	}
	
	// ex05
	printf("\nTesting: %s\n", "ft_strlcat(Str3, \" 12345\", 11)");
	char Str3[20] = "12345";
	char Str4[20] = "12345";
	printf("Result: %u, %s\n", ft_strlcat(Str3, "12345!", 4), Str3);
	printf("Expected: %lu, %s\n", strlcat(Str4, "12345!", 4), Str4);
}