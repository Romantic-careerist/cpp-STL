#include<iostream>
using namespace std;
#include<set>

void printSet(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//set容器赋值和构造
void test01()
{
	set<int>s1;
	//插入和数据 只有insert方式

	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	//set容器特点，自动排序，插入重复值会不现实
	//遍历容器
	printSet(s1);
	set<int>s2(s1);//拷贝构造
	printSet(s2);

	set<int>s3;
	s3 = s2;
	printSet(s3);
}

//set大小
void test02()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	printSet(s1);

	if (s1.empty())
	{
		cout << "s1为空" << endl;
	}
	else
	{
		cout << "s1不为空" << endl;
		cout << "s1大小为：" << s1.size() << endl;
	}
}
//set交换
void test03()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);

	set<int>s2;
	s2.insert(100);
	s2.insert(400);
	s2.insert(300);
	s2.insert(200);
	s2.insert(300);

	cout << "交换前：" << endl;
	printSet(s1);
	printSet(s2);

	cout << "交换后：" << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
}

int main()
{
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}