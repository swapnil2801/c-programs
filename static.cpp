#include<iostream>
using namespace std;

class Demo
{
    public:        //access specifier
        int i;     //instance variable
        int j;      //instance variable
        static int k; //class variable 
        static int l;  //class variable
        Demo()      //Default constructor 
        {
            i=0;
            j=0;
        }
        Demo(int a,int b)  // parameterised contructor
        {
            i=a;
            j=b;
        }

        void fun()         // Behaviour
        {
            cout<<"Inside the non static method fun\n";
            cout<<"value of i :"<<this->i<<"\n";
            cout<<"value of j :"<<this->j<<"\n";
            cout<<"value of k :"<<k<<"\n";
            cout<<"value of l :"<<l<<"\n";
        }
        static void gun()       // static behaviour 
        {
            cout<<"Inside the static method gun\n";
            cout<<"value of k :"<<k<<"\n";
            cout<<"value of l :"<<l<<"\n";
            
        }

};
// Load time variable
int Demo::k = 0;
int Demo::l = 0;
//Entry point function
int main()
{
    cout<<"inside main\n";
    cout<<"value of k :"<<Demo::k<<"\n";
    cout<<"value of l :"<<Demo::l<<"\n";
    Demo::gun();    //static function calls
    Demo obj1(10,11);
    Demo obj2(20,21);
    Demo obj3;

    cout<<"Value of i in obj1 :"<<obj1.i<<"\n";
    cout<<"Value of i in obj2 :"<<obj2.i<<"\n";
    
    cout<<"Value of j in obj2 :"<<obj2.j<<"\n";
    cout<<"Value of j in obj2 :"<<obj2.j<<"\n";

    obj1.fun();  //non static function call 
    obj2.fun();
    obj3.fun();
    return 0;
}