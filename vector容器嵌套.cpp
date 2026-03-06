#include<iostream>
using namespace std;
#include<vector>;

void test01()
{
	vector<vector<int>>v;
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;
	for (int i = 0; i < 4; i++)
	{
		//每循环一次自动分别给每个内容器后多+元素
		v1.push_back(i + 1);//1234
		v2.push_back(i + 2);//2345
		v3.push_back(i + 3);//3456
		v4.push_back(i + 4);//4567
	}

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		//it是内容器的地址，(*it)是内容器 vector<int>
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
			//vit是int地址*vit是v1
		{
			cout << *vit<<" ";
		}
		cout << endl;
	}

}

int main()
{
	test01();

	system("pause");
	return 0;
}