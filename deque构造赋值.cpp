#include<iostream>
using namespace std;
#include<deque>

void printDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100; 容器中数据输出时不可修改
		cout << *it << " ";
	}
	cout << endl;
}

//deque构造函数
void test01()
{
	deque<int>dl;
	for (int i = 0; i < 10; i++)
	{
		dl.push_back(i);
	}
	printDeque(dl);

	deque<int>d2(dl.begin(), dl.end());//将[begin,end）拷贝给本身
	printDeque(d2);

	deque<int>d3(10, 100);//十个100
	printDeque(d3);

	//deque<int>d4=d3;
	deque<int>d4(d3);//同上
	printDeque(d4);
}

//deque赋值操作
void test02()
{
	deque<int>dl;
	for (int i = 0; i < 10; i++)
	{
		dl.push_back(i);
	}
	printDeque(dl);

	//operator=赋值
	deque<int>d2;
	d2 = dl;
	printDeque(d2);

	//assign赋值
	deque<int>d3;
	d3.assign(dl.begin(), dl.end());
	printDeque(d3);

	deque<int>d4;
	d4.assign(10, 100);
	printDeque(d4);

}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}