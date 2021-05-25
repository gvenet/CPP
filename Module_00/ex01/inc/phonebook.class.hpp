#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <cctype>

class Phonebook
{

private:
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _login;
	std::string _postal_address;
	std::string _email_address;
	std::string _phone_number;
	std::string _birthday_date;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _darkest_secret;

public:
	Phonebook(void);
	~Phonebook(void);

// GETERS
	std::string get_firstname(void) const;
	void get_obj(void) const;

//METHODES
	void contact_add(void);
	void contact_search(void) const;
};

#endif
