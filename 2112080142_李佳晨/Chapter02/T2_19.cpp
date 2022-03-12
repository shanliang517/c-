/**FileName:   T2_19.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   求三个整数的和、平均值、乘积、最大值、最小值
*/
#include <iostream>

using namespace std;

int main()
{
	int number1, number2, number3;             //声明三个整数
	int Sum;                                   //声明三个整数的和
	int Average;                               //声明三个整数的平均值
	int Product;                               //声明三个整数的乘积
	int Smallest;                              //声明三个整数的最小值
	int Largest;                               //声明三个整数的最大值
	int max, min;                              //比较最大最小值的中间量

	cout << "Input three different integers：";//引导用户输入
	cin >> number1 >> number2 >> number3;      //用户输入

	Sum = number1 + number2 + number3;         //求和
	cout << "Sum is " << Sum << endl;

	Average = (number1 + number2 + number3) / 3;//求平均值
	cout << "Average is " << Average << endl;

	Product = number1 * number2 * number3;      //求乘积
	cout << "Product is " << Product << endl;
	                                            //求最小值
	min = (number1 < number2) ? number1 : number2;//判断 number1 与 number2 的大小
	                                              //将较小值的赋值给 min
	Smallest = (min < number3) ? min : number3;   //判断 min 与 number3 的大小
	cout << "Smallest is " << Smallest << endl;
	                                            //求最大值
	max = (number1 > number2) ? number1 : number2;//判断 number1 与 number2 的大小
												  //将较大值的赋值给 max
	Largest = (max > number3) ? max : number3;   //判断 max 与 number3 的大小    
	cout << "Largest is " << Largest << endl;

	return 0;
}
