// #include <stdio.h>
// int avgandsum(int a,int b,int *sub);

// int main()
// {
//     int i,j,sum,avg;
//     int sub;
//     i=10,j=20;
//     sum=i+j;
//     printf("the sum is %d\n",sum);
//     avgandsum(i,j,&sub);
//     printf("the avg is %d",sub);
//     printf("the address of sub is %u\n",&sub);

//     return 0;
// }
// int avgandsum(int a,int b,int *sub)
// {
//     *sub=a-b;
//     // *avg=*sum/2;
//     printf("sum in function is %d",*sub);
//     printf("the address of sub is %u\n",&sub);
//     // return *sub;
    
// }


#include<stdio.h>
int check(int a,int *sal)
{
    printf("the value of a is %d\n",a);
    printf("the address of a is %u\n",&a);
    printf("the address of sal is %u\n",&*sal);
}
int main()
{
    int i=10;
    int *ptr=&i;
    printf("the value of i is %d\n",i);
    printf("the address of i is %d\n",&i);
    printf("the value of ptr is %d\n",*ptr);
    printf("the address of ptr is %d\n",ptr);
    check(i,&*ptr);
    return 0;
}