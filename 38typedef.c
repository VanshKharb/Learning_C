#include <stdio.h>
#include <string.h>

// typedef: reserved keyword that gives an existing datatype a "nickname"
// you have to type it outside of the int main() function and it works like this:
// typedef existing_type new_name;
// existing_type is the datatype, and new_name is the "nickname" of that datatype which is easier to type/use.

typedef char user[25];
// now, whenever we want to use a char type datatype which is having 25 bytes, we can simply use 'user' instead of it. 


int main()
{
    user user1 = "Bro";              // we used it instead of typing char user1[25] = "Bro";

    printf("%s", user1);

    return 0;
    
}