#include<stdio.h>
int main()
{
    char num[8];
    int i,count=0;
    printf("Enter a binary number: ");
    scanf("%s",num);
    for(i=0;num[i]!='\0';i++)
    {
        if(num[i]=='1')
        count++;                           
    }
    printf("count = %d",count);
    return 0;
}
