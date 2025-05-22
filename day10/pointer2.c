// #include <stdio.h>
// void main()
// {
//     int a=7;
//     int * p,**p1,***p2,****p3;
//     p=&a;
//     p1=&p;
//     p2=&p1;
//     p3=&p2;
//     printf("%d %d %d %d",p,p1,p2,p3);
    
// }


#include <stdio.h>
#include <stdbool.h>
void main()
{
    int a=7;
    int * p;
    p=&a;
    printf("%d %d %d %d",a,*p,p,&a);
    *p=8;
    // printf("\n%d %d",a,p);
}




#include <stdio.h>
#include <stdbool.h>
void main()
{
    int a=7;
    int * p;
    p=&a;
    printf("%d %d %d %d",a,*p,p,&a);
    *p=8;
    printf("\n%d %d %d %d",a,*p,p,&a);
}