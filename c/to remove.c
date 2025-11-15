//
// Created by IIISI on 11/13/2025.
//
#include <stdio.h>
int main() {
    int size,position;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("position of element to be removed: ");
    scanf("%d", &position);
    if (position > size || position < 0) {
        printf("Array is out of bounds\n");
    }
    else {
        for (int i=position; i<size; i++) {
            arr[i] = arr[i+1];
        }
        size--;
    }
    printf("Array after removing elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}