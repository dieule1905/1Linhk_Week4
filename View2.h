#pragma once
#include"Student2.h"
#include<List>
class View2
{
public:
	int showMenu();
	Student2 showAdd();
	int showSearch();
	void showList(list<Student2>);
	int showSearchFrm();
	Student2 showEdit(Student2);
	int showDel(Student2);
	void statistical(int, int, int, int, int);
	int showSortMenu();
	void showOne(Student2);
	View2();
	~View2();
};

