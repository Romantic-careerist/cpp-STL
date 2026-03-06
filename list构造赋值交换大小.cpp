#include<iostream>
#include<list>
using namespace std;

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//list构造函数
void test01()
{
	//1.默认构造
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	//2.区间构造
	list<int>L2(L1.begin(), L1.end());//复制L1
	printList(L2);

	//3.拷贝构造
	list<int>L3(L2);
	printList(L3);

	//4.n个elem
	list<int>L4(10, 1000);
	printList(L4);
}

//赋值
void test02()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	list<int>L2;
	L2 = L1;//operator=赋值
	printList(L2);
	list<int>L3;
	L3.assign(L2.begin(), L2.end());//assign()
	printList(L3);
	list<int>L4;
	L4.assign(10, 100);
	printList(L4);

}
//交换
void test03()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int>L2;
	L2.assign(10, 100);
	cout << "交换前：" << endl;
	printList(L1);
	printList(L2);

	L1.swap(L2);
	cout << "交换后：" << endl;
	printList(L1);
	printList(L2);

}

//大小
void test04()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);


	L1.resize(10, 1000);//指定大小
	printList(L1);
	L1.resize(2);
	printList(L1);
}

int main()
{
	//test01();
	//test02();
	//test03();
	test04();

	system("pause");
	return 0;
}