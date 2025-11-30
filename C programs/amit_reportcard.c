#include <stdio.h>
int main()
{
    int a;
    printf("enter number of students : \n ");
    scanf("%d", &a);
    int b[a];
    for (int i = 1; i <=a; i++)
    {
        scanf("%d", &b[i]);
    }
    int high = b[0];
    int low = b[0];
    for (int i = 1; i <=a; i++)
    {
        if (b[i] > high)
            high = b[i];
        else if (b[i] < low)
            low = b[i];
    }
    printf(" Highest marks : %d \n ", high);
    printf(" lowest marks : %d \n ", low);
    return 0;
}