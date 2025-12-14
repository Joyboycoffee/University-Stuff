#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], newstr[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[i] != '\0') {

        // Check case-insensitive "the"
        if (tolower(str[i])   == 't' &&
            tolower(str[i+1]) == 'h' &&
            tolower(str[i+2]) == 'e' &&
            (str[i+3] == ' ' || str[i+3] == '\0'))
        {
            i += 3;          // skip "the"
            if (str[i] == ' ') i++;  // skip space after it
        }
        else {
            newstr[j] = str[i];
            j++; i++;
        }
    }

    newstr[j] = '\0';

    printf("String after removing 'the': %s\n", newstr);
    return 0;
}
