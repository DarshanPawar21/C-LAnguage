#include <stdio.h>
void findCube(int *p, int r, int c) {
    int i, j;

    printf("\nCube of all elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            int val = *(p + i*c + j);   // pointer to 2D array element
            printf("%d ", val * val * val);
        }
        printf("\n");
    }
}
int main() {
    int r, c, i, j;
    int arr[10][10];

    printf("Enter rows: ");
    scanf("%d", &r);

    printf("Enter columns: ");
    scanf("%d", &c);

    printf("Enter 2D array elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    findCube((int *)arr, r, c);   

    return 0;
}

