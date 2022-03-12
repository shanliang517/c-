/**FileName:   T2_28.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   输入五位整数，分解数位，依次输出
*/

#include <iostream>

using namespace std;

int main()
{
	int number;                     //声明一个整数
	int a[5];                       //声明一个数组
	int i;                          //计数器
	cout << "请输入一个五位整数："; //引导用户输入
	cin >> number;                  //用户输入

	for ( i = 0 ; i < 5 ; i ++ )    //依次取数位并依次存入数组
	{
		a[i] = number % 10;
		number = number / 10;
	}
	for (i = 4; i >= 0; i--)        //反输出数组
	{
		cout << a[i] << "   ";
	}
	return 0;
}
