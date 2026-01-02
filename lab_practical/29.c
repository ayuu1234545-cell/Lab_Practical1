#include <stdio.h>

int calculateTotal(int m1, int m2, int m3);
float calculateAverage(int total);
char calculateGrade(float avg);

int main() {
    int m1, m2, m3, total;
    float average;
    char grade;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = calculateTotal(m1, m2, m3);
    average = calculateAverage(total);
    grade = calculateGrade(average);

    printf("Total Marks = %d\n", total);
    printf("Average = %.2f\n", average);
    printf("Grade = %c", grade);

    return 0;
}

/* function to calculate total */
int calculateTotal(int m1, int m2, int m3) {
    return m1 + m2 + m3;
}

/* function to calculate average */
float calculateAverage(int total) {
    return total / 3.0;
}

/* function to calculate grade */
char calculateGrade(float avg) {
    if (avg >= 90)
        return 'A';
    else if (avg >= 80)
        return 'B';
    else if (avg >= 70)
        return 'C';
    else if (avg >= 60)
        return 'D';
    else
        return 'F';
}
