//
// Created by IIISI on 9/11/2025.
//
#include <stdio.h>

int main() {
    // Declare variables to store marks and final result.
    float c_marks, ai_marks, final_marks;

    printf("Enter marks for C (out of 100): ");

    scanf("%f", &c_marks);

    printf("Enter marks for Generative AI (out of 100): ");

    scanf("%f", &ai_marks);
    final_marks = (c_marks * 0.30) + (ai_marks * 0.70);

    printf("\nStudent's Final Marks: %.2f\n", final_marks);

    return 0;
}
