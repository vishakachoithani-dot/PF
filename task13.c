#include <stdio.h>
int main(){
    printf("Has the payment been made? (y/n): ");
    char payment_paid;
    scanf(" %c",&payment_paid);
    if (payment_paid == 'y'){
        printf("Membership Confirmed");
    }
    else{
        printf("Membership Status: Pending");
    }
    return 0;
}