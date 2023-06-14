#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 100000

void encryption(char* ciphertext, char* plaintext, char* key) {
    int length = strlen(plaintext);
    for (int i = 0; i < length; i++) {
        ciphertext[i] = '\0';
        int p = plaintext[i] - 'A'; // Plaintext character as integer (0-25)
        int k = key[i] - 'A'; // key character as integer (0-25)
        int c;
        if (plaintext[i] == ' ') { // Space
            c = 26;
        } else { // A-Z
            c = (p + k) % 26;
        }
        ciphertext[i] = c + 'A';
    }
    ciphertext[length] = '\0';
}

int main() {
    char ciphertext[256] = {'\0'};
    char plaintext[] = "HELLO";
    char key[] = "XMCKLBS ";
    char verifier[10] = {'\0'};
    strcpy(verifier, "ENC,");
    // sprintf(ciphertext, "%s%s%s", verifier, plaintext, key);

    // printf("%s\n", ciphertext);
    

    // char *token;
    // token = strtok(ciphertext, ",");
    // strcpy(verifier, token);
    // token = strtok(NULL, ",");
    // strcpy(plaintext, token);
    // token = strtok(NULL, ",");
    // strcpy(key, token);

    // printf("\nafter token: verifier: %s00\nplaintext: %s00\nkey: %s00\n", verifier, plaintext, key);

    encryption(ciphertext, plaintext, key);
    printf("%s\n", ciphertext);

    return 0;
}