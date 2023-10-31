// Program to swap the values of two variables using pointer
#include <stdio.h>

// Function to swap the values
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter values of x and y: ");
    scanf("%d %d", &x, &y);

	// For call the swap function to swap the values
    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
