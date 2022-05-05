#include <iostream>
#include <string>
#include "House.h"
using namespace std;

House::House()
{
	this->numStories = 1;
	this->numWindows = 4;
	this->color = "green";
}

House::House(string color, int numWindows, int numStories)
{
	this->color = color;
	this->numWindows = numWindows;
	this->numStories = numStories;
}

House::~House()
{
	cout << "The " << color << " house with " << numStories << " stories "
		<< " and " << numWindows << " windows is being destroyed!" << endl;
}

void House::setNumStories(int numStories)
{
	this->numStories = numStories;
}

void House::setNumWindows(int numWindows)
{
	this->numWindows = numWindows;
}

void House::setColor(string color)
{
	this->color = color;
}

int House::getNumStories() const
{
	return numStories;
}

int House::getNumWindows() const
{
	return numWindows;
}

string House::getColor() const
{
	return color;
}

void House::print() const
{
	cout << "The house is " << color << " and has " << numStories << " number of stories" << " and " << numWindows << " windows" << endl;
}