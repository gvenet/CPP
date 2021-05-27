#include "../inc/Pony.hpp"

static void ft_color(Pony *pony)
{
	std::cout << pony->get_name() << " is " << pony->get_color() << std::endl;
}

static void ft_rainbow_power(Pony *pony_focus, std::string color)
{
	pony_focus->set_color(color);
	ft_color(pony_focus);
	delete pony_focus;
}

int main(void)
{
	Pony pony1 = Pony("pincho", "rose", "rainbow");
	Pony *pony2 = new Pony("schling", "black", "reborn");
	int i;

	i = 0;
	while (i < 4)
	{
		ft_color(&pony1);
		ft_color(pony2);
		std::cout << pony1.get_name() << " use power of " << pony1.get_power() << std::endl;
		ft_rainbow_power(pony2, "yellow");
		pony2 = new Pony("schling", "black", "reborn");
		std::cout << pony2->get_name() << " used power of " << pony2->get_power() <<std::endl;
		i++;
	}
	delete pony2;
	return (0);
}
