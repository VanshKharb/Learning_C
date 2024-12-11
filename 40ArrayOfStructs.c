#include <stdio.h>

typedef struct
{
    char name[12];
    float gpa;
}Student;

int main()
{
    Student student1 = {"Vansh", 4.0};
    Student student2 = {"Harsh", 3.0};
    Student student3 = {"Madhav", 3.5};
    Student student4 = {"Advait", 2.6};

    Student students[] = {student1, student2, student3, student4};   // created an array of structs 

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }

    return 0;

}