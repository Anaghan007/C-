#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"Enter A: ";
        cin>>a;   
    }
};
class ABC:public base
{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"Enter B: ";
        cin>>b; 
    }
};

class derived : public ABC
{
    public:
    void product()
    {
        cout<<"Square of A is: "<<a*a<<endl;
        cout<<"Sqaure of B is: "<<b*b<<endl;
    }
};

int main()
{
    derived d;
    d.setA();
    d.setB();
    d.product();
}