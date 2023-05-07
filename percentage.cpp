#include<bits/stdc++.h>
using namespace std;
int main()
{ float a,b,c,d,e,f,g,h,i;
float x,y,z;
cin>>a>>b>>c;
cin>>d>>e>>f;
cin>>g>>h>>i;
{x=a+b+c/3;
cout<<"x"<<endl;
y=d+e+f/3;
cout<<"y"<<endl;
z=g+h+i/3;
cout<<"z"<<endl;}
if(x>y&&x>z)
cout<<"x is the highest percentage"<<endl;
else if(y>x&&y>z)
cout<<"y is the highest percentage"<<endl;
else
cout<<"z is the highest percentage"<<endl;}
