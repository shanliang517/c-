/**FileName:   T2_27.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   �����ַ��ĵȼ�����ֵ �������Ӧ�ַ� 
*/

#include <iostream>

using namespace std;

int main()
{
	int number;                                              //����һ������
	char a;                                                  //����һ���ַ�
	cout << "������һ������������Ӧ��С�� 0 �������� 127 ��";//�����û�����
	cin >> number;                                           //�û�����
	cout << static_cast<char>(number);
	return 0;
}
