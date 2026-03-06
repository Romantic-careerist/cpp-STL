#include<iostream>
#include<deque>
#include<algorithm>//标准算法头文件
using namespace std;


void printDeque(const deque<int>&v)
{
	for(deque<int>::const_iterator it =v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout << endl;
}

/*
at(int idx)//返回索引idx所知的值
operator[]//返回索引idx所指的数据
front();//返回容器中第一个数据元素
back();//返回容器中最后一个数据元素
*/
//访问
void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(100);
	d.push_back(200);
	d.push_back(300);
	//通过[]方式访问元素
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;
	//通过at方式访问元素
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "第一个元素为：" << d.front() << endl;
	cout << "最后一个元素为：" << d.back() << endl;
}

//排序
void test02()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	printDeque(d);
	//排序，默认排序时间，从小到大 升序
	//对于随机访问的迭代器的容器，都可以利用sort算法直接排序
	sort(d.begin(), d.end());
	cout << "排序后：" << endl;
	printDeque(d);
}
int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}