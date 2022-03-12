/**FileName:   T2_30.cpp
  *Author:     Jiachen Li
  *E-mail:     2314264766@qq.com
  *Date:       Mar 12th ,2022
  *College:    School of Computer Science and Information Engineering
  *Function:   身体质量指数计算器
*/
#include <iostream>

using namespace std;

int main()
{
	double a;  //体重
	double b;  //身高
	double BMI;//身体质量指数
	int x;     //选择
	cout << "若使用 “磅” 与 “英尺” 为单位，请输入 0 "<<endl;
	cout << "若使用 “千克” 与 “米” 为单位，请输入 1 " << endl;
	cin >> x;
	if (x == 1)
	{
		cout << "请输入体重（千克）:";
		cin >> a;
		cout << "请输入身高（米）:";
		cin >> b;
		BMI = a / (b * b);
	}
	if (x == 0)
	{
		cout << "请输入体重（磅）:";
		cin >> a;
		cout << "请输入身高（英尺）:";
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
