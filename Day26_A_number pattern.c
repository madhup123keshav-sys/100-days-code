#include <stdio.h>

//Write a program to print the following pattern:
    5
   45
  345
 2345
12345

void printPattern(int n) {
    
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= (n - i); j++) {
            printf(" ");
        }
        
        int startNum = (n - i) + 1;
        
        for (int j = startNum; j <= n; j++) {
            printf("%d", j);
        }
        
        printf("\n");
    }
}

int main() {
    
    int rows = 5;
    printPattern(rows);
    return 0;
}
