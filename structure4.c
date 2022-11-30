#include <stdio.h>
struct Demo
    {
        int Marks;
        int Age;
        char Division;
    };

int main()
{
    
    struct Demo Amit;
    struct Demo Pooja;

    Amit.Marks = 89;
    Amit.Age = 23;
    Amit.Division = 'a';

    Pooja.Marks = 98;
    Pooja.Age = 22;
    Pooja.Division = 'b';

    printf("Marks obtain by amit are :%d\n",Amit.Marks);
    printf("Age of amit is :%d\n",Amit.Age);
    printf("Division of amit is :%c\n",Amit.Division);

    return 0;

}