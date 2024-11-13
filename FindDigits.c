#include<stdio.h>
void main()
{
    int T;
    printf("ENTER THE VALUE OF T ");
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
    int num;
    printf("\n ENTER THE NUMBER : ");
    scanf("%d",&num);
    int rem,count=0,ori=num;
    while(num!=0)
    {
        rem=num%10;
        if(ori%rem==0)
        {
            count++;
        }
        num=num/10;
    }
    printf("\n %d",count);
    }
}