// A smart electricity meter checks a household's monthly electricity consumption.
//  If the usage is
// more than 500 units,
//  the system should show a warning; 
// otherwise, it should show that usage is
// normal.
// int units = 650;
// Write a C program using if-else to display "High Usage" or "Normal Usage".

#include <stdio.h>
int main(){
    int units;  //650
    printf("Write household monthly electricity consumption :");
    scanf("%d",&units);
    if ( units > 500 ){
        printf("Its Warning ! High Usage ");
    }
        else{
            printf("Normal Usage !");
    }
}