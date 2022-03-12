/**FileName:   T2_18.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   比较两个整数
*/
#include <iostream>

using namespace std;

int main()
{
	int number1, number2;                  //声明两个整数
	int max;                               //声明最大值
	cout << "请依次输入两个整数：" << endl;//引导用户输入
	cin >> number1 >> number2;             //用户输入

	if (number1 == number2)                //判断是否相等
	{
		cout << "These numbers are equal " << endl;
	}
	else
	{
		max = (number1 > number2) ? number1 : number2;//判断最大值
		cout << max << "is large" << endl;
	}
	return 0;
}