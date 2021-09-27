#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    if (ac > 1)
        for(int i = 1; i < ac; i++)
        {
            for (int j = 0; av[i][j]; j++)
                putchar(toupper(av[i][j]));
            putchar(' ');
        }
    putchar ('\n');
    return (0);
}