#include<stdio.h>
void check(int *x);
int mult(int *x);
int sum(int *x,int *y,int *sum,int *avg);
int main()
{
    // int a=10;
    // printf("the address of the variable a is %u\n",&a);
    // printf("the value of the variable a is %d\n",a);
    // int *b=&a;
    // printf("the values of the variable is%d\n",*b);

    int i=10;
    // printf("the address of the variable i is %u\n",&i);
    // int *ptr=&i;
    // printf("the address of the variable using a pointer is %u\n",ptr);
    // check(&(*ptr));
printf("the value of variable before multiplication is %d\n",i);
    mult(&i);
printf("the value of variable after multiplication is %d\n",i);

int a=10,b=20;
int c=a+b;
int *sum1,*avg;
printf("the value of the sum is %d\n",c);
sum(&a,&b,&sum,&avg);
printf("sum and avg is %d%d\n",*sum1,*avg);
    
    return 0;
}


void check(int *x)
{
printf("add address ouside the main function is %u\n",x);
}


int mult(int *a)
{
     *a=100;
    printf("multiplication in the function %u\n",*a);
    return *a;
}

int sum(int *x,int *y,int *sum, int *avg)
{
    *sum=*x+*y;
    printf("sum using pointers is %d\n",*sum);
     *avg=*sum/2;
    printf("avg is %d",*avg);
    return *sum,*avg;
}