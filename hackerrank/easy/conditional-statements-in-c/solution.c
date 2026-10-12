#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    // Read the positive integer from standard input
    scanf("%d", &n);
    
    // Array storing lowercase English representations for numbers 1 to 9
    // Index 0 can be a dummy string since the problem states n >= 1
    char* words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Conditional check using if-else logic
    if (n >= 1 && n <= 9) {
        printf("%s\n", words[n]);
    } 
    else if (n > 9) {
        printf("Greater than 9\n");
    }

    return 0;
}
