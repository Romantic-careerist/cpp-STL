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

//插入删除
void test01()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	//遍历
	printSet(s1);
	//删除
	s1.erase(s1.begin());
	printSet(s1);
	//删除重载版本
	s1.erase(30);
	printSet(s1);
	//清空
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	printSet(s1);
}

//查找
void test02()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	set<int>::iterator pos = s1.find(300);
	if (pos != s1.end())
	{
		cout << "找到元素：" << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}

	
}

//统计
void test03()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	//统计个数
	int num = s1.count(30);
	cout << "num=" << num << endl;
}
int main()
{
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}
