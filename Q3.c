// Task # 03:
// A school system assigns grades according to a student's marks.
//  Marks of 80 or above = A, 70–79
// = B, 60–69 = C, 50–59 = D, and below 50 = F.

// int marks = 75;

// Write a C program using if-else-if to display 
// the student's grade.
#include <stdio.h>
int main(){
    int marks ; //75
    printf("Enter students marks ( out of 100 )");
    scanf("%d" , &marks);
    if ( marks >= 80 && marks <= 100){
        printf("Grade : A ");
    }
    else if ( marks >= 70 && marks < 80){
        printf("Grade : B ");
    }
    else if ( marks >= 60 && marks < 70){
        printf("Grade : C ");
    }
    else if ( marks >= 50 && marks < 60){
        printf("Grade : D ");
    }
    else{
        printf("Grade : Fail");
}
}