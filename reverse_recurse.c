#include <stdio.h>

// Function to swap two elements in the array
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Recursive function to reverse the array
void reverse(int* arr, int i, int n) {
    if (i >= n / 2) {
        return;
    }
    swap(&arr[i], &arr[n - i - 1]);
    reverse(arr, i + 1, n);
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverse(arr, 0, n); 

    printf("[");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    printf("]");

    return 0;
}
