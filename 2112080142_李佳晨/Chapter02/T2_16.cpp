/**FileName:   T2_16.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   ���������ĺ͡��������
*/
#include <iostream> 

using namespace std;

int main()
{
	double number1, number2;//�����û������������
	double sum;             //�����������ĺ�
	double difference;      //�����������Ĳ�
	double product;         //�����������Ļ�
	double quotient;        //��������������

	cout << "������������������" << endl;//�����û�����
	cin >> number1 >> number2;           //�û�����

	sum = number1 + number2;             //���
	cout << " sum= " << sum << endl;     //��������ĺ�

	difference = number1 - number2;                //���
	cout << " difference= " << difference << endl; //��������Ĳ�

	product = number1 * number2;                   //���
	cout << " product= " << product << endl;       //��������Ļ�

	quotient = number1 / number2;                   //����
	cout << " quotient= " << quotient << endl;       //�����������

    return 0;
}