//
// Created by IIISI on 11/12/2025.
//
#include <stdio.h>
int main() {
    int size,n,p;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("enter %d array elements: ",size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter the element ");
    scanf("%d",&n);
    printf("enter the position");
    scanf("%d",&p);
    if (p>size || p<0) {
        printf("Invalid Input");
    }
    else {
        for (int i = size; i >= p; i--) {
            arr[i] = arr[i-1];

        }
        arr[p-1] = n;
        size++;


        printf("Array after entering elements: ");
        for (int i = 0; i < size; i++) {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
