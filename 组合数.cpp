#include <iostream>
using namespace std;
int fac(int m,int n);
int main()
{
	int m,n;
	cout <<"输入m,n:\n";
	cin>>m>>n;
	while(1)
	{
		if(m<n)
		{
			cout <<"m,n的取值不正确,请重新输入\n";
			cin>>m>>n;
		}
		else break;
	}
	cout <<"m的n的组合数为:"<<fac(m,n)<<endl;
	return 0;
}
int fac(int m,int n)
{
	if(m<n)return -1;
	int a=1,b=1,c=1;
	for(int i=m;i>=1;i--)
		a*=i;
	for(int j=n;j>=1;j--)
		b*=j;
	for(int l=m-n;l>=1;l--)
		c*=l;
	return a/(b*c);
}