#include <stdio.h>
int main(){
    int months;
    printf("enter months: ");
    scanf("%d",&months);
    int plan_rate;
    printf("enter plan rate: ");
    scanf("%d",&plan_rate);
    int basic_bill = months * plan_rate;
    int tax = basic_bill * 0.90;
    int total_bill = basic_bill + tax;
    printf("initial amount: %d\n", basic_bill);
    printf("tax applied: %d\n", tax);
    printf("final amount: %d", total_bill);

}