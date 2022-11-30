#include <iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
    Demo()
    {
        cout<<"Inside Default constructor\n";
        this->Hello();
    }
    void Hello()
    {
        cout<<"Inside Member function\n";
    }
};

int main()
{
    Demo obj();
    return 0;
}