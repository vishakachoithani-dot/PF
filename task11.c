#include <stdio.h>
int main(){
    int bill;
    printf("Enter the bill amount:");
    scanf("%d",&bill);
    printf("Are you a coperate employee? (y/n): ");
    char ans;
    scanf(" %c",&ans);
    if (ans == 'y'){
        int bill = bill * 0.80;
        printf("20%% Corporate Discount Applied\n");
        printf("final amount: %d", bill);
    }
    else {
        printf("No Corporate Discount\n");
        printf("Bill: %d", bill);
    }
    return 0;
}