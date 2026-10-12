#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    
    // Read the positive integer input
    if (scanf("%d", &n) != 1) {
        return 1; 
    }

    // BTL3 Application: Conditional evaluation logic
    if (n >= 1 && n <= 9) {
        // String array lookup for optimal O(1) time complexity
        const char *words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        printf("%s\n", words[n]);
    } else if (n > 9) {
        printf("Greater than 9\n");
    }

    return 0;
}
