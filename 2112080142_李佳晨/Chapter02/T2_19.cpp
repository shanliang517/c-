/**FileName:   T2_19.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   �����������ĺ͡�ƽ��ֵ���˻������ֵ����Сֵ
*/
#include <iostream>

using namespace std;

int main()
{
	int number1, number2, number3;             //������������
	int Sum;                                   //�������������ĺ�
	int Average;                               //��������������ƽ��ֵ
	int Product;                               //�������������ĳ˻�
	int Smallest;                              //����������������Сֵ
	int Largest;                               //�����������������ֵ
	int max, min;                              //�Ƚ������Сֵ���м���

	cout << "Input three different integers��";//�����û�����
	cin >> number1 >> number2 >> number3;      //�û�����

	Sum = number1 + number2 + number3;         //���
	cout << "Sum is " << Sum << endl;

	Average = (number1 + number2 + number3) / 3;//��ƽ��ֵ
	cout << "Average is " << Average << endl;

	Product = number1 * number2 * number3;      //��˻�
	cout << "Product is " << Product << endl;
	                                            //����Сֵ
	min = (number1 < number2) ? number1 : number2;//�ж� number1 �� number2 �Ĵ�С
	                                              //����Сֵ�ĸ�ֵ�� min
	Smallest = (min < number3) ? min : number3;   //�ж� min �� number3 �Ĵ�С
	cout << "Smallest is " << Smallest << endl;
	                                            //�����ֵ
	max = (number1 > number2) ? number1 : number2;//�ж� number1 �� number2 �Ĵ�С
												  //���ϴ�ֵ�ĸ�ֵ�� max
	Largest = (max > number3) ? max : number3;   //�ж� max �� number3 �Ĵ�С    
	cout << "Largest is " << Largest << endl;

	return 0;
}
