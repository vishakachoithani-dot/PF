#include <stdio.h>
int main(){
    int Bill;
    printf("Enter the bill amount: ");
    scanf("%d",&Bill);
    printf("Do you want a Diet consulation? (y/n): ");
    char choice;
    scanf(" %c",choice);
    if (choice == 'y'){
        Bill = Bill + 500;
        printf("Diet consulation added..");
        printf("updated bill: %d",Bill);
    
    }
    else{
        printf("No diet consulation selected");
        printf("Bill: %d");
    }
    return 0;
}