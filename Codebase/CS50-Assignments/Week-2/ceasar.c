// This program will conduct a cypher operation on a given string using a simple Caesar cipher technique.
// The user will input a string and a shift value, and the program will output the encrypted string.

#include <stdio.h>
void caesarCipher(char *str, int shift) {
    char ch;
    for(int i = 0; str[i] != '\0'; ++i) {
        ch = str[i];
        // Encrypt uppercase letters and if the letter goes beyond 'Z', wrap it around to the beginning of the alphabet
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + shift;
            while(ch > 'Z') {
                ch = ch - 'Z' + 'A' - 1;
                break;
            }
            str[i] = ch;
        }
        // Encrypt lowercase letters
        else if(ch >= 'a' && ch <= 'z') {
            ch = ch + shift;
            while(ch > 'z') {
                ch = ch - 'z' + 'a' - 1;
                break;
            }
            str[i] = ch;
        }
    }
}
int main() {
    char str[100];
    int shift;
    printf("Enter a string to encrypt: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter shift value: ");
    scanf("%d", &shift);
    caesarCipher(str, shift);
    printf("Encrypted string: %s\n", str);
    return 0;
}