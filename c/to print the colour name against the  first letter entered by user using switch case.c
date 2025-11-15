//
// Created by IIISI on 9/30/2025.
//
#include <stdio.h>
int main() {
    char color;
    printf("Enter the colours Initial in lowercase");
    scanf("%c",&color);
    switch (color) {
        case 'y' :
            printf("Yellow");
            break;
        case 'b':
            printf("Blue");
            break;
        case 'g' :
            printf("Green");
            break;
        case  'r':
            printf("Red");
            break;
        case 'm' :
            printf("Magenta");
            break;

        case 'p':
            printf("pink");
            break;
        default:
            printf("error");
    }
    return 0;
}