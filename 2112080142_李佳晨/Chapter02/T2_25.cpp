/**FileName:   T2_25.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   �жϵ�һ�����Ƿ��ǵڶ������ı���
*/
#include <iostream>

using namespace std;

int main()
{
	int number1, number2;//������������
	cout << "����������������";//�����û�����
	cin >> number1 >> number2;//�û�����
	if (number1 % number2 ==0 )
	{
		cout << "��һ�����ǵڶ������ı���" << endl;
	}
	else
	{
		cout << "��һ�������ǵڶ������ı���" << endl;
	}
	return 0;
}
