#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double Weight,i=0;
    cout<<"Enter the weight of gym members (enter -99 to stop): "<<endl;
    cout<<"Enter your weight: "<<endl;
    cin>>Weight;
     while(Weight<0)
        {
            cout<<"Please gracefully enter the valid weight: "<<endl;
            cout<<"Current average weight: "<<endl;
            cin>>Weight;
        }

    int count=1;
    while(count<=10 && Weight!=-99)
    {
        i=Weight+i;
        cout<<"Current average weight: "<<i/count<<endl;
        cout<<"Enter your weight: "<<endl;
        cin>>Weight;

        while(Weight<0)
        {
            cout<<"Please gracefully enter the valid weight: "<<endl;
            cout<<"Current average weight: "<<endl;
            cin>>Weight;
            if(Weight==-99)
            {
                cout<<"Final average weight of members: "<<i/count<<endl;
                cout<<"\n"<<setw(32)<<setfill('-')<<"\n";
                return 1;
             }
             }
            count++; 
            }
       
    

    cout<<"Final average weight of members: "<<i/count<<endl;

    cout<<"\n"<<setw(32)<<setfill('-')<<"\n";
}