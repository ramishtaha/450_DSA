//
// Created by ramis on 06-03-2021.
//
#include <stdio.h>

void reverse_array(int arr[], int size) {
    int temp;
    int start = 0, end = size-1;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void print_array(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}

void  main() {
    int arr[100];
    int size;
    int i;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    reverse_array(arr, size);
    print_array(arr, size);
}

