#include <stdio.h> 

#define NEW_LINE printf("\n");
#define PI_GRECO 3.14159265358;


int main()
{
    printf("Hello WORLD!\n\n\n");


    NEW_LINE;

    char name[32]; 

    int i =10;

  

    printf("Enter a name: ");

    scanf("%s", name);  


    printf("\nHello\t%s\n\n\n", name);

    return 0;
}
