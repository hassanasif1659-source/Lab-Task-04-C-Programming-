// A company decides an employee's
// bonus based on their performance rating
// and years of service.
// A rating of 5 with 3+ years earns an Excellent Bonus, 
// rating 4 with 2+ years earns a Good Bonus,
// and rating 3 with 1+ years earns a Basic Bonus. 
// All other employees receive No Bonus.
// Take the rating and years of service from the user.
// Use if-else-if and && to display the appropriate
// bonus.
#include <stdio.h>
int main(){
    int rating ;
    float years ; 
    printf("Give your rating ( ***** ):");
    scanf("%d" , &rating);
    printf("Enter Years Of Services:");
    scanf("%f" ,&years);
    if(rating == 5 && years >= 3){
        printf("You earns an excellent Bonus\n");
    }
    else if(rating == 4 && years >= 2){
        printf("Good Bonus\n");
    }
    else if(rating == 3 && years >= 1 ){
    printf("Basic Bonus\n");
    }
    else{
    printf("No Bonus\n");
    }
}