#include<stdio.h>
int main()
{
    int D,years,weeks,remaining;
    scanf("%d", &D);
    years = D/365;
    remaining = D%365;
    weeks = remaining/7;
    printf("%d
%d",years,weeks);
    return 0;
}
