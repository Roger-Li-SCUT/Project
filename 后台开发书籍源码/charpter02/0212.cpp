#include<iostream>
using namespace std;
class Base{
public:
    Base();
    static int var;
};
Base::Base()
{
    var=10;
}
class Derived:public Base{
};
int main(){
    Base base1;
    base1.var++;//ͨ������������
    cout<<base1.var<<endl;//���11
    Base base2;
    base2.var++;
    cout<<base2.var<<endl;//���12
    Derived derived1;
    derived1.var++; 
    cout<<derived1.var<<endl;//���13
    Base::var++;//ͨ����������
    cout<<derived1.var<<endl;//���14
    return 0;
}
