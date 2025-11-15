//
// Created by IIISI on 11/13/2025.
//
#include <stdio.h>
int main() {
    int size,even=0,odd=0;
    printf("Enter size of array: \n ");
    scanf("%d", &size);
    int arr[size],ev[size];
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++) {
        int j=0;
        if (arr[i] % 2 == 0) {
            even++;
            ev[j]=arr[i];
            j++;
        }
        else {
            odd++;
        }

    }
    printf("The odd number of the array is: %d \n", odd);
    printf("The even number of the array is: %d", even);

}