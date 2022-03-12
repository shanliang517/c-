/**FileName:   T2_05.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   求三个整数的乘积
*/
#include <iostream>

using namespace std;

int main()
{
	int number1, number2, number3;         //声明三个整数
	cout << "请输入三个整数：";              //引导用户输入
	cin >> number1 >> number2 >> number3;  //用户输入
	cout << number1 * number2 * number3 << endl;
	return 0;
}