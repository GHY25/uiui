#include <stdio.h>

int main ()
{
    int x,y;

    while (1)
    {
        scanf("%d %d\n",&x,&y);
        if ((x==0) && (y==0)) break;
        printf("%d\n",x+y);
    }
    return 0;
}