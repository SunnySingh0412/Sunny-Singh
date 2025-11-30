#include <stdio.h>
int main()
{
    int a,c=0,d=0;
    printf("enter number of students : \n ");
    scanf("%d", &a);

    int b[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d", &b[i]);
    }
    for(int i=0;i<a;i++)
    {
        if(b[i]==1)
        {
            c+=1;
        }
        else if(b[i]==0)
        {
            d+=1;
        }
    }
    printf("number of students present : %d \n ", c);
    printf("number of students absent : %d \n ", d);
    return 0;
}