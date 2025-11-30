#include <stdio.h>
int main()
{
    int a;
    printf("enter number of exercises : \n ");
    scanf("%d", &a);
    int b[a];
    //int c[a];

    printf("enter times : \n ");
    for (int i = 0; i <a; i++)
    {
        //printf("enter time : \n ");
        scanf("%d", &b[i]);
    }
    printf("reverse exercise times : \n");
    for (int i = a-1; i >= 0; i--)
    {
        printf("%d", b[i]);
    }
    return 0;
}