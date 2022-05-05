#include <iostream>
#include <string>
#include "House.h"
using namespace std;

int main()
{
	House myHouse;
	House yourHouse;
	House theirHouse("Green", 4, 10);

	myHouse.setNumStories(2);
	myHouse.setNumWindows(6);
	myHouse.setColor("red");

	yourHouse.setNumStories(3);
	yourHouse.setNumWindows(10);
	yourHouse.setColor("blue");

	myHouse.print();
	cout << endl;
	yourHouse.print();

	theirHouse.print();

	return 0;
}
