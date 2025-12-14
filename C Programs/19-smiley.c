#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. Set the terminal to UTF-8 mode (Modern Standard)
    system("chcp 65001"); 
    system("cls");

    int i;
    for (i = 0; i < 100000; i++) {
        // 2. Use the Unicode code for White Smiling Face (\u263A)
        // instead of the old ASCII 1
        printf("\u263A "); 
    }
    
    printf("\n");
    system("pause");
    return 0;
}