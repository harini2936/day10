#include <stdio.h>
void sum(int *a,int *b){
   int *c=*a+*b;
}
int main()
{
    int a=5,b=10;
    printf("%d %d",a ,b);
    sum(&a,&b);
   printf("\n%d",a+b);
    return 0;
}
