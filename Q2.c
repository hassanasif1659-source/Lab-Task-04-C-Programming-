// Task # 02:
// An ATM allows a customer to withdraw money only when the withdrawal amount is greater than
// 0 and does not exceed the available balance.
// Take the balance and withdrawal amount from the user. Use if-else and && to
// display "Withdrawal Approved" or "Withdrawal Denied".
#include <stdio.h>

int main(){
    int balance ;
    int withdrawal_amount ;
    printf("Enter Total Balance : ");
    scanf("%d" ,&balance);
    printf("Enter Withdrawal Amount : ");
    scanf("%d" ,&withdrawal_amount);
 if(withdrawal_amount > 0 && withdrawal_amount < balance){
   printf("Withdrawal Approved ! ");
 }
 else{
    printf("Withdrawal Denied ! ");
 }
}