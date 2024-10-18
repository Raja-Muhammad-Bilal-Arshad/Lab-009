#include<iostream>
using namespace std;
int main()
{
  double fact=1,count=1,n;
  cout<<"Enter your number whose factorial is to be found: ";
  cin>>n;
  if(n<0)
  {
    cout<<"Factorial of negative number doesnot Exist."<<endl;
    return 1;
  }
  while(count<=n)
   { fact=fact*count;
    count++;
  }
  cout<<"Factorial of given number is: "<<fact<<endl;

    system("pause");
    return 0;
 
}