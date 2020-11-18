#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

bool argCheck(string cypher);

int main(int argc, string argv[]) {
    if(argc != 2) {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string cypher = argv[1];

    if(!argCheck(cypher)) {
        printf("Key must contain 26 letters\n");
    }

    
}

bool argCheck(string cypher) {

    bool validArg = true;
    
    if(strlen(cypher) != 26) {
        validArg = false;
    }

    while(validArg == true) {
        for(int i = 0; i < strlen(cypher); i++) {
            if(!isalpha(cypher[i])) {
                validArg = false;
            }
        }
    }

    return validArg;
}