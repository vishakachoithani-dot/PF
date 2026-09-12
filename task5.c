#include <stdio.h>
int main(){
    printf("Do you want a personal trainer(y/n): ");
    char choice;
    scanf("%c",&choice);
    if (choice == 'y'){
        int bill;
        printf("Enter the bill: ");
        scanf("%d",&bill);
        int tranie_fee = 1000;
        printf("personal tranier added..\n");
        printf("Updated bill: %d",bill + tranie_fee);
    
    }
    else{
        printf("No personal tranier selected");
    }
    return 0;

    
}