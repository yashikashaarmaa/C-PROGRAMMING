#include <stdio.h>

void traverse(int m[], int x) {
    int i;
    printf("Marks are:\n");
    for (i = 0; i < x; i++) {
        printf("%d ", m[i]);
    }
    printf("\n");
}

int main() {
    int n, i, marks[100];
    
    printf("Input nth value (number of subjects): ");
    scanf("%d", &n);
    
    // Added a loop to actually take inputs for all subjects
    for (i = 0; i < n; i++) {
        printf("Input marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    
    // Fixed the function name spelling
    traverse(marks, n);

    return 0;
}