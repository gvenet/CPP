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

static void cpy_file(t_data &d)
{

	std::ifstream ifs(d.filename, std::ios::binary);
	std::ofstream ofs(d.replace, std::ios::binary);
	ofs << ifs.rdbuf();
	ifs.close();
	ofs.close();
}

static void replace(t_data &d)
{
	std::ifstream ifs(d.filename, std::ios::binary);
	std::ofstream ofs(d.replace, std::ios::binary);
	std::string strTemp;

	while (ifs.eof())
	{
		if (strTemp == d.s1)
		{
			strTemp = d.s1;
		}
		strTemp += " ";
		ofs << strTemp;
	}
	ifs.close();
	ofs.close();
}

int main(int ac, char **av)
{
	t_data d;

	if (ac != 4)
		return (error("Wrong number of args"));
	init(d, av);
	if (d.s1 == "" || d.s2 == "")
		return (error("Empty args"));
	cpy_file(d);
	replace(d);

	return (0);
}
