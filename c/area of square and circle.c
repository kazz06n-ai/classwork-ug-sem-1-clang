#include<stdio.h>
int main() {
    float side;
    printf("The length of side of sq : ");
    scanf("%f",&side);
    float area = side*side;
    printf("The area of sq is %f: \n ",area);
    float radius;
    printf("Enter the radius of the circle :");
    scanf("%f",&radius);
    float area_of_circle = radius*radius*3.14;
    printf("The area of circle is %f : ",area_of_circle);
    return 0;

}