#include<iostream>
using namespace std;
int main ()
{
int a,b,c;
cout <<"Enter three numbers";
cin>> a >> b>>c;
((a>b)&&(a>c))?cout<<"a is the greatest":((b>a)&&(b>c))?cout<<"b is the greatest":cout<<"c is the greatest";
}
