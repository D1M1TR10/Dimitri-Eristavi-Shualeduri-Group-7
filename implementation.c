#include "header.h"
#include <string.h>

void getSecondShortestWord(char* input, char* minWord, char* secondMinWord) {
    unsigned long long minWordLen = strlen(minWord);

    if (minWordLen == 0 || minWordLen >= strlen(input)) {
        strcpy(secondMinWord, minWord);
        strcpy(minWord, input);
    } else if (strlen(secondMinWord) >= strlen(input)) {
        strcpy(secondMinWord, input);
    }
}