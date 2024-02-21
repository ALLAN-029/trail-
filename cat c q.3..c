#include <stdio.h>

int main() {
    char name[50]; 
    int rollno, sub1, sub2, sub3, sub4, sum, score;

    printf("Enter your name: ");
    scanf("%s", name); 

    printf("Enter your roll number: ");
    scanf("%d", &rollno);

    printf("Enter sub1 number: ");
    scanf("%d", &sub1);
    printf("Enter sub2 number: ");
    scanf("%d", &sub2);
    printf("Enter sub3 number: ");
    scanf("%d", &sub3);
    printf("Enter sub4 number: ");
    scanf("%d", &sub4);

    sum = sub1 + sub2 + sub3 + sub4;

    
    float percent = ((float)sum / 400) * 100;

    printf("\nName: %s\n", name);
    printf("Roll No: %d\n", rollno);
    printf("Percentage Score: %.2f%%\n", percent);

    return 0;
}
