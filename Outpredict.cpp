#include <iostream>
using namespace std;

class Demo
{
    public:
        void fun(int i)
        {
            cout<<"First defination\n";
        }
        void fun(int i,int j)
        {
            cout<<"Second defination\n";
        }
};
int main()
{
    Demo obj;

    obj.fun(11);
    obj.fun(10,20);

    return 0;


}