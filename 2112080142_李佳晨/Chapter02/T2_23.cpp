/**FileName:   T2_23.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   从五个整数中取最大最小值
*/
#include <iostream>

using namespace std;

int main()
{
	int x1, x2, x3, x4, x5;           //声明五个整数
	int max, min;                     //判断最大最小值的中间值
	cout << "请输入五个整数：";       //引导用户输入
	cin >> x1 >> x2 >> x3 >> x4 >> x5;//用户输入
	if (x1 >= x2)                     //比较前两个值
	{
		max = x1;
		min = x2;
	}
	else
	{
		max = x2;
		min = x1;
	}
	if (max >= x3) { max = max; }     //依次判断大小
	else { max = x3; }                //得出最大值
	if (max >= x4) { max = max; }
	else { max = x4; }
	if (max >= x5) { max = max; }
	else { max = x5; }

	if (min <= x3) { min = min; }     //依次判断大小
	else { min = x3; }                //得出最小值
	if (min <= x4) { min = min; }
	else { min = x4; }
	if (min <= x5) { min = min; }
	else { min = x5; }

	cout << "max=" << max << endl;
	cout << "min=" << min << endl;
	return 0;
}