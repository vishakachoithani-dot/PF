#include <stdio.h>
int main(){
    int ratings;
    printf("Please enter the ratings: ");
    scanf("%d",&ratings);
    if (ratings == 5){
        printf("Excellent");
    }
    else if (ratings == 4){
        printf("Good");
    }
    else if (ratings == 3){
        printf("Average");
    }
    else if (ratings == 2){
        printf("poor");
    }
    else{
        printf("Invalid ratings");
    }
    return 0;
}