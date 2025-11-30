#include <stdio.h>
int main()
{
    int a,p=0,n=0;
    printf("enter number of days  : \n ");
    scanf("%d", &a);

    int b[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d", &b[i]);
    }
    for(int i=0;i<a;i++)
    {
        if(b[i]>0)
        {
            p+=b[i];
        }
        else if(b[i]<0)
        {
            n+=b[i];
        }
    }
    n=n*(-1);
    int z= p-n;
    printf("Total profit  : %d \n ", p);
    printf("total loss  : %d \n ", n);
    printf("Net balance    : %d \n ", z);
    printf(" '-' means loss '+' means profit ");
    return 0;
}