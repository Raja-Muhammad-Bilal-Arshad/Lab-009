#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int b,p,count,a=0;
   double result=1;
   cout<<"Enter your base: ";
   cin>>b;
   cout<<"Enter your Exponent: ";
   cin>>p;
   count=1;
   if(p<0)
   {p=-p;a++; }
   while(count<=p)
   {
    result=result*b;
    count++;
   }
   if(a==1)
   cout<<b<<"^"<<p<<" = "<<1/result<<endl;
    else
   cout<<b<< "^"<<p<<" = "<<result<<endl;
    system("pause");
    return 0;
 
}