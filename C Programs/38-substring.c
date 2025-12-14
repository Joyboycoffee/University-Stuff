#include <stdio.h>

void substring(char src[], char dest[], int start, int len) { 
    int i, j = 0;

    for (i = start; i < start + len && src[i] != '\0'; i++) {
        dest[j] = src[i];
        j++;
    }

    dest[j] = '\0';        // end the string
}

int main() {
    char str[100] = "This is an example string.";
    char sub[100];

    substring(str, sub, 2, 15);   // take 5 chars starting from index 2

    printf("substring = %s\n", sub);

    return 0;
}
