#include <stdio.h>
#include <ctype.h>   
#include <stdbool.h> 
#include <string.h> 
#include <stddef.h>  

//Find the longest word in a sentence.

void findLongestWord(const char *sentence, char *outputBuffer, size_t bufferSize) {
    int maxLength = 0;
    int maxWordStart = -1;
    int currentLength = 0;
    int currentWordStart = 0;
    bool inWord = false;
    
    for (int i = 0; ; i++) {
        char c = sentence[i];
        
        if (isalpha(c)) {
            if (!inWord) {
                inWord = true;
                currentWordStart = i;
                currentLength = 1;
            } else {
                currentLength++;
            }
        } 
        else {
            if (inWord) {
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    maxWordStart = currentWordStart;
                }
                inWord = false;
            }
        }
        
        if (c == '\0') {
            break;
        }
    }
    
    if (maxWordStart != -1) {