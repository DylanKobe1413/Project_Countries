#include <iostream>
#include <string>
#include "Countries.h"
using namespace std;
int main(void)
{
	Countries UnitedStates;//default constructor
	Countries China(true, 416043270, "China", "CN");//Parameterized Constructor)
	Countries Mexico;//Overwriting default constructor manually by setting values.
	Mexico.set_Top3(false);
	Mexico.set_popCount(131151362);
	Mexico.set_state("Mexico");
	Mexico.set_initials("MX");
	Countries India(true, 409128296, "India", "IN");
	Countries Nigeria(false, 233967874, "Nigeria", "NG");
	Countries Indonesia(false, 284085215, "Indonesia", "ID");
	Countries Hawaii(false, 1435138, "Hawaii", "HI");
	Countries::print(UnitedStates);
	Countries::print(China);
	Countries::print(Mexico);
	Countries::print(India);
	Countries::print(Hawaii);
	Countries::print(Indonesia);
	Countries::print(Nigeria);
	Countries::Compare(UnitedStates, Mexico);
	Countries::Compare(China, UnitedStates);
	Countries::Compare(Indonesia, Nigeria);
	Countries::Compare(Mexico, Hawaii);
	Countries::Compare(UnitedStates, UnitedStates);
	return 0;
};

