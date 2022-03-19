#include <stdio.h>

int main()
{
    int n, count=0,i;
    printf("enter the number");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    printf("%d\t",count);
    if(count==2)
    {
        printf("prime number\n");
        
    }
    else
    {
        printf("not the prime\n");
    }
    printf("the end\n");
}
