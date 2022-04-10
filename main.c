#include <stdio.h>
#include <string.h>
#include "header.h"

int main() {
    char input[255];

    char minWord[255];
    memset(minWord, ' ', sizeof(minWord));
    char secondMinWord[255];
    memset(secondMinWord, '\0', sizeof(minWord));

    while (scanf("%s", input) == 1) {
        getSecondShortestWord(input, minWord, secondMinWord);
    }
    printf("%s\n", secondMinWord);


    return 0;
}
