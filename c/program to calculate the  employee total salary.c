//
// Created by IIISI on 9/23/2025.
//
#include <stdio.h>
int main() {
    float
    ba,ts,hra,ta,da;
    printf("Enter your base salary");
    scanf("%f",&ba);
    if  (ba<35000) {
        da=ba*.03;
        ta=ba*.02;
        hra=ba*.04;
        ts=ba+da+ta-hra;
        printf("Total Salary is %f \n base salary %f \n  the da is 3%%:%.3f \n the ta  is 2%%:%.3f \n the hra 4%%:%.3f  ",ts,ba,da,ta,hra);
    }
    else if (ba>=35000 && ba<80000) {
        da=ba*.04;
        ta=ba*.03;
        hra=ba*.05;
        ts=ba+da+ta-hra;
        printf("Total Salary is %f \n base salary %f \n  the da is 4%%:%.3f \n the ta  is 23%:%.3f \n the hra 5%%:%.3f  ",ts,ba,da,ta,hra);
    }

    else {
        da=ba*.05;
        ta=ba*.04;
        hra=ba*.07;
        ts=ba+da+ta-hra;
        printf("Total Salary is %f \n base salary %f \n the da is 5%%:%.3f \n the ta is 4%%:%.3f \n the hra 7%%:%.3f  ",ts,ba,da,ta,hra);
    }


    return 0;
}