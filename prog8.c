//write a program in c to implement adamas university semester marking system   
#include <stdio.h>
char calculateGrade(float percentage) {
    if (percentage >= 90) {
        return 'A';
    } else if (percentage >= 80) {
        return 'B';
    } else if (percentage >= 70) {
        return 'C';
    } else if (percentage >= 60) {
        return 'D';
    } else if (percentage >= 50) {
        return 'E';
    } else {
        return 'F'; // Fail
    }
}

int main() {
    int marks[5]; 
    int i;
    int total = 0;
    float percentage;
    char grade;
    printf("Enter marks for 5 subjects (out of 100):\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        while (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Please enter marks between 0 and 100.\n");
            printf("Subject %d: ", i + 1);
            scanf("%d", &marks[i]);
        }
        total += marks[i];
    }
    percentage = (float)total / 5;
    grade = calculateGrade(percentage);
    printf("\nTotal Marks: %d/500\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Final Grade: %c\n", grade);
    if (grade == 'F') {
        printf("Status: Fail\n");
    } else {
        printf("Status: Pass\n");
    }

    return 0;
}
