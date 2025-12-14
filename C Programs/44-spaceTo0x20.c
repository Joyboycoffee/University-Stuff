#include <stdio.h>
#include <string.h>

int main() {
    char str[200], newstr[400];
    int i = 0, j = 0;

    printf("Enter a line: ");
    scanf("%[^\n]s", str);
    // fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            newstr[j++] = '0';
            newstr[j++] = 'x';
            newstr[j++] = '2';
            newstr[j++] = '0';
        } else {
            newstr[j++] = str[i];
        }
        i++;
    }

    newstr[j] = '\0';

    printf("After replacement: %s\n", newstr);

    return 0;
}
