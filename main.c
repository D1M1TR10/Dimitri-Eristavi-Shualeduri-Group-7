#include <stdio.h>
#include <string.h>

int main() {
    char input[255];

    char minWord[255];
    memset(minWord, ' ', sizeof(minWord));
    char secondMinWord[255];
    memset(secondMinWord, '\0', sizeof(minWord));

    while (scanf("%s", input) == 1) {
        unsigned long long minWordLen = strlen(minWord);

        if (minWordLen == 0 || minWordLen >= strlen(input)) {
            strcpy(secondMinWord, minWord);
            strcpy(minWord, input);
        } else if (strlen(secondMinWord) >= strlen(input)) {
            strcpy(secondMinWord, input);
        }
    }
    printf("%s\n", secondMinWord);


    return 0;
}
