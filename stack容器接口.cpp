#include<iostream>
#include<stack>
using namespace std;

void test01()
{
	stack<int>s;

	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	cout << "栈的大小前：" << s.size() << endl;

	//只要不为空，查看栈顶执行出栈
	while (!s.empty())
	{
		//查看栈顶与那苏
		cout << "栈顶元素："<<s.top() << endl;

		s.pop();//出栈
	}
	cout << "栈的大小：" << s.size() << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}