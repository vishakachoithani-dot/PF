#include <stdio.h>
int main(){
    int bill;
    printf("Enter the bill amount: ");
    scanf("%d",&bill);
    int payment_day;
    printf("Enter the nth day of payment: ");
    scanf("%d",&payment_day);
    if (payment_day > 10){
        bill = bill + 300;
        printf("late payment penalty applied ");
        printf("total bill: %d",bill);
    }
    else{
        printf("No late payment penalty applied");
        printf("total bill: %d",bill);
    }
    return 0;
}