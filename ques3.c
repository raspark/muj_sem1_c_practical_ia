// Program to display the Fibonacci sequence
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    // Display the Fibonacci sequence
    for(i=1;i<=n;i++){
        printf("%d ",a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

