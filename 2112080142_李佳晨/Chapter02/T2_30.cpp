/**FileName:   T2_30.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   ��������ָ��������
*/
#include <iostream>

using namespace std;

int main()
{
	double a;  //����
	double b;  //���
	double BMI;//��������ָ��
	int x;     //ѡ��
	cout << "��ʹ�� ������ �� ��Ӣ�ߡ� Ϊ��λ�������� 0 "<<endl;
	cout << "��ʹ�� ��ǧ�ˡ� �� ���ס� Ϊ��λ�������� 1 " << endl;
	cin >> x;
	if (x == 1)
	{
		cout << "���������أ�ǧ�ˣ�:";
		cin >> a;
		cout << "��������ߣ��ף�:";
		cin >> b;
		BMI = a / (b * b);
	}
	if (x == 0)
	{
		cout << "���������أ�����:";
		cin >> a;
		cout << "��������ߣ�Ӣ�ߣ�:";
		cin >> b;
		BMI = a * 703 / (b * b);
	}
	cout << "BMI VALUES = " << BMI << endl;
	cout << "Underweight: less than 18.5" << endl;
	cout << "Normal:      between 18.5 and 24.9 " << endl;
	cout << "Overweight:  between 25 and 29.9" << endl;
	cout << "Obese:       30 or greater" << endl;
	if (BMI < 18.5) { cout << "You are Underweight"; }
	if (BMI >= 18.5 && BMI <= 24.9 ) { cout << "You are Normal"; }
	if (BMI >= 25 && BMI <= 29.9 ) { cout << "You are Overweight"; }
	if (BMI >= 30 ) { cout << "You are Obese"; }
	return 0;
}
