#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    // Read the interval bounds a and b
    scanf("%d\n%d", &a, &b);
    
    // Array to store the lowercase English representations for numbers 1 to 9
    char* words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Loop through each integer in the inclusive interval [a, b]
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            printf("%s\n", words[i]);
        } 
        else if (i > 9) {
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}
