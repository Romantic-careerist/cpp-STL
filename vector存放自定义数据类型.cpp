#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>

//存放自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;

	}

	string m_Name;
	int m_Age;
};

void myPrint(const Person& p)
{
	cout << "姓名：" << p.m_Name << "年龄: " << p.m_Age << endl;
}
void test01()
{
	vector<Person>v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	//向容器中存放数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it).m_Name << "年龄: " << (*it).m_Age <<" ";
		cout << "姓名：" << it->m_Name << "年龄: " << it->m_Age << endl;
	}


	cout << "******************" << endl;


	for_each(v.begin(), v.end(), myPrint);
}

//存放自定义数据类型 指针
void test02()
{
	vector<Person*>v;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	//向容器中存放数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*(*it)).m_Name << "年龄：" << (*(*it)).m_Age << " ";
		cout << "姓名：" << (*it)->m_Name << "年龄：" << (*it)->m_Age << endl;
	}
}


int main()
{
	test01();
	cout << "**********************" << endl;
	test02();

	system("pause");
	return 0;
}