#include <iostream>

int main(int argc, char **argv)
{
	int i = 1;

	if (argc > 1)
	{
		while(argv[i])
		{
			int j = 0;
			while (argv[i][j])
			{
				std::cout << char(toupper(argv[i][j]));
				j++;
			}
			i++;
			if (argv[i])
				std::cout << " ";
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}
