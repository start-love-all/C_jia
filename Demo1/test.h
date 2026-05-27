#ifndef _TEST_H_
#define _TEST_H_

#include<iostream>
using namespace std;

class Test
{
public:
	Test();

	~Test();

private:
	int m_iVal;
};

class TestA :virtual public Test
{
public:
	TestA();

	~TestA();
private:
	int m_iVal;
};


class TestB :virtual public Test
{
public:
	TestB();

	~TestB();
private:
	int m_iVal;
};


class TestC : public TestA , public TestB
{
public:
	TestC();

	~TestC();
private:
	int m_iVal;
};

#endif