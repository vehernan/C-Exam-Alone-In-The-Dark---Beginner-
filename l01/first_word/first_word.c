
#include <unistd.h>

void    ft_putchar(char c);


int				isaspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void			first_word(char *str)
{
	int i;

	i = 0;
	while (isaspace(str[i]))
		i++;
	while (!isaspace(str[i]) && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int     main(int argc, char **argv)
{
    if (argc != 2)
        ft_putchar('\n');
    else
        {
            first_word(argv[1]);
            ft_putchar('\n');
    return (0);
}