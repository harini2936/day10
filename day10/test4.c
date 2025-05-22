
//without using function



// #include <stdio.h>
// int main()
// {
//     int x,sum=0;
//     scanf("%d",&x);
//     for(int i=1;i<x;i++){
//         if(x%i==0){
//             printf("%d ",i);
//             sum=sum+i;
            
//         }
//     }
//     if(sum==x) printf("\ntrue");
//     else printf("\nfalse");
//     return 0;
// }


//using boolean

#include <stdio.h>
#include<stdbool.h>
int perfect(int x)
{
    int sum=0;
   for(int i=1;i<x;i++){
        if(x%i==0){
            printf("%d ",i);
            sum=sum+i;
            
        }
    }
    return sum==x;
}
    int main()
    {
        int x;
        scanf("%d",&x);
        bool a=perfect(a);
        printf("%s ",a?"true":"false");
        if(a)
        printf("true");
    
    return 0;
}