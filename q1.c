#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],rev,i;
    printf ("\n enter 10 no ");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&a[1]);
    }
    for(i=9;i>=0;i--)
    {
        printf("\n%d",a[i]);
    }

    return 0;
}
