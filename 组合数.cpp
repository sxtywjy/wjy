#include <iostream>
using namespace std;
int fac(int m,int n);
int main()
{
	int m,n;
	cout <<"����m,n:\n";
	cin>>m>>n;
	while(1)
	{
		if(m<n)
		{
			cout <<"m,n��ȡֵ����ȷ,����������\n";
			cin>>m>>n;
		}
		else break;
	}
	cout <<"m��n�������Ϊ:"<<fac(m,n)<<endl;
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