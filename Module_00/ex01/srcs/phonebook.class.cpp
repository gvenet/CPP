#include "../inc/phonebook.class.hpp"

Phonebook::Phonebook(void)
{
	return;
}

Phonebook::~Phonebook(void)
{
	return;
}

//===================================GETTERS=====================

void Phonebook::get_obj(void) const
{
	std::cout << "firstname : " << this->_firstname << std::endl;
	std::cout << "lastname : " << this->_lastname << std::endl;
	std::cout << "nickname : " << this->_nickname << std::endl;
	std::cout << "login : " << this->_login << std::endl;
	std::cout << "postal_address : " << this->_postal_address << std::endl;
	std::cout << "email_address : " << this->_email_address << std::endl;
	std::cout << "phone_number : " << this->_phone_number << std::endl;
	std::cout << "birthday_date : " << this->_birthday_date << std::endl;
	std::cout << "favorite_meal : " << this->_favorite_meal << std::endl;
	std::cout << "underwear_color : " << this->_underwear_color << std::endl;
	std::cout << "darkest_secret : " << this->_darkest_secret << std::endl;
}

std::string Phonebook::get_firstname(void) const
{
	return (this->_firstname);
}

//===================================SETTERS===================

void set_params(std::string *var, std::string s)
{
	std::string tmp;

	std::cout << s;
	std::getline(std::cin, tmp);
	*var = tmp;
}

void set_login(std::string *var, std::string s)
{

}

void Phonebook::contact_add(void)
{
	std::cin.ignore();
	set_params(&this->_firstname, "firstname : ");
	set_params(&this->_lastname, "lastname : ");
	set_params(&this->_nickname, "nickname : ");
	set_params(&this->_login, "login : ");
	set_params(&this->_postal_address, "postal_address : ");
	set_params(&this->_email_address, "email_address : ");
	set_params(&this->_phone_number, "phone_number : ");
	set_params(&this->_birthday_date, "birthday_date : ");
	set_params(&this->_favorite_meal, "favorite_meal : ");
	set_params(&this->_underwear_color, "underwear_color : ");
	set_params(&this->_darkest_secret, "darkest_secret : ");
}

void tmp_setter(std::string s)
{
	std::string tmp;
	size_t i;

	i = -1;
	if (s.size() < 10)
	{
		while (++i < 10 - s.size())
			tmp.insert(i, " ");
		tmp += s;
	}
	else if (s.size() == 10)
	{
		tmp = s;
		tmp.replace(9, 1, ".");
	}
	else
	{
		while (++i < 9)
			tmp.push_back(s.at(i));
		tmp.insert(i, ".");
	}
	std::cout << tmp << "|";
}

void Phonebook::contact_search(void) const
{
	tmp_setter(this->_firstname);
	tmp_setter(this->_lastname);
	tmp_setter(this->_nickname);
	std::cout << std::endl;
}
