#include<iostream>
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


