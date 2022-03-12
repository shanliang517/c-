/**FileName:   T2_31.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   共乘汽车节省计算器
*/

#include <iostream>

using namespace std;

int main()
{
	int a;//每天开的总英里数
	int b;//每加仑汽油的价格
	int c;//每加仑汽油可以开的平均英里数
	int d;//每日的停车费
	int e;//每日的通行费
	int x;//每日汽车的消费
	cout << "每天开的总英里数:";
	cin >> a;
	cout << "每加仑汽油的价格:";
	cin >> b;
	cout << "每加仑汽油可以开的平均英里数:";
	cin >> c;
	cout << "每日的停车费:";
	cin >> d;
	cout << "每日的通行费:";
	cin >> e;
	x = (a / c) * b + d + e;
	cout << "每日汽车的消费" << x << endl;
	return 0;
}
