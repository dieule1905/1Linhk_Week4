#include "DAO.h"
#include<fstream>
#include<mutex>

mutex mu;

bool DAO::writeFile(Student2 st, string path)
{
	mu.lock();
	fstream f;
	f.open("output.txt", ios::out | ios::app);
	f << st.getID() << "\t" << st.getName() << "\t" << st.getAddress() << "\t" << st.getSex() << "\t";
	f << st.getMath() << "\t" << st.getPhys() << "\t" << st.getChem() << endl;
	f.close();
	mu.unlock();
	return true;
}

string DAO::readFile()
{
	string out, line;
	fstream f;
	f.open("output.txt", ios::in);
	while (getline(f, line)) {
		out += line + "\n";
	}
	return out;
}

//void DAO::writeFileThread(string path, string s)
//{
//	mu.lock();
//	fstream f;
//
//	f.open(path, ios::out | ios::app);
//
//	f << s;
//
//	f.close();
//	mu.unlock();
//}
//
//string DAO::readFileThread(string path)
//{
//	fstream f;
//
//	string s, line;
//
//	f.open(path, ios::in);
//
//	while (getline(f, line)) {
//
//		s += line + "\n";
//
//	}
//
//	return s;
//}

list<Student2> DAO::readList(string path)
{
	list<Student2> list;
	Student2 st;
	string line;
	fstream f;
	f.open(path, ios::in);
	int id;
	string name, address, sex;
	float math, phys, chem;
	while (getline(f, line)) {
		bool flag = true;
		try
		{
			int p = line.find("\t");
			id = stoi(line.substr(0, p)); st.setID(id);
			line = line.substr(p + 1);
			name = line.substr(0, p).c_str(); st.setName(name);
			line = line.substr(p + 1);
			address = line.substr(0, p).c_str(); st.setAddress(address);
			line = line.substr(p + 1);
			sex = line.substr(0, p); st.setSex(sex);
			line = line.substr(p + 1);
			math = stof(line.substr(0, p)); st.setMath(math);
			line = line.substr(p + 1);
			phys = stof(line.substr(0, p)); st.setPhys(phys);
			line = line.substr(p + 1);
			chem = stof(line.substr(0, p)); st.setChem(chem);
			list.push_back(st);
		}
		catch (const std::exception&)
		{
			flag = false;
		}
		if (flag == false) {
			continue;
		}
	}
	return list;
}

DAO::DAO()
{
}


DAO::~DAO()
{
}
