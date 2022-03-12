/**FileName:   T2_16.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   求两个数的和、差、积、商
*/
#include <iostream> 

using namespace std;

int main()
{
	double number1, number2;//声明用户输入的两个数
	double sum;             //声明两个数的和
	double difference;      //声明两个数的差
	double product;         //声明两个数的积
	double quotient;        //声明两个数的商

	cout << "请依次输入两个数：" << endl;//引导用户输入
	cin >> number1 >> number2;           //用户输入

	sum = number1 + number2;             //求和
	cout << " sum= " << sum << endl;     //输出两数的和

	difference = number1 - number2;                //求差
	cout << " difference= " << difference << endl; //输出两数的差

	product = number1 * number2;                   //求积
	cout << " product= " << product << endl;       //输出两数的积

	quotient = number1 / number2;                   //求商
	cout << " quotient= " << quotient << endl;       //输出两数的商

    return 0;
}