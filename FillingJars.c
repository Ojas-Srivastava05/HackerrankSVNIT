#include<stdio.h>
#include<math.h>
void main()
{
    int N,M;
    printf("ENTER THE NUMBER OF JARS AND OPERATIONS RESPECTIVELY");
    scanf("%d  %d",&N,&M);
    int jar[N];
    for(int i=0;i<N;i++)
    {
        jar[i]=0;
    }
    int input,a,b,count=0;
    printf("ENTER a , b and number of candies respectively ");
    for(int i=0;i<M;i++)
        {
            scanf("%d  %d  %d",&a,&b,&input);
            for(int j=a-1;j<b;j++)
                {
                    jar[j]=jar[j]+input;
                }
        }
    float avg;
    int sum=0;
    for(int i=0;i<N;i++)
    {
        sum=sum+jar[i];
    }
    avg=sum/N;
    printf("Total = %d ,Average = %d",sum,(int)avg);
}