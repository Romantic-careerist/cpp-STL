#include<iostream>
using namespace std;
#include<string>

void test01()//string的构造函数
{
	string s1;//1.

	const char* str = "hello world";
	string s2(str);//2.字符串初始化
	cout << "s2=" << s2 << endl;

	string s3(s2);//3.拷贝构造，用一个string对象初始化另外一个
	cout << "s3=" << s3 << endl;

	string s4(10, 'a');//使用10个字符a初始化对象
	cout << "s4=" << s4 << endl;
}

void test02()//string容器赋值操作
{
	/*
	1.string&operator=(const char*s)------char*类型字符串，赋值给当前的字符串
	2.string& operator=（const string &s);-----把字符串s付给当前的字符串
	3.string& operator=(const c)------字符赋值给当前的字符串
	4.string& assign(const char*s)----把字符串s付给当前的字符串
	5.string& assign(const char*s,int n);----把字符串前n个字符付给当前的字符串
	6.string& assign(const string &s);------把字符串s付给当前的字符串
	7.string& assign(int n,char c);-------用n个字符c赋给当前字符串

	*/
	string str1;//1.
	str1 = "hello world";
	cout << "str1=" << str1 << endl;

	string str2;
	str2 = str1;//2
	cout << "str2= " << str2 << endl;

	string str3;//3
	str3 = 'a';//string str3='a'不可以，但是=''a''可以"a" 是 const char[2] 类型，可隐式转换为 string
	cout << "str3=" << str3 << endl;

	string str4;//4.
	str4.assign("hello c++");
	cout << "str4=" << str4 << endl;

	string str5;//5.
	str5.assign("hello c++", 7);
	cout << "str5=" << str5 << endl;

	string str6;//6.
	str6.assign(str5);
	cout << "str6=" << str6 << endl;

	string str7;//7.
	str7.assign(5, '+');
	cout << "str7=" << str7 << endl;
}

void test03()//string字符串拼接
{
/*
	1.string& operator+=(const char* str)//重载+=操作符
	2.string& operator+=(const char c);//同上
	3.string& operator+=(const string& str);//同上
	4.string& append(const char*s);//把字符串s连接到当前字符串结尾
	5.string& append(const char*s,int n);//把字符串的前n个字符连接到当前字符串结尾
	6.string& append(cnst string &s);//同operator+=(const string&str)
	7.string& apend(const string &s,int pos,int n);//字符串s中从pos开始的n个字符连接到字符串结尾
*/
	string str1 = "我";
	str1 += "爱玩游戏";//1.
	cout << "str1=" << str1 << endl;
	str1 += '!';//2.
	cout << "str1=" << str1 << endl;
	string str2="老师，";
	str2 += str1;//3.
	cout << "str2=" << str2 << endl;

	string str3="I ";
	str3.append("love ");//4.
	cout << "str3=" << str3 << endl;
	str3.append("games abcd", 5);//5.
	cout << "str3=" << str3 << endl;
	string str4 = "!";
	str3.append(str4);//6.
	cout << "str3=" << str3 << endl;
	string str5 = "abcde";
	//如果是“哈哈哈哈哈”只会拼接一个哈，一个汉字3字节，一个ASCII是1字节
	str3.append(str5, 2, 3);//7.
	cout << "str3=" << str3 << endl;

	string str7 = "absc";
	cout << str7.size();
	cout << str7.length();

}

int main()
{
	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}