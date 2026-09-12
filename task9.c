#include <stdio.h>
int main(){
    printf("1. Protein\n");
    printf("2. Creatine\n");
    printf("3. BCAA\n");
    int supplement_choice;
    printf("enter the supplement you want: ");
    scanf("%d",&supplement_choice);
    switch(supplement_choice){
        case 1:
        printf("Protein selected");
        break;
        case 2:
        printf("Creatine selected");
        break;
        case 3:
        printf("BCAA selected");
        break;
        default:
        printf("Invalid supplement choice!");
        
    }
    return 0;
}