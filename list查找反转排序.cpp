#include<iostream>
using namespace std;
#include<list>
#include<algorithm>

//读取
void test01()
{

	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//L1.[0]不可用[]方式访问lIst容器元素
	//L1.at(0)不可用at方式访问list容器元素
	//原因：list本质是链表，不是连续线性空间存储数据，迭代器不支持随机访问
	
	//验证迭代器不支持随机访问
	list<int>::iterator it = L1.begin();
	//it = it + 1;//+3+任何都报错,不支持随机访问
	it++;//支持双向
	it--;

	cout << "第一个元素：" << L1.front() << endl;
	cout << "最后一个元素：" << L1.back() << endl;
}

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//反转
void test02()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	cout << "反转前：" << endl;
	printList(L1);

	L1.reverse();
	cout << "反转后：" << endl;
	printList(L1);
}

bool myCompare(int v1, int v2)
{
	//降序 就让第一个数 > 第二个数
	return v1 > v2;
}

//排序
void test03()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(40);
	L1.push_back(30);
	L1.push_back(20);

	cout << "排序前：" << endl;
	printList(L1);
	
	//不支持随机访问迭代器的容器，不可用标准算法
	//sort(L1.begin(), L1.end());//全局函数
	//但是会提供内部成员函数，如：
	L1.sort();//默认从小到大
	
	cout << "排序后：" << endl;
	printList(L1);

	//从大到小
	L1.sort([](int a, int b) { return a > b; });
	//L1.sort(myCompare);
	printList(L1);
}
int main()
{
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}
