#include <stdio.h>

int main() {
    int n, A, HW, CT, MT, TF, marks;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf(" %d %d %d %d %d", &A, &HW, &CT, &MT, &TF);
        marks = A + HW + CT + MT * (30.0 / 50.0) + TF * (40.0 / 100.0);
        printf("Student %d: ", i);

        if (marks < 55) {
            printf("F\n");
        } else if (marks >= 55 && marks <= 57) {
            printf("D\n");
        } else if (marks >= 58 && marks <= 61) {
            printf("D+\n");
        } else if (marks >= 62 && marks <= 65) {
            printf("C-\n");
        } else if (marks >= 66 && marks <= 69) {
            printf("C\n");
        } else if (marks >= 70 && marks <= 73) {
            printf("C+\n");
        } else if (marks >= 74 && marks <= 77) {
            printf("B-\n");
        } else if (marks >= 78 && marks <= 81) {
            printf("B\n");
        } else if (marks >= 82 && marks <= 85) {
            printf("B+\n");
        } else if (marks >= 86 && marks <= 89) {
            printf("A-\n");
        } else {
            printf("A\n");
        } 
    }

    return 0;
}