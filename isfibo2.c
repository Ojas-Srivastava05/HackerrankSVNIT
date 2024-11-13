#include<stdio.h>
#include<math.h>
void main()
{
    int num,fib=0,t2=1,t3=1,x,flag=0;
    printf("ENTER THE NUMBER OF TEST CASES");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        printf("ENTER THE NUMBER TO CHECK ");
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<num;i++)
    {
        x=arr[i];
        if(x==0||x==1)
        {
            printf("IsFibo \n");
        }
        do
        {
            if(x==0||x==1)
            {
                break;
            }
            fib=t2+t3;
            t2=t3;
            t3=fib;
            if(fib==x)
            {
                printf("IsFibo \n");
                flag=1;

            }
            if(fib>x)
            {
                if(flag==0)
                {
                    printf("IsNotFibo \n");
                    t2=1;
                    t3=1;
                    fib=0;
                    break;
                }
                if(flag==1)
                {
                    t2=1;
                    t3=1;
                    fib=0;
                    break;
                }

            }
        }while(1);
        flag=0;

    }
}
