//Create a program in C to search for a substring within a larger string with a user defined functions
#include<stdio.h>
#include<string.h>
int searchSubstring(char mainString[], char subString[]) {
    int mainLen = strlen(mainString);
    int subLen = strlen(subString);
  for (int i = 0; i <= mainLen - subLen; i++) {
        int j;
        for (j = 0; j < subLen; j++) {
            if (mainString[i + j] != subString[j]) {
                break;
            }
        }


        if (j == subLen) {
            return i;
        }
    }
    return -1;
}

int main() {
    char mainString[100], subString[50];
    printf("Enter the main string: ");
    gets(mainString);

    printf("Enter the substring to search for: ");
    gets(subString);

    int index = searchSubstring(mainString, subString);
    if (index != -1) {
        printf("Substring found at index: %d\n", index);
    } else {
        printf("Substring not found in the main string.\n");
    }

    return 0;
}




