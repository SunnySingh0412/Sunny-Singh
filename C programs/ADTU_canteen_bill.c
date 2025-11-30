#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of students & number of days: ");
    scanf("%d %d", &n, &m);

    int bill[n][m];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &bill[i][j]);
        }
    }

    int studentTotal[n];       
    int dayTotal[m];            

   
    for (int i = 0; i < n; i++) studentTotal[i] = 0;
    for (int j = 0; j < m; j++) dayTotal[j] = 0;

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            studentTotal[i] += bill[i][j];  
            dayTotal[j] += bill[i][j];     
        }
    }

    
    for (int i = 0; i < n; i++) {
        printf("Student %d total: ₹%d\n", i + 1, studentTotal[i]);
    }

    
    int highestDay = 0;
    for (int j = 1; j < m; j++) {
        if (dayTotal[j] > dayTotal[highestDay]) {
            highestDay = j;
        }
    }

    printf("\nHighest collection on Day %d\n", highestDay + 1);

    
    int highestSpend = studentTotal[0];
    for (int i = 1; i < n; i++) {
        if (studentTotal[i] > highestSpend) {
            highestSpend = studentTotal[i];
        }
    }

    printf("Highest spender: ");

    
    int first = 1;  
    for (int i = 0; i < n; i++) {
        if (studentTotal[i] == highestSpend) {
            if (!first) {
                printf(" and ");
            }
            printf("Student %d", i + 1);
            first = 0;
        }
    }

    return 0;
}