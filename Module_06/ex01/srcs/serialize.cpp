#include "../inc/serialize.hpp"

std::string genRandom(void)
{
	std::string tmp_s;
	std::string const alphanum ="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < 8; ++i)
		tmp_s += alphanum[rand() % alphanum.size()];
	return tmp_s;
}

void *serialize(void)
{
	Data *d = new Data;

	d->s1 = genRandom();
	d->n = rand() % INT_MAX ;
	d->s2 = genRandom();
	std::cout << "before_cast : " << d->s1 << d->n << d->s2 << std::endl;
	return reinterpret_cast<void*>(d);
}

Data *deserialize(void *raw)
{
	Data *d = reinterpret_cast<Data*>(raw);

	std::cout << "after_cast  : " << d->s1 << d->n << d->s2 << std::endl;
	return d;
}
