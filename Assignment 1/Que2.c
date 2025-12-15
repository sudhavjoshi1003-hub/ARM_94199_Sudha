#include <stdio.h>
int main()
{
    int x,y,i,z[10];
    printf("Enter a number : ");
    scanf("%d",&x);
    for(i=0;y!=0;i++)
    {
        y=x/2;
        z[i]=x%2;
       // printf("%d",z[i]);
        x=y;
    }    
    for(i=9;i>=0;i--)
       {
            printf("%d",z[i]);
       }
}
