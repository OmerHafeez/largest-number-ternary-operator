#include<iostream>
using namespace std;
int main ()
{
int a,b,c,d;
cout <<"Enter four numbers";
cin>> a >> b>>c>>d;
((a>b)&&(a>c)&&(a>d))?cout<<"a is the greatest":((b>a)&&(b>c)&&(b>d))?cout<<"b is the greatest":((c>a)&&(c>b)&&(c>d))?cout<<"c is the greatest":cout<<"d is the greatest";
}
