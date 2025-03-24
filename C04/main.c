#include <unistd.h>

int	main(void)
{
	char c;
	c = 0;
	while (c < 58)
	{
		write(1, &c, 1);
		c++;
	}
}