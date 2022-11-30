#include <iostream>
using namespace std;

class Demo
{
    public:
        static int x;
        static int y;
        int i;
        Demo()
        {
            i = 0;
        }
        void fun()
        {
            cout<<"inside fun\n";
            cout<<"Value of x = "<<x<<"\n";
            cout<<"Value of x = "<<y<<"\n";
        }
};
int Demo::x = 11;
int Demo::y = 12;

int main()
{
    Demo obj1();
    obj1().fun();
    return 0;
}
