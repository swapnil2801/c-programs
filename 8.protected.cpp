#include <iostream>
using namespace std;

class Base
{
    public:
        int i;
        int j;

    protected:
        int a;
        int b;

    public:
        Base()
        {
            cout<<"Inside constructor\n";
            i = 10;
            j = 20;
            a = 30;
            b = 40;
        } 
    
        void gun()
        {
            cout<<"Inside gun\n";
        }
};
class Derived : public Base
{
    public:
        int k;

    protected:
        int c;

    public:
        Derived()
        {
            cout<<"Inside derived constructor\n";
            k = 50;
            c = 60;
        }
        void fun()
        {
            cout<<"Innside fun\n";
        }
};
class DerivedX : protected Derived
{
    public:
        int l;

    protected:
        int d;

    public:
        DerivedX()
        {
            cout<<"Inside derivedX constructor\n";
            l = 70;
            d = 80;
        }
        void run()
        {
            cout<<"Innside run\n";
        }
};

int main()
{
    DerivedX obj;

    cout<<sizeof(obj)<<"\n";



}
