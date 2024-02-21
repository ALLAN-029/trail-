#include <stdio.h>

int main() {
	
    int marks;
    	
    printf("\nEnter student marks: ");
    scanf("%d", &marks);

    
    char grade;
    if (marks >= 0 && marks <50) {
    	grade = 'F';
        
    } else if (marks >=50 && marks <60) {
        grade = 'C';
       
    } else if (marks >= 60 && marks <70) {
        grade = 'B';
  
    } else if (marks >= 70 && marks <80) {
        grade = "B+";
        
    } else if (marks >= 80 && marks <90) {
        grade = 'A';
        
    } else if (marks >= 90 && marks <=100) {
        grade = "A+";
       
    } else {
        printf("Invalid marks entered!\n");
        return 1; 
    }
     printf("\nGrade: %c\n", grade);
     
    
    
    return 0; 
}
