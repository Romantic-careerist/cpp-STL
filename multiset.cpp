#include<iostream>
using namespace std;
#include<set>

//multiset容器赋值和构造

void printmultiset(multiset<int>&s)
{
	for (multiset<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	multiset<int>s1;
	//插入和数据 只有insert方式
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	//multiset容器特点，自动排序，插入重复值会继续显示
	//遍历容器
	printmultiset(s1);

	multiset<int>s2(s1);//拷贝构造
	printmultiset(s2);

	multiset<int>s3;
	s3 = s2;
	printmultiset(s3);
}

int main()
{
	test01();

	system("pause");
	return 0;
}