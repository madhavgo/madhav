#include<stdio.h>

int main(void)
{
    int i,n,su=0;
    printf("enter your no.to print tghe table");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        int su=n*i;
        printf("%d",su);
        printf("\n");
    }

    return 0;
}