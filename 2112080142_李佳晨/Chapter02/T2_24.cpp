/**FileName:   T2_24.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   �ж�������ż
*/
#include <iostream>

using namespace std;

int main()
{
	int number;              //����һ������
	cout << "������һ������";//�����û�����
	cin >> number;           //�û�����

	if (number % 2 == 0)//����ģ������ж��Ƿ������2
	{
		cout << "����Ϊż��" << endl;
	}
	else
	{
		cout << "����Ϊ����" << endl;
	}
	return 0;
}
