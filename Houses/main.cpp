#include <iostream>
#include <string>
using namespace std;

class House {
public:
	void setNumStories(int numStories)
	{
		this->numStories = numStories;
	}

	void setNumWindows(int numWindows)
	{
		this->numWindows = numWindows;
	}

	void setColor(string color)
	{
		this->color = color;
	}

	int getNumStories() const
	{
		return numStories;
	}

	int getNumWindows() const
	{
		return numWindows;
	}

	string getColor() const
	{
		return color;
	}

private:
	int numStories;
	int numWindows;
	string color;
};


void printHouseData(const House& house);

int main()
{
	House myHouse;
	House yourHouse;

	myHouse.setNumStories(2);
	myHouse.setNumWindows(6);
	myHouse.setColor("red");

	yourHouse.setNumStories(3);
	yourHouse.setNumWindows(10);
	yourHouse.setColor("blue");

	/*cout << "My house is: " << myHouse.getColor() << " and has " << myHouse.getNumStories() << " stories and " << myHouse.getNumWindows() << " number of windows " << endl;
	cout << "Your house is: " << yourHouse.getColor() << " and has " << yourHouse.getNumStories() << " stories and " << yourHouse.getNumWindows() << " number of windows" << endl;*/

	printHouseData(myHouse);
	cout << endl;
	printHouseData(yourHouse);

	return 0;
}

void printHouseData(const House& house)
{
	string houseColor = house.getColor();
	int numHouseStories = house.getNumStories();
	int numHouseWindows = house.getNumWindows();

	cout << "The color of the house is " << houseColor << endl;
	cout << "The number of stories in the house is " << numHouseStories << endl;
	cout << "The number of windows in the house is " << numHouseWindows << endl;
}