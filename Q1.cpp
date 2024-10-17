#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int a, count;
cout << "Enter a number to generate its multiplication table: ";
cin >> a;
cout << "Multiplication Table for " << a << ":";
cout << "\n";
cout << setw(36)<<setfill('-')<<" "<<endl;
cout << endl;
count = 1;
while (count <= 10)
{
cout<< a << " x " << count << "= " << a*count<<endl;
count++;
}
cout << endl;
cout << setw(36) << setfill('-') <<" "<< endl;
cout << "Total multiplications performed: 10 "<<endl;
cout << "\n";
cout << setw(36) << setfill('-') <<" "<< endl;
system("pause");
return 0;
}