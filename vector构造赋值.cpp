#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector构造函数
/*
1.vector<T> v;//采用模板实现类实现，默认构造函数
2.vector(v.begin(),v.end(））；//将v[begin(),end())区间中的元素拷贝给本身
3.vector(n,elem);//构造函数将n个elem拷贝给本身
4.vector(const vector &vec）;//拷贝构造函数
*/
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2(v1.begin(), v1.end());//2.
	printVector(v2);

	vector<int>v3(10, 100);//3.
	printVector(v3);

	vector<int>v4(v3);//4.
	printVector(v4);
}

//vector赋值
/*
1.vector& operator=(const vector &vec);//重载等号操作
2.assign(beg,end);//将[beg,end)区间中的数据拷贝赋值给本身
3.assigen(n,elem);//将n个elem赋值给本身
*/
void test02()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2 = v1;
	printVector(v2);

	vector<int>v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	vector<int>v4;
	v4.assign(10, 100);
	printVector(v4);


}



int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}