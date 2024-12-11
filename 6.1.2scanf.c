#include <stdio.h>

int main()
{
    int age;
    char name[10];

    scanf("%d", &age);
    
    while(getchar() != '\n'); 

    fgets(name, sizeof(name), stdin);

    printf("Your age is %d", age);
    printf("\nYour name is %s", name);

    return 0;
}