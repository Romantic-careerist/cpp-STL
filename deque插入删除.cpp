#include<iostream>
#include<deque>
using namespace std;

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
/*两端插入删除
push_back(elem)//尾部添加数据
push_front(elem)//头部插入
pop_back();//删除容器最后一个数据
pop_front();
*/
void test01()
{
	deque<int>dl;

	dl.push_back(10);
	dl.push_back(20);
	dl.push_front(100);
	dl.push_front(200);
	printDeque(dl);
	
	dl.pop_back();
	printDeque(dl);
	
	dl.pop_front();
	printDeque(dl);
}

/*指定位置插入删除
insert(pop,elem)//在pop位置插入一个elem元素的拷贝，返回新的elem元素
insert(pos,n,elem)//在pos位置插入n个elem数据，无返回值
insert(pos,beg,end）//在pos位置插入[beg,end)区间的数据，无返回值
clear();//清空容器中的所有元素
eraser(beg,end)//删除[beg,end)区间的数据，返回下一个数据位置
eraser(pos）//删除pos位置的数据，返回下一个数据位置
*/
void testo2()
{
	deque<int>dl;
	dl.push_back(10);
	dl.push_back(20);
	dl.push_front(100);
	dl.push_front(200);
	printDeque(dl);

	dl.insert(dl.begin(), 1000);
	printDeque(dl);

	dl.insert(dl.begin(), 2, 2000);
	printDeque(dl);

	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	dl.insert(dl.begin(), d2.begin(), d2.end());
	printDeque(dl);

	deque<int>::iterator it = dl.begin();
	it++;
	dl.erase(it);
	printDeque(dl);
	dl.erase(dl.begin(), dl.end());
	printDeque(dl);
}


int main()
{
	test01();
	testo2();

	system("pause");
	return 0;
}