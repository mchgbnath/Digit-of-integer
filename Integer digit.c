#include <stdio.h>
#include<conio.h>
void main()
{
    long long a;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &a);

    while(a != 0)
    {
        // a = a/10
        a /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
