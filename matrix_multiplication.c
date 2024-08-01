#include <stdio.h>

int main() {
    int r1, r2, c1, c2;
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Invalid");
        return 0;
    }

    int m1[r1][c1];
    int m2[r2][c2];

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    int result[r1][c2];


    for (int i = 0; i < r1; i++) {
        
        for (int j = 0; j < c2; j++) {
           result[i][j] = 0;
            for (int k = 0; k < r2; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Print the result matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}