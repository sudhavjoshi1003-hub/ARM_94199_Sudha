#include<stdio.h>
int count1()
{
    int num[10],i,count=0;
    printf("Enter a binary number: ");
    scanf("%d",&num);
    for(i=0;num[i]!='\0';i++)
    {
                             if(num[i]==1)
                             count++;                           
    }
    printf("count = %d",count);
}
int display_binary()
{
    int x,y,i;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(i=0;y!=0;i++)
    {
                     y=x/2;
                     printf("%d",x%2);
                     x=y;                 
    }    
}
int check_parity()
{
    int x[8],i,count=0;
    printf("Enter a byte : ");
    scanf("%d",&x);
    for(i=0;x[i]!='\0';i++)
    {
                           if(x[i]==1)
                           count++;                       
    }    
    if(count%2==0)
    printf("parity is even");
    else
    {
        printf("parity is odd");
        i=0;
        if(x[i]==0)
        x[i]=1;
        else
        x[i]=0;
        for(i=0;x[i]!='\0';i++)
        printf("%d",x[i]);
    }
}
int alphabets()
{
    char z;
    printf("Enter a character : ");
    scanf("%c",&z);
    if((z<=65 || z>=90) && (z<=97 || z>=122))
    {
              printf("character is alphabet");
              int w=z^32;
              printf("The XOR value is ",w);
    }    
    else
    printf("character is not alphabet");
}
int swap()
{
    int x,y;
    printf("Enter value of x and y:");
    scanf("%d%d",&x,&y);
    printf("Before swap\n");
    printf("x=%d y=%d",x,y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("\nAfter swap\n");
    printf("x=%d y=%d",x,y); 
}
int main()
{
    count1();
    display_binary(); 
    check_parity(); 
    alphabets(); 
    swap();
}
