/**FileName:   T2_18.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   �Ƚ���������
*/
#include <iostream>

using namespace std;

int main()
{
	int number1, number2;                  //������������
	int max;                               //�������ֵ
	cout << "��������������������" << endl;//�����û�����
	cin >> number1 >> number2;             //�û�����

	if (number1 == number2)                //�ж��Ƿ����
	{
		cout << "These numbers are equal " << endl;
	}
	else
	{
		max = (number1 > number2) ? number1 : number2;//�ж����ֵ
		cout << max << "is large" << endl;
	}
	return 0;
}