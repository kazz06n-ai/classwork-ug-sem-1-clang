//
// Created by IIISI on 9/16/2025.
//
#include <stdio.h>
int main() {
    int day;
    printf("Enter the day(1-7):");
    scanf("%d",&day);

    if(day==1)
        printf("monday");
    else if(day==2)
        printf("tuesday");
    else if(day==3)
        printf("wednesday");
    else if(day==4)
        printf("thursday");
    else if(day==5)
        printf("friday");
    else if(day==6)
        printf("saturday");
    else if(day==7)
        printf("sunday");
    else
        printf("INVALID choose from the given no");

    return 0;
}