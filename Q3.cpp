#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int n,num,even=0,odd=0,count=1;
   cout<<"Enter your count number: ";
   cin>>n;
   while(count<=n)
   {
   cout<<"Enter your number(positive number): ";
   cin>>num;
   while(num>0)
   
   if(num%2==0)
   even=even+num;
   else if(num%2!=0)
   odd=odd+num;

   count++;
   }
   cout<<"The sum of even numbers is: "<<even<<endl;
   cout<<"The sum of odd numbers is: "<<odd<<endl;

    system("pause");
    return 0;
 
}