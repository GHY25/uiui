#include <stdio.h>

int main ()
{
    long long a,b,c;
    scanf("%lld\n",&a);
    scanf("%lld\n",&b);
    scanf("%lld",&c);

    printf("%lld\n",a+b-c);

    if (b<10) printf("%lld",(a*10)+b-c);
    else if (b<100) printf("%lld",(a*100)+b-c);
    else if (b<1000) printf("%lld",(a*1000)+b-c);
    else printf("%lld",(a*10000)+b-c);

    return 0;
}