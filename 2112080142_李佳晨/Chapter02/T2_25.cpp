/**FileName:   T2_25.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   判断第一个数是否是第二个数的倍数
*/
#include <iostream>

using namespace std;

int main()
{
	int number1, number2;//声明两个整数
	cout << "请输入两个整数：";//引导用户输入
	cin >> number1 >> number2;//用户输入
	if (number1 % number2 ==0 )
	{
		cout << "第一个数是第二个数的倍数" << endl;
	}
	else
	{
		cout << "第一个数不是第二个数的倍数" << endl;
	}
	return 0;
}
