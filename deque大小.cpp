#include<iostream>
#include<deque>
using namespace std;

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//deque容器大小操作
void test01()
{
	deque<int>dl;
	for (int i = 0; i < 10; i++)
	{
		dl.push_back(i);
	}
	printDeque(dl);

	if (dl.empty())
	{
		cout << "dl为空" << endl;
	}
	else
	{
		cout << "d1不为空" << endl;
		cout << "dl的大小为："<< dl.size() << endl;
		//deque没有容量capacity概念，可无限添加数据
	}
	//重新指定大小
	dl.resize(15,1);//重载了1,多于位置用1填充
	printDeque(dl);

	dl.resize(5);
	printDeque(dl);

}

int main()
{
	test01();

	system("pause");
	return 0;
}
