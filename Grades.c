#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if (a+b+c+d+e>=450)
    printf("Grade A");
    else if (a+b+c+d+e>=400)
    printf("Grade B");
    else if (a+b+c+d+e>=350)
    printf("Grade C");
    else if (a+b+c+d+e>=300)
    printf("Grade D");
    else if (a+b+c+d+e>=200)
    printf("Grade E");
    else
    printf("Grade F");
}
