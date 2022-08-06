#include<stdio.h>
int main()
{
    // int i=10;
    // int *j=&i;
    // printf("The value at of i is %d\n",i);
    // printf("the value at address is%d\n",*j);
    // printf("the address of variable i is%u\n",&i);
    // printf("second address %u\n",j);
    // printf("salman faizi");


    int salman=10;
    int *faizi=&salman;
    int **ayub=&faizi;
    printf("the value at variable salman is %d\n",salman);
    printf("the address of variable salman is %u\n",&salman);

    printf("the value at pointer variable is %d\n",((*faizi)));
    printf("the address of  pointer  variable faizi who stored the address of the integer vsriable is %u\n",&(*faizi));
    printf("the address of  pointer  variable faizi is %u\n",&(faizi));

    printf("the value at pointer variable ayub is %d\n",(**ayub));
    printf("the address of pointere variable ayub is%u\n",(&ayub));
    printf("teh add of pointer variable faizi %u\n",&(*ayub));

    return(0);
}