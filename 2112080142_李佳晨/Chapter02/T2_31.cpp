/**FileName:   T2_31.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   ����������ʡ������
*/

#include <iostream>

using namespace std;

int main()
{
	int a;//ÿ�쿪����Ӣ����
	int b;//ÿ�������͵ļ۸�
	int c;//ÿ�������Ϳ��Կ���ƽ��Ӣ����
	int d;//ÿ�յ�ͣ����
	int e;//ÿ�յ�ͨ�з�
	int x;//ÿ������������
	cout << "ÿ�쿪����Ӣ����:";
	cin >> a;
	cout << "ÿ�������͵ļ۸�:";
	cin >> b;
	cout << "ÿ�������Ϳ��Կ���ƽ��Ӣ����:";
	cin >> c;
	cout << "ÿ�յ�ͣ����:";
	cin >> d;
	cout << "ÿ�յ�ͨ�з�:";
	cin >> e;
	x = (a / c) * b + d + e;
	cout << "ÿ������������" << x << endl;
	return 0;
}
