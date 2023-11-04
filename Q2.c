#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i,max=0;
    printf ("\n enter 5 no ");
    for (i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
    if (a[i]>max)
    {
        max=a[i];
    }
    }
    printf("\n max %d",max);
    return 0;
}
