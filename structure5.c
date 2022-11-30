#include <stdio.h>
struct Demo
    {
        int Marks;
        int Age;
        char Division;
    };

int main()
{
    
    struct Demo obj;
    struct Demo *ptr;

    ptr = &obj;

    ptr->Marks = 89;
    ptr->Age = 23;
    ptr->Division = 'A';


    

    printf("Marks obtain by amit are :%d\n",ptr->Marks);
    printf("Age of amit is :%d\n",ptr->Age);
    printf("Division of amit is :%c\n",ptr->Division);

    return 0;

}