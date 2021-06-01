#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

typedef struct s_data
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::string replace;
} t_data;

static int error(std::string e)
{
	std::cout << e << std::endl;
	return (1);
}

static void init(t_data &d, char **av)
{
	d.filename = av[1];
	d.s1 = av[2];
	d.s2 = av[3];
	d.replace = d.filename;
	d.replace += ".replace";
}

static int file_does_not_exist(t_data &d)
{
	std::ifstream ifs(d.filename, std::ios::binary);

	if (ifs.fail())
		return (1);
	ifs.close();
	return (0);
}

static int routine(t_data &d)
{

	std::ifstream ifs(d.filename, std::ios::binary);
	std::ofstream ofs(d.replace, std::ios::binary);
	std::string line;
	std::size_t n;

	if (ifs.fail())
		return (1);
	while (getline(ifs, line))
	{
		n = line.find(d.s1);
		while (n != std::string::npos)
		{
			line.replace(n, d.s1.size(), d.s2);
			n = line.find(d.s1, n + d.s2.size());
		}
		ofs << line;
		ofs << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}

int main(int ac, char **av)
{
	t_data d;

	if (ac != 4)
		return (error("Wrong number of args"));
	init(d, av);
	if (d.s1.empty() || d.s2.empty())
		return (error("Empty args"));
	if (file_does_not_exist(d))
		return (error("The file does not exist"));
	routine(d);
	return (0);
}
