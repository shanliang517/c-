/**FileName:   T2_24.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   判断数的奇偶
*/
#include <iostream>

using namespace std;

int main()
{
	int number;              //声明一个整数
	cout << "请输入一个整数";//引导用户输入
	cin >> number;           //用户输入

	if (number % 2 == 0)//用求模运算符判断是否可整除2
	{
		cout << "此数为偶数" << endl;
	}
	else
	{
		cout << "此数为奇数" << endl;
	}
	return 0;
}
