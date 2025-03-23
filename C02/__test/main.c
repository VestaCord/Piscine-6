/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:41:14 by vtian             #+#    #+#             */
/*   Updated: 2025/03/23 20:45:59 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex00/ft_strcpy.h"
#include "../ex01/ft_strncpy.h"
#include "../ex02/ft_str_is_alpha.h"
#include "../ex03/ft_str_is_numeric.h"
#include "../ex04/ft_str_is_lowercase.h"
#include "../ex05/ft_str_is_uppercase.h"
#include "../ex06/ft_str_is_printable.h"
#include "../ex07/ft_strupcase.h"
#include "../ex08/ft_strlowcase.h"
#include "../ex09/ft_strcapitalize.h"
#include "../ex10/ft_strlcpy.h"
#include "../ex11/ft_putstr_non_printable.h"

int	main(void)
{
	// char	str[512];
	// // ex00
	// printf("\nTesting: %s\n", "ft_strcpy(str, \"Meowow World\");");
	// ft_strcpy(str, "Meowow World");
	// printf("str: %s\n", str);
	// ft_strcpy(str, "");

	// // ex01
	// printf("\nTesting: %s\n", "ft_strncpy(str, \"Meowow World\", 6);");
	// printf("(This actually returns -Werror=stringop-truncation)\n");
	// ft_strncpy(str, "Meowow World", 6);
	// printf("str: %s\n", str);

	// // ex02-06
	// printf("\nTesting: %s\n", "ft_str_is_alpha(\"12a\")");
	// printf("result: %d\n", ft_str_is_alpha("12a"));

	// printf("\nTesting: %s\n", "ft_str_is_numeric(\"aa\");");
	// printf("result: %d\n", ft_str_is_numeric("aa"));

	// printf("\nTesting: %s\n", "ft_str_is_lowercase(\"aAa\");");
	// printf("result: %d\n", ft_str_is_lowercase("aAa"));
	
	// printf("\nTesting: %s\n", "ft_str_is_uppercase(\"LlL\");");
	// printf("result: %d\n", ft_str_is_uppercase("LlL"));

	// printf("\nTesting: %s\n", "ft_str_is_printable(\"!!###\");");
	// printf("result: %d\n", ft_str_is_printable("!!###"));

	// // ex07-09
	// ft_strcpy(str, "This Is ParTially Majuscule");
	// printf("\nTesting: %s\n", "ft_strupcase(\"This Is ParTially Majuscule\");");
	// printf("result: %s\n", ft_strupcase(str));
	// ft_strcpy(str, "This Is ParTially Majuscule");
	// printf("\nTesting: %s\n", "ft_strupcase(\"This Is ParTially Majuscule\");");
	// printf("result: %s\n", ft_strlowcase(str));
	// ft_strcpy(str, "This Is ParTially Majuscule");
	// printf("\nTesting: %s\n", "ft_strcapitalize(\"This Is ParTially Majuscule\");");
	// printf("result: %s\n", ft_strcapitalize(str));

	// ex10
	// printf("\nTesting: %s\n", "ft_strlcpy(str, \"Meowow World\");");
	// printf("size: %d, str: %s\n", ft_strlcpy(str, "123456789", 6), str);
	// ft_strcpy(str, "");

	// ex11
	printf("\nTesting: %s\n", "ft_putstr_non_printable(str, \"Coucou\\ntu vas bien ?\");");
	ft_putstr_non_printable("Coucou\ntu \t vas bien ?");
	printf("\n");
	
	// ex12
}
