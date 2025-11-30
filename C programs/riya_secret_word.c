#include <stdio.h>
#include <string.h>

int main() {
    char w[100];
    int l,a = 0;

    printf("enter the word : \n ");
    scanf("%s", w);

    l = strlen(w);

    
    for (int i = 0; i < l / 2; i++) {
        if (w[i] != w[l - i - 1]) {
            a= 1;
            break;
        }
    }

    if (a == 0)
        printf("Perfect Secret Word");
    else
        printf("Not a Secret Word");

    return 0;
}