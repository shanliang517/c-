/**FileName:   T2_23.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   �����������ȡ�����Сֵ
*/
#include <iostream>

using namespace std;

int main()
{
	int x1, x2, x3, x4, x5;           //�����������
	int max, min;                     //�ж������Сֵ���м�ֵ
	cout << "���������������";       //�����û�����
	cin >> x1 >> x2 >> x3 >> x4 >> x5;//�û�����
	if (x1 >= x2)                     //�Ƚ�ǰ����ֵ
	{
		max = x1;
		min = x2;
	}
	else
	{
		max = x2;
		min = x1;
	}
	if (max >= x3) { max = max; }     //�����жϴ�С
	else { max = x3; }                //�ó����ֵ
	if (max >= x4) { max = max; }
	else { max = x4; }
	if (max >= x5) { max = max; }
	else { max = x5; }

	if (min <= x3) { min = min; }     //�����жϴ�С
	else { min = x3; }                //�ó���Сֵ
	if (min <= x4) { min = min; }
	else { min = x4; }
	if (min <= x5) { min = min; }
	else { min = x5; }

	cout << "max=" << max << endl;
	cout << "min=" << min << endl;
	return 0;
}