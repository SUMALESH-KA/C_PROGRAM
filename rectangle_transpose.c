#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    char arr[rows][cols][MAX_STRING_LENGTH];

    // Input matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%s", arr[i][j]);
        }
    }

    // Transpose matrix
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%s ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}