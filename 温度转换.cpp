#include<iostream>
using namespace std;
double change(double F)
{
	return (F-32)*5/9;
}
int main()
{
	double F;
	cout<<"����Ҫת���Ļ����¶�ֵ��";
	cin>>F;
	cout<<"ת����������¶�Ϊ��"<<change(F)<<endl;
}