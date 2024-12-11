#include <stdio.h>
#include <string.h>

int main()
{
    /* Here, we will see the difference between scanf and fgets:
    1. When to use which one?
    Answer. Use scanf for integers, double, float, & use fgets for strings etc.
    
    2. Does fgets and scanf always have newline character problem?
    Answer. Well, not always. Scanf will have this problem when just after taking the input from scanf, you are taking input from fgets
            fgets has this problem pretty much all the time
            
    3. So how to get rid of this newline character problem?
    Answer. for fgets, check 6.1.1fgets.c
            for scanf, chech 6.1.2scanf.c*/
}