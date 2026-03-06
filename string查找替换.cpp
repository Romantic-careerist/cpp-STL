#include<iostream>
using namespace std;
#include<string>

//字符串查找和替换
/*函数原型
	1.int find(const string& str,int pos = 0)cost;//查找str第一次出现位置，从pos开始查找
	2.int find(const char* s,int pos = 0)const;//查找s第一次出现位置，从pos开始查找
	3.int find(const char*s,int pos,int n)const;//从pos位置查找s的前n个字符第一次位置
	4.int find(const char c,int pos = 0)const;//查找字符c第一次出现位置
	5.int rfind(const string& str,int pos=npos)const;//查找str最后一次位置，从pos开始查找
	6.int rfind(const char*s,int pos = npos)const;//查找str最后一次出现位置，从pos开始查找
	7.int rfind(const char*s,int pos,int n)const;//从pos查找s的前n个字符最后一次位置
	8.int rfind(const char*s,int pos = 0)cosnt;//查找字符c最后一次出现位置
	9.string& replace(int pos,int n,cosnt string& str);//替换从pos开始n个字符为字符串str
	10.string& replace(int pos,int n,const char*s);//替换从pos开始的n个字符为字符串s
	*/

void test01()//string查找
{

	string str1 = "abcdefgde";
	//find 从左往右查找
	int pos = str1.find("de");
	if (pos == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else {
		cout << "找到字符串，pos=" << pos << endl;
	}
	
	//rfind-right find->从右往左查找
	pos = str1.rfind("de");
	if (pos == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else {
		cout << "找到字符串，pos=" << pos << endl;
	}
}

void test02()//string替换
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");//9.
	cout << "str1=" << str1 << endl;//a1111efg
	const char* c = "v";
	str1.replace(1, 3, c);
	cout << "str1=" << str1 << endl;


}

int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}