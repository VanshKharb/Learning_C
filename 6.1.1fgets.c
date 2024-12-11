#include <stdio.h>
#include <string.h>

int main()
{
    char order[25];
    int pieces;

    printf("What would you like to order? ");
    fgets(order, sizeof(order), stdin); 

    size_t len = strlen(order);
    if (len > 0 && order[len - 1] == '\n')
    {
        order[len -1] = '\0'; 
    }

    printf("How many pieces would you like to order? ");
    scanf("%d", &pieces);

    printf("You have ordered %s. Excellent choice!\n", order);
    printf("You have ordererd %d pieces", pieces);

    return 0;  
}