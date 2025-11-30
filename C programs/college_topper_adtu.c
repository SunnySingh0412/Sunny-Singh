#include <stdio.h>

int main() {

    int marks[5][3];

    // Input marks of 5 students
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    int maxMath = marks[0][0];
    int maxPhy  = marks[0][1];
    int maxCS   = marks[0][2];

    // Find highest in each subject
    for (int i = 1; i < 5; i++) {
        if (marks[i][0] > maxMath)
            maxMath = marks[i][0];

        if (marks[i][1] > maxPhy)
            maxPhy = marks[i][1];

        if (marks[i][2] > maxCS)
            maxCS = marks[i][2];
    }

    // Output
    printf("\nHighest marks in Mathematics: %d\n", maxMath);
    printf("Highest marks in Physics: %d\n", maxPhy);
    printf("Highest marks in Computer Science: %d\n", maxCS);

    return 0;
}
