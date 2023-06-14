#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 100000

int main() {
    char ciphertext[256] = {'\0'};
    char plaintext[] = "this is plain text,";
    char key[] = "this is a key";
    char verifier[10] = {'\0'};
    strcpy(verifier, "ENC,");
    sprintf(ciphertext, "%s%s%s", verifier, plaintext, key);

    printf("%s\n", ciphertext);
    

    char *token;
    token = strtok(ciphertext, ",");
    strcpy(verifier, token);
    token = strtok(NULL, ",");
    strcpy(plaintext, token);
    token = strtok(NULL, ",");
    strcpy(key, token);

    printf("\nafter token: verifier: %s00\nplaintext: %s00\nkey: %s00\n", verifier, plaintext, key);

    return 0;
}