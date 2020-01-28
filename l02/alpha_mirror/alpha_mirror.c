
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i;
    char let;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            let = argv[1][i];
            if ('A' <= argv[1][i] && 'Z' >= argv[1][i])
            let = 'Z' - argv[1][i] + 'A';
            if ('a' <= argv[1][i] && 'z' >= argv[1][i])
            let = 'z' - argv[1][i] + 'a';
            ft_putchar(let);
            i += 1;
        }
    }
    ft_putchar('\n');
    return (0);
}