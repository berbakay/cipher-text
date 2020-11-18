#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

bool argCheck(string cipher);
void printCipher (string cipher, string plaintext);

int main(int argc, string argv[]) {
    if(argc != 2) {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string cipher = argv[1];

    for(int i = 0; i < strlen(cipher); i++) {
        cipher[i] = toupper(cipher[i]);
    }

    if(!argCheck(cipher)) {
        printf("Key must contain 26 unique letters\n");
        return 1;
    }

    string plaintext = get_string("plaintext: ");
    printCipher(cipher, plaintext);
}

bool argCheck(string cipher) {

    bool validArg = true;
    
    if(strlen(cipher) != 26) {
        validArg = false;
    }

    bool stringEnd = false;

    while(validArg && !stringEnd) {
        for(int i = 0; i < strlen(cipher); i++) {
            if(!isalpha(cipher[i])) {
                validArg = false;
            }
        }
        stringEnd = true;
    }

    for(int i = 0; i < strlen(cipher); i++) {
        for(int j = 0; j < strlen(cipher); j++) {
            if(i != j) {
                if(cipher[i] == cipher[j]) {
                    validArg = false;
                }
            }
        }
    }
    return validArg;
}

void printCipher (string cipher, string plaintext) {
    printf("ciphertext: ");
    for(int i = 0; i < strlen(plaintext); i++) {
        char newLetter = plaintext[i];
        bool isLowerCase = false;
        if(isalpha(newLetter)) {
            if(newLetter > 90) {
                isLowerCase = true;
                newLetter -= 32;
            }
            newLetter = cipher[newLetter - 65];

            if(isLowerCase) {
                newLetter += 32;
            }
        }
        printf("%c", newLetter);
    }
    printf("\n");
}