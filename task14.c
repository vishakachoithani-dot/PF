#include <stdio.h>
int main(){
    int rating;
    printf("Please enter the rating: ");
    scanf("%d",&rating);
    if (rating >= 4){
        printf("You received a free protein shake voucher");
    }
    else{
        printf("We will improve service");
    }
    return 0;
}