/**FileName:   T2_17.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   在同一行上输出1~4
*/
#include <iostream> 

using namespace std;

int main()
{
	// ( a ) 一条语句，一个流插入运算符
	cout << "1 2 3 4" << endl;

	// ( b ) 一条语句，四个流插入运算符
	cout << "1 " << "2 " << "3 " << "4" << endl;

	// ( c ) 四条语句
	cout << "1 ";
	cout << "2 ";
	cout << "3 ";
	cout << "4 ";

	return 0;
}