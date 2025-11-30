#include <stdio.h>

int main() {
    int A[10][7], i, j;
    int rowSum, colSum;
    int max = -1, maxStudent = 1;
    int min = 100, minDay = 1;

    // Input
    for(i=0;i<10;i++)
        for(j=0;j<7;j++)
            scanf("%d",&A[i][j]);

    printf("Weekly Attendance Summary\n");
    printf("-------------------------\n\n");
    printf("Total Present Days:\n");

    // Row-wise summary + highest attendance
    for(i=0;i<10;i++){
        rowSum = 0;
        for(j=0;j<7;j++)
            rowSum += A[i][j];

        printf("Student %d: %d\n", i+1, rowSum);

        if(rowSum > max){
            max = rowSum;
            maxStudent = i+1;
        }
    }

    // Column-wise lowest attendance day
    for(j=0;j<7;j++){
        colSum = 0;
        for(i=0;i<10;i++)
            colSum += A[i][j];

        if(colSum < min){
            min = colSum;
            minDay = j+1;
        }
    }

    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n", maxStudent, max);
    printf("\nDay with Lowest Overall Attendance: Day %d\n", minDay);

    return 0;
}