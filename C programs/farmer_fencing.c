#include<stdio.h>

int main(){
    int length, width, area, perimeter;
    printf("enter length and width:");
    scanf("%d %d", &length, &width);

    area = length * width;
    perimeter = 2 * (length + width);
    
    printf("area = %d\n", area);
    printf("perimeter = %d\n", perimeter);

    return 0;
}