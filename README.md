**软件工程过程作业**
# ABC (https://github.com/Skye0819/ABC) 
***>引言：设计一个类，使它具有一个计算两个数之和的成员函数。并且写出它的构造函数和析构函数。并使用一个测试程序来测试这个类的执行，观察各个函数之间的调用顺序***
---------------------------------------------------------------------------------------------
**代码块**
<#include<iostream>
using namespace std;

 class Sum
 {
  private:
    int x,y;
  public:
    Sum(int xx,int yy);
    int sum();
    ~Sum(){cout<<"调用析构函数"<<endl;}
 };

 Sum::Sum(int xx,int yy)
 {
    x=xx;
    y=yy;
    cout<<"调用构造函数"<<endl;
 }

 int Sum::sum()
 {
     return x+y;
 }

 int main()
 {
     int x,y;
     cout<<"请输入两个数:";
     cin>>x>>y;
     Sum SUM(x,y);
     cout<<"   x+y="<<SUM.sum()<<endl;
     return 0;
 }

>
    
 ----------------------------------------------------------------------------

 
 
 
 
 
 
 
 
 
