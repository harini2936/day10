#include <stdio.h>
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("\nAfter swapping:%d %d\n",a,b);
}
int main()
{
    int a=5,b=10;
    printf("%d %d",a ,b);
    swap(a,b);
   
    return 0;
