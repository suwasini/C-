#include<iostream>
using namespace std;
int main()
{
    int a=4,b=5,temp;
   {
    cout<<"Before swapping"<<endl;
    cout<<"a ="<<a<<",b ="<<b<<endl;
   }
   temp=a;
   a=b;
   b=temp;
   {
    cout<<"/nAfter swapping"<<endl;
    cout<<"a ="<<a<<",b ="<<b<<endl;
   }
}

 // output
// Before swapping
// a=4,b=5
// After swapping
// a=5,b=4
