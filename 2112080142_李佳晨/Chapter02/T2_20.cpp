/**FileName:   T2_20.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   ��Բ��ֱ�����ܳ������
*/
#include <iostream>

using namespace std;

int main()
{
	int r;                     //����Բ�İ뾶
	double pi = 3.14159;       //����pi��ֵ
	cout << "������Բ�İ뾶��";//�����û�����
	cin >> r;                  //�û�����

	cout << "Բ��ֱ����" << 2 * r << endl;     //����Բ��ֱ��
	cout << "Բ���ܳ���" << 2 * pi * r << endl;//����Բ���ܳ�
	cout << "Բ�����: " << pi * r * r << endl;//����Բ�����
	return 0;
}