#include "Student2.h"

void Student2::setID(int x)
{
	id = x;
}

int Student2::getID()
{
	return id;
}

void Student2::setName(string x)
{
	name = x;
}

string Student2::getName()
{
	return name;
}

void Student2::setAddress(string x)
{
	address = x;
}

string Student2::getAddress()
{
	return address;
}

void Student2::setSex(string x)
{
	sex = x;
}

string Student2::getSex()
{
	return sex;
}

void Student2::setMath(float x)
{
	math = x;
}

float Student2::getMath()
{
	return math;
}

void Student2::setPhys(float x)
{
	phys = x;
}

float Student2::getPhys()
{
	return phys;
}

void Student2::setChem(float x)
{
	chem = x;
}

float Student2::getChem()
{
	return chem;
}

Student2::Student2()
{
}

Student2::Student2(int id1, string name1, string address1, string sex1, float m1, float p1, float c1)
{
	id = id1;
	name = name1;
	address = address1;
	sex = sex1;
	math = m1;
	phys = p1;
	chem = c1;
}


Student2::~Student2()
{
}
