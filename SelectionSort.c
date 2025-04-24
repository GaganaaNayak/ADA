
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, n, k, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n]; // Or use malloc for portability
    srand(time(NULL));

    for(i = 0; i < n; i++) {
        a[i] = rand() % 25000;
    }

    clock_t start = clock();

    for(i = 0; i < n - 1; i++) {
        j = i;
        for(k = i + 1; k < n; k++) {
            if(a[k] < a[j]) {
                j = k;
            }
        }
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    clock_t end = clock();
    double timetaken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("The time taken = %.6f seconds\n", timetaken);

    // Optional: Print the sorted array
    /*
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    */

    return 0;
}
