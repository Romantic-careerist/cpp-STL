#include<iostream>
using namespace std;

void test01()
{
	//string substr(int pos=0,int n=npos)const;//返回由pos开始的n个字符组成的字符串
	string str = "abcdef";
	string subStr = str.substr(1, 3);
	cout << "subStr=" << subStr << endl;
}

//实用操作
void test02()
{
	string email = "zhangsan@sina.com";
	//从邮件地址中 获取 用户信息
	int pos = email.find('@');
	string usrName = email.substr(0,pos);
	cout << usrName << endl;

}

int main()
{
	test01();
	test02();

	return 0;
}