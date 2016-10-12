#pragma once
#include"Student2.h"
#include "DAO.h"
#include<iostream>
class StudentCtr
{
public:
	void add(string);
	void showAll();
	StudentCtr();
	void searchID();
	void searchName();
	void searchSum();
	void searchMath();
	void searchPhys();
	void searchChem();
	bool edit();
	bool del();
	void thongke();
	void swap(Student2, Student2);
	void sort(list<Student2>);
	bool checkID(int);
	~StudentCtr();
};

