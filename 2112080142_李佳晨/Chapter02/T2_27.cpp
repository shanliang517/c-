/**FileName:   T2_27.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   输入字符的等价整数值 ，输出相应字符 
*/

#include <iostream>

using namespace std;

int main()
{
	int number;                                              //声明一个整数
	char a;                                                  //声明一个字符
	cout << "请输入一个整数（该数应不小于 0 ，不大于 127 ）";//引导用户输入
	cin >> number;                                           //用户输入
	cout << static_cast<char>(number);
	return 0;
}
