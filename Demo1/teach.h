#ifndef _TEACH_H
#define _TEACH_H

#include<iostream>
using namespace std;

class bird
{
public:
	bird(string color,int weight,int age);
	~bird();

	//静态属性：颜色，重量，年龄   动态属性：吃虫子，飞，睡觉，
	void Eat();
	void Fly();
	void Sleep();
	void Print();
private:
	string color;
	int weight;
	int age;
}; 

#endif
