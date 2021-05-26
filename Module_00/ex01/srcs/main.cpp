#include "../inc/phonebook.class.hpp"

static int	ft_add(Phonebook *infos, int i)
{
	if (++i < 8)
		infos[i].contact_add();
	else
		std::cout << "maximum number of contact reached\n";
	return (i);
}

static int	ft_exit(void)
{
	std::string valid;

	std::cout << "All your phonebook will be lost (y/n) : ";
	std::cin >> valid;
	if (valid == "y" || valid == "yes")
	{
		std::cout << "OK THX BYBYE :)\n";
		return (1);
	}
	return (0);
}

static int	cin_read(int i, Phonebook *infos)
{
	std::cout << "\e[1;36mSelect the index to display : \e[0m";
	while (!(std::cin >> i) || i < 0 || i > 7 || infos[i].get_firstname() == "")
	{
		if (std::cin.fail())
		{
			std::cout << "\e[1;36mWrong input : \e[0m";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else
			std::cout << "\e[1;36mWrong input : \e[0m";
	}
	return (i);
}

static void	ft_search(Phonebook *infos)
{
	int	i;

	i = -1;
	std::cout << "|     index| firstname|  lastname|  nickname|\n";
	while (++i < 8)
		if (infos[i].get_firstname() != "")
		{
			std::cout << "|         " << i << "|";
			infos[i].contact_search();
		}
	if (infos[0].get_firstname() != "")
	{
		i = cin_read(i, infos);
		infos[i].get_obj();
	}
}

int	main(void)
{
	int			i;
	std::string	cmd;
	Phonebook	infos[8];

	i = -1;
	std::cout << "\e[7;1;36m______WELCOME TO THE\e[1;33m PHONEBOOK \e[1;36mPROJECT______\e[0m\n\n";
	while (1)
	{
		std::cout << "\e[1;36mInput cmd : EXIT, ADD, SEARCH : \e[0m";
		std::cin >> cmd;
		if (cmd == "ADD")
			i = ft_add(infos, i);
		else if (cmd == "EXIT")
		{
			if (ft_exit())
				break;
		}
		else if (cmd == "SEARCH")
			ft_search(infos);
		else
			std::cout << cmd << " : command not found\n";
	}
	return (0);
}
