/**FileName:   T2_28.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   ������λ�������ֽ���λ���������
*/

#include <iostream>

using namespace std;

int main()
{
	int number;                     //����һ������
	int a[5];                       //����һ������
	int i;                          //������
	cout << "������һ����λ������"; //�����û�����
	cin >> number;                  //�û�����

	for ( i = 0 ; i < 5 ; i ++ )    //����ȡ��λ�����δ�������
	{
		a[i] = number % 10;
		number = number / 10;
	}
	for (i = 4; i >= 0; i--)        //���������
	{
		cout << a[i] << "   ";
	}
	return 0;
}
