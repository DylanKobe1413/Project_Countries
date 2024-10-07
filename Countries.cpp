#include "Countries.h"

//setters
void Countries::set_Top3(bool t)
{
	Top3 = t;
}

void Countries::set_popCount(int i)
{
	popCount = i;
}

void Countries::set_state(string s)
{
	country = s;
}

void Countries::set_initials(string z)
{
	initials = z;
}

//getters
string Countries::get_Top3()
{
	string words;
	if (Top3 == true)
	{
		words = "One of the Top three most populated Countries!";
		return words;
	}
	else if (Top3 == false)
	{
		words = "Not one of the Top three most populated Countries.";
	}
	return words;
}

int Countries::get_popCount()
{
	return popCount;
}

string Countries::get_state()
{
	return country;
}

string Countries::get_initials()
{
	return initials;
}


//constructors default to parameterized
Countries::Countries()
{
	Top3 = true;
	popCount = 336673595;
	country = "United States";
	initials = "U.S";
}

Countries::Countries(bool t, int i, string s, string z)
{
	Top3 = t;
	popCount = i;
	country = s;
	initials = z;
}

void Countries::print(Countries State)
{

	cout << State.get_state() << "| The Population count is " << State.get_popCount() << "| " << State.get_Top3() << "| Initials: " << State.get_initials() << "| \n\n";
}

void Countries::Compare(Countries state1, Countries state2)
{

	if (state1.get_popCount() > state2.get_popCount())

		cout << state1.get_state() << " has a greater population count than " << state2.get_state() << "\n\n";

	else if (state1.get_popCount() < state2.get_popCount())
		cout << state1.get_state() << " has a lesser population count than " << state2.get_state() << "\n\n";

	else if (state1.get_popCount() == state2.get_popCount())
		cout << state1.get_state() << " and " << state2.get_state() << " are  both equal in population" << "\n\n";
}