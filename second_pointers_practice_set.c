#include<stdio.h>
int call(int *x,int *y,int *sum);
int main()
{
    int x=10,y=20,sum=0;
    call(&x,&y,&sum);
    printf("sflkdj%d",sum);


    int i=10;
    int *ptr=&i;
    int **ptr2=&ptr;
    printf("add of i is %d\n",ptr);
    printf("add of i is %d\n",*ptr);
    printf("add of i is %d\n",**ptr2);
    return 0;
}
int call(int *x,int *y,int *sum)
{
    *sum=*x+*y;
    printf("sum is %d",*sum);
    // *sum=*sum;
    return *sum;
}