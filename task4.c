#include <stdio.h>
int main(){
    int months;
    int price = 3000;
    scanf("%d",&months);
    if (months >= 6){
        int final_price = price * 0.90;
        printf("10%% discount applied\n");
        printf("final price: %d",final_price);
    
    }
    else{
        printf("No discount\n");
        printf("final price: %d",price);
    }
    return 0;
}