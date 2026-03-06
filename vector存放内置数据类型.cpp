#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>//标准算法头文件

//vector容器存放数据类型
void myPrint(int val)
{
	cout << val << endl;
}

void test01()
{
	vector<int>v;//创建vector容器，数组
	v.push_back(10);//向容器插入数据
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//遍历方式1，迭代器当指针用
	//通过迭代器访问容器数据
	vector<int>::iterator itBegin = v.begin();//起始迭代器，指向容器第一个元素
	vector<int>::iterator itEnd = v.end();//结束迭代器，指向容器迭代元素的下一个位置
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}

	//遍历方式2，
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	//遍历方式3，STL提供的遍历算法,回调函数
	for_each(v.begin(), v.end(), myPrint);



}

int main()
{
	test01();

	system("pause");
	return 0;
}