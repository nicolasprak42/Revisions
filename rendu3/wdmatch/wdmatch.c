#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	j;
	int	trouve;

	if (argc == 3)
	{
		trouve = 1;
		i = 0;
		j = 0;
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
					break;
				j++;
			}
			if (argv[2][j] == '\0')
			{
				trouve = 0;
				break;
			}
			i++;
		}
		if (trouve == 1)
		{
			i = 0;
			while (argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}