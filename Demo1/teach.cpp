#include "teach.h"

bird::bird(string color, int weight, int age):color(color),weight(weight)
{
	cout << "bird()" << endl;
	this->age = age;
}

bird::~bird()
{
	cout << "~bird()" << endl;
}

void bird::Eat()
{
	cout << "eat()" << endl;
}

void bird::Sleep()
{
	cout << "Sleep()" << endl;
}

void bird::Fly()
{
	cout << "Fly()" << endl;
}

void bird::Print()
{
	cout << "age " << age << " weight " << weight << " color " << color << endl;;
}