#include "View2.h"
#include<iostream>
using namespace std;

int View2::showMenu()
{
	int choice;
	cout << "==== Welcome To Student Manager ====" << endl;
	cout << "1. Show all student" << endl;
	cout << "2. Add 1 student" << endl;
	cout << "3. Edit 1 student" << endl;
	cout << "4. Delete 1 student" << endl;
	cout << "5. Search" << endl;
	cout << "6. Statistical" << endl;
	cout << "Your choice is: " << endl;
	cin >> choice;
	return choice;
}

Student2 View2::showAdd()
{
	Student2 st;
	int a;
	string b, c, d;
	float e, f, g;
	cout << "ID: ";
	cin >> a; st.setID(a);
	cout << "Name: ";
	cin.ignore();
	getline(cin, b); st.setName(b);

	cout << "Address: ";
	fflush(stdin);
	getline(cin, c); st.setAddress(c);

	cout << "Sex: ";
	fflush(stdin);
	getline(cin, d); st.setSex(d);

	cout << "Math: ";
	cin >> e;
	while (e < 0 || e > 10) {
		cout << "Diem toan ko hop le, nhap lai: ";
		cin >> e;
	}
	st.setMath(e);

	cout << "Phys: ";
	cin >> f;
	while (f < 0 || f > 10) {
		cout << "Diem ly ko hop le, nhap lai: ";
		cin >> f;
	}
	st.setPhys(f);

	cout << "Chem: ";
	cin >> g;
	while (g < 0 || g > 10) {
		cout << "Diem hoa ko hop le, nhap lai: ";
		cin >> g;
	}
	st.setChem(g);
	return st;
}

int View2::showSearch()
{
	cout << "1. Search via ID" << endl;
	cout << "2. Search via name" << endl;
	cout << "3. Search via sum" << endl;
	cout << "4. Search via math" << endl;
	cout << "5. Search via phys" << endl;
	cout << "6. Search via chem" << endl;
	cout << "your choice is: ";
	int choice;
	cin >> choice;
	return choice;
}

void View2::showList(list<Student2> list2)
{
	list<Student2>::iterator it;
	for (it = list2.begin(); it != list2.end(); it++) {
		cout << (*it).getID() << " " << (*it).getName() << " " << (*it).getAddress() << " " << (*it).getSex() << " ";
		cout << (*it).getMath() << " " << (*it).getPhys() << " " << (*it).getChem() << endl;
	}
}

int View2::showSearchFrm()
{
	cout << "Enter ID: ";
	int id;
	cin >> id;
	return id;
}

Student2 View2::showEdit(Student2 st)
{
	cout << "Student: " << endl;
	cout << "ID: " << st.getID();
	cout << "\nName: " << st.getName();
	cout << "\nAddress: " << st.getAddress();
	cout << "\nSex: " << st.getSex();
	cout << "\nMath: " << st.getMath();
	cout << "\nPhys: " << st.getPhys();
	cout << "\nChem: " << st.getChem();
	cout << "\n Do you want edit... Y/N: ";
	char c;
	cin >> c;
	if (c == 'y' || c == 'Y') {
		cout << "New infor: " << endl;
		return showAdd();
	}
}

int View2::showDel(Student2 st)
{
	cout << "Student: " << endl;
	cout << "ID: " << st.getID();
	cout << "\nName: " << st.getName();
	cout << "\nAddress: " << st.getAddress();
	cout << "\nSex: " << st.getSex();
	cout << "\nMath: " << st.getMath();
	cout << "\nPhys: " << st.getPhys();
	cout << "\nChem: " << st.getChem();
	cout << "\ndo you want delete...";
	char c;
	cin >> c;
	if (c == 'y' || c == 'Y') {
		return 1;
	}
	return 0;
}

void View2::statistical(int n, int a, int b, int c, int d)
{
	cout << "Co tong so " << n << " sinh vien trong do co: " << endl;
	cout << a << " sinh vien co diem < 15" << endl;
	cout << b << " sinh vien co diem tu 15 den 20" << endl;
	cout << c << " sinh vien co diem tu 20 den 25" << endl;
	cout << d << " sinh vien co diem > 25" << endl;
}

int View2::showSortMenu()
{
	int choice;
	cout << "Sort by:" << endl;
	cout << "1.ID\n2.Name\n3.Sum\n";
	cin >> choice;
	return choice;
}

void View2::showOne(Student2 st)
{
	cout << st.getID() << "\t" << st.getName() << "\t" << st.getAddress() << "\t" << st.getSex() << "\t" << st.getMath() << "\t" << st.getPhys() << "\t" << st.getChem() << endl;
}

View2::View2()
{
}


View2::~View2()
{
}
