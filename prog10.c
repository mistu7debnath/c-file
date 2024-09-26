//write a program in c to implement copy and concatenate and compare 2 strings without using library function  
#include <stdio.h>
void stringCopy(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';  
}
void stringConcat(char *str1, char *str2) {
    while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';  
}
int stringCompare(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return (*str1 - *str2);  
        }
        str1++;
        str2++;
    }
    
    if (*str1 == '\0' && *str2 == '\0') {
        return 0;  
    } else if (*str1 == '\0') {
        return -1;  
    } else {
        return 1; 
    }
}

int main() {
    char str1[100], str2[100], copyStr[100], concatStr[200];
    int compareResult;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
        }
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
        }
    }

    
    stringCopy(str1, copyStr);
    printf("\nCopied string: %s\n", copyStr);
    stringCopy(str1, concatStr);  
    stringConcat(concatStr, str2);  
    printf("Concatenated string: %s\n", concatStr);
    compareResult = stringCompare(str1, str2);
    if (compareResult == 0) {
        printf("Strings are equal.\n");
    } else if (compareResult > 0) {
        printf("First string is greater.\n");
    } else {
        printf("Second string is greater.\n");
    }

    return 0;
}
