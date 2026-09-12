// Task # 05:
// A restaurant has a simple menu where 1 = Burger, 2 = Pizza,
//  3 = Biryani, and 4 = Sandwich.
// Take the customer's choice as input and use switch-case 
// to display the selected food item. For
// any other number, display "Invalid Choice".
#include<stdio.h>
int main(){
    int menu ; 
    printf("Press\n1 for Burger\n2 for Pizza\n3 for Biryani\n4 for sandwich\n");
    scanf("%d" , &menu);
    switch (menu) {
     case 1:
     printf("Burger");
     break;
     case 2:
     printf("Pizza");
     break;
     case 3:
     printf("Biryani");
     break;
     case 4:
     printf("Sandwich");
     break;

     default:
     printf("Invalid choice ! Not Available");
    }
}