#include<iostream>
using namespace std;

 class Sum
 {
  private:
    int x,y;
  public:
    Sum(int xx,int yy);
    int sum();
    ~Sum(){cout<<"������������"<<endl;}
 };

 Sum::Sum(int xx,int yy)
 {
    x=xx;
    y=yy;
    cout<<"���ù��캯��"<<endl;
 }

 int Sum::sum()
 {
     return x+y;
 }

 int main()
 {
     int x,y;
     cout<<"������������:";
     cin>>x>>y;
     Sum SUM(x,y);
     cout<<"   x+y="<<SUM.sum()<<endl;
     return 0;
 }


