#include<iostream>
using namespace std;
class A 
{
 public:
 A()
 { cout<<"constructor"<<endl;}
 void fun1(int a)
 {
    cout<<a<<"fun1"<<endl;
 }
 void fun1(int a,float b)
 {
    cout<<a+b<<"fun1"<<endl;
 }
};
int main()
{
    A obj1;
    obj1.fun1(10);
    obj1.fun1(12,10.5f);
    
}