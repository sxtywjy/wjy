#include <iostream>
using namespace std;

double power(double x,int y)
{
if(y==0) return 1.0;
return power(x,y-1)*x;
}
int main()
{
int y;
double x;
cin>>x>>y; //ÊäÈëxµÄy´ÎÃİ;
cout<<power(x,y)<<endl;
}
