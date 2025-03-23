#include <unistd.h>

void ft_print_comb(int *number, int n)
{
    for (int i = 0; i < n; i++)
    {
        // Convert the number to a character and print
        write(1, &("0123456789"[number[i]]), 1);
    }
    // Print space or newline after each combination
    if (number[0] != 10 - n) // Check if it's the last combination
        write(1, ", ", 2);
}

void ft_find_combn(int m, int n, int *number)
{
    int max;

    max = 9 - (n - m); // max number we can choose for the m-th position

    // Start with the last number in the previous combination, or 0 for the first
    for (int i = (m == 1 ? 0 : number[m - 2] + 1); i <= max; i++)
    {
        number[m - 1] = i;

        if (m == n)
        {
            ft_print_comb(number, n);
        }
        else
        {
            ft_find_combn(m + 1, n, number);
        }
    }
}

void ft_combn(int n)
{
    int number[n]; // Store the current combination
    ft_find_combn(1, n, number); // Start from the first position
}

int main()
{
    ft_combn(3); // Example: print all combinations of 3 digits
    return 0;
}
