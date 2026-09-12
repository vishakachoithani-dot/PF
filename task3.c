#include <stdio.h>
int main(){
    printf("1. Basic");
    printf("2. Premium");
    printf("3. Advance");
    int plan;
    printf("enter the plan you want:");
    scanf("%d",&plan);
    switch(plan){
        case 1:
        printf("you have selected Basic plan");
        break;
        case 2:
        printf("you have selected Premium plan");
        break;
        case 3:
        printf("you have selected Advance plan");
        break;
        default:
        printf("invalid choice!");
        
    }
    return 0;
}