/**FileName:   T2_20.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   求圆的直径、周长、面积
*/
#include <iostream>

using namespace std;

int main()
{
	int r;                     //声明圆的半径
	double pi = 3.14159;       //声明pi的值
	cout << "请输入圆的半径：";//引导用户输入
	cin >> r;                  //用户输入

	cout << "圆的直径：" << 2 * r << endl;     //计算圆的直径
	cout << "圆的周长：" << 2 * pi * r << endl;//计算圆的周长
	cout << "圆的面积: " << pi * r * r << endl;//计算圆的面积
	return 0;
}