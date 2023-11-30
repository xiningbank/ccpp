/**
* This example is to demonstrate the difference between strlen() and sizeof().
* strlen(): only count the content itself.
* sizeof(): content + the last charater '\0'.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // a string which contains 7 characters what we really want to use,
    // and 1 charater which is used as the terminal symbol.
    const char* name = "1234567";
    
    // the result is 7.
    printf("the length is: %ld\n", strlen(name));
    
    // the result is 8.
    printf("the size is: %ld\n", sizeof(name));

    return 0;
}
