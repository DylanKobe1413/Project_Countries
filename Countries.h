#pragma once
#include <iostream>
#include <string>
using namespace std;
class Countries
{
private:

	bool	Top3;// apart of top 3 populated states
	int		popCount;//populationCount
	string	country;//State Name
	string	initials = " ";//Initials (TX)

public:
	//setters
	void set_Top3(bool);
	void set_popCount(int);
	void set_state(string);
	void set_initials(string);

	//getters
	string get_Top3();
	int	   get_popCount();
	string get_state();
	string get_initials();

	//constructors organized from deafult to parameterized constructor
	Countries(); //default constructer
	Countries(bool, int, string, string); // parametreized constructor

	static void print(Countries);
	static void Compare(Countries, Countries);
};

