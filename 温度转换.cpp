#include<iostream>
using namespace std;
double change(double F)
{
	return (F-32)*5/9;
}
int main()
{
	double F;
	cout<<"输入要转换的华氏温度值：";
	cin>>F;
	cout<<"转换后的摄氏温度为："<<change(F)<<endl;
}