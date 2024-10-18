#include<iostream>
using namespace std;
int main()
{
    int count,count1,n,a=0;
    cout<<"Enter your number limit: ";
    cin>>n;
    count=2;
    while(count<=n)
    {
        count1=2;a=0;
        while(count1<count)
        {
            if(count%count1==0)
            a++;
            count1++;
        }
        if(a==0)
        cout<<count<<"\t";
        count++;
    }
    
}