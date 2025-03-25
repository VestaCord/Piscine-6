/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtian <vtian@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:41:14 by vtian             #+#    #+#             */
/*   Updated: 2025/03/25 20:29:10 by vtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex09/ft_strcapitalize.h"
#include "../ex11/ft_putstr_non_printable.h"
#include "../ex12/ft_print_memory.h"

int	main(void)
{
	// ex09
	char	str[] = "rekt17+lol mdr mdr 4242l42\n";
	printf("\nTesting: %s\n", "ft_strcapitalize(\"Rekt17+Lol Mdr Mdr\");");
	printf("result: %s\n", ft_strcapitalize(str));

	// ex11
	printf("\nTesting: %s\n", "ft_putstr_non_printable();");

	// Test case 1: String with non-printable characters at the beginning, middle, and end.
    printf("Test 1 (Mixed String):\n");
    char mixed_str[] = {1, 'A', 10, 'B', 127, 'C', 255, '\0'};
    ft_putstr_non_printable(mixed_str);
    printf("\n");

    // Test case 2: String with all non-printable characters.
    printf("Test 2 (All Non-Printable):\n");
    char non_printable_str[] = {3, 1, 2, 3, 15, 16, 17, 127, 128, 255, '\0'};
    ft_putstr_non_printable(non_printable_str);
    printf("\n");

    // Test case 3: String containing all the printable character range, and the characters right before and after the range.
    printf("Test 3 (Border Cases):\n");
    char border_str[] = {31, 32, 33, 125, 126, 127, 128, '\0'};
    ft_putstr_non_printable(border_str);
    printf("\n");
	
	// ex12
	printf("\nTesting: %s\n", "ft_print_memory(&data, 32);");
	char	data[]="Bonjour les aminches.\n\tc'est fou";
	ft_print_memory(data, 2000);
	ft_print_memory(&mixed_str, 16);
	ft_print_memory(&non_printable_str, 16);
	ft_print_memory(&border_str, 16);

	return (0);
}
