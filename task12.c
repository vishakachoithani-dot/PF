#include <stdio.h>
int main(){
    int age1;
    printf("Enter the age of 1st applicant: ");
    scanf("%d",&age1);
    int age2;
    printf("Enter the age of 2nd applicant: ");
    scanf("%d",&age2);
    int age3;
    printf("Enter the age of 3rd applicant: ");
    scanf("%d",&age3);
    if (age1 >= 16 && age2 >= 16 && age3 >= 16){
        printf("Group Membership Allowed");
    }
    else {
        printf("Group Membership Denied");
    }
    return 0;
}