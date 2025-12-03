// Problem 1: Reverse the Array (Neha’s Diary Entries)
// 🧩 Problem Story:

// Neha keeps a diary of her daily exercise times (in minutes).
// She wants to review her progress, but she prefers to see the latest day’s record first.

// Write a program to help Neha reverse the order of her recorded exercise times.

// ✅ Task:

// Given n numbers representing Neha’s daily exercise time, print them in reverse order.

// 🧠 Input Format:

// The first line contains an integer n — the number of days.

// The second line contains n space-separated integers representing exercise times.
// Output Format:

// Print the exercise times in reverse order on a single line separated by spaces.

// 🧩 Example 1:

// Input
// 5
// 10 20 30 40 50

// Output
// 50 40 30 20 10
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
