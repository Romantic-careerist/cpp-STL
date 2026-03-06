#include<iostream>
#include<vector>
using namespace std;

/*1.插入删除
push_back(else);//尾部插入元素ele
pop_back();//删除最后一个元素
insert(const_iterator pos,ele);//迭代器指向位置pos插入元素ele
insert(const_iterator pos,int count,ele);//迭代器指向位置pos插入count个元素ele
erase(const_iterator pos);//删除迭代器指向的元素
erase(count_iterator start,count_iterator end);//删除迭代器指向的元素
clear();//删除容器中所有的元素
*/
void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it;
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;
	for (int i = 1; i < 6; i++)
	{
		v1.push_back(i*10);
	}
	printVector(v1);

	//尾删
	v1.pop_back();
	printVector(v1);
	//插入
	v1.insert(v1.begin(),1, 100);
	printVector(v1);
	//删除
	v1.erase(v1.begin());
	printVector(v1);
	v1.erase(v1.begin()+2, v1.end());
	printVector(v1);
	v1.clear();
	printVector(v1);

}


/*2.数据存取
at(int idx);//返回索引idx所指的数据
operator[];//返回索引idx所指的数据
front();//返回容器中第一个数据元素
back();//返回容器中最后一个数据元素
*/
void test02()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//利用[]方式访问数组中的元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	//at访问
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i)<<" ";
	}
	cout << endl;
	//获取第一个元素
	cout << "第一个元素为：" << v1.front() << endl;
	//获取最后一个元素
	cout << "最后一个元素为：" << v1.back() << endl;
}

int main()
{
	//test01();
	test02();


	system("pause");
	return 0;
}