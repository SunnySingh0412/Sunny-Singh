#include <stdio.h>
int main()
{
    int a, p = 0, n = 0, z = 0;
    printf("enter number of readings : \n ");
    scanf("%d", &a);
    int b[a];

    printf("enter readings : \n ");
    for (int i = 0; i <a; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i <a; i++)
    {
        if (b[i] > 0)
        {
            p += 1;
        }
        else if (b[i] < 0)
        {
            n += 1;
        }
        else
        {
            z += 1;
        }
    }
    printf(" number of posotive readings : %d ", p);
    printf(" number of negative readings : %d ", n);
    printf(" number of zero readings : %d ", z);
    return 0;
}