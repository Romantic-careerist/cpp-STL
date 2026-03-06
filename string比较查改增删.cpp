#include<iostream>
using namespace std;
#include<string>

void test01()//比较
{
	string str1 = "xello";
	string str2 = "hello";

	if (str1.compare(str2) == 0)
	{
		cout << "str1等于str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1大于str2" << endl;
	}else{
			cout << "str1小于str2" << endl;
	}
}

void test02()//存取/读写
{
	string str = "hello";
	cout << "str=" << str << endl;

	//读
	//1.通过[]访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	//2.通过at方式访问单个字符
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//改
	str[0] = '0';
	cout << "str=" << str << endl;

	str.at(1) = '0';
	cout << "str=" << str << endl;
}

void test03()
{
	string str = "hello";
	//插入
	//string& insert(int pos,int n,char c)//在指定位置插入n个字符c
	str.insert(1, "111");
	cout << "str=" << str << endl;
	//删除
	str.erase(1, 3);
	cout << "str=" << str << endl;


}
int main()
{
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}