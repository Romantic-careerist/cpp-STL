#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//vector容器互换
//1.基本使用
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);

	cout << "交换后" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);

}

//2.实际用途 用swap收缩内存空间
void test02()
{
	vector<int>v;
	for (int i = 0; i < 10000 ; i++)
	{
		v.push_back(i);
	}
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	v.resize(3);//重新指定大小
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	vector<int>(v).swap(v);
	//vector调用拷贝构造函数新建匿名容器对象，并用v的size3初始化其容量为3
	//再对两者进行交换。匿名对象当前行执行完系统自动回收
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;
}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}