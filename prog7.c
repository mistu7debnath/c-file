//write a c program to number of vowel and consonent strings  in switch case
#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            switch (ch) {
                case 'a': 
                case 'e': 
                case 'i': 
                case 'o': 
                case 'u':
                case 'A': 
                case 'E': 
                case 'I': 
                case 'O': 
                case 'U':
                vowels++;
                    break;
                default:
                    consonants++;
            }
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
