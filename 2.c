/*Implement a C program that sorts strings lexicographically, considering uppercase
and lowercase letters, and without using the standard library sorting functions.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRINGS 10
#define MAX_LENGTH 50

void lexicographicSort(char arr[][MAX_LENGTH], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                char temp[MAX_LENGTH];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    char strings[MAX_STRINGS][MAX_LENGTH];
    int numStrings;

    // Input
    printf("Enter the number of strings (up to %d): ", MAX_STRINGS);
    scanf("%d", &numStrings);



    printf("Enter %d strings, one per line:\n", numStrings);
    for (int i = 0; i < numStrings; i++) {
        scanf("%s", strings[i]);
    }

    // Sort the strings lexicographically
    lexicographicSort(strings, numStrings);

    // Output
    printf("\nSorted strings:\n");
    for (int i = 0; i < numStrings; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
