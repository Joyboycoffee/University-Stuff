#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, j, len;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    // fgets(str, sizeof(str), stdin);

    // find length
    len = strlen(str);


    // remove newline if present
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    printf("Reverse: ");
    for (int k = len - 1; k >= 0; k--) printf("%c", str[k]);
    printf("\n");

    j = len - 1;

    // check palindrome
    while (i < j) {
        if (str[i] != str[j]) {
            printf("Not a palindrome\n");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome\n");
    return 0;
}
