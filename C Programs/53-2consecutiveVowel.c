#include <stdio.h>
#include <ctype.h>  // for tolower()

int main() {
    char line[500];
    int count = 0;

    printf("Enter a line of text:\n");
    scanf("%[^\n]", line);  // Read a line of text including spaces

    for (int i = 0; line[i] != '\0' && line[i + 1] != '\0'; i++) {
        char ch1 = tolower(line[i]);
        char ch2 = tolower(line[i + 1]);

        // Check if both characters are vowels
        if ((ch1 == 'a' || ch1 == 'e' || ch1 == 'i' || ch1 == 'o' || ch1 == 'u') &&
            (ch2 == 'a' || ch2 == 'e' || ch2 == 'i' || ch2 == 'o' || ch2 == 'u')) {
            count++;
            printf("Found: %c%c\n", line[i], line[i + 1]);
        }
    }

    printf("Total occurrences of two vowels in succession: %d\n", count);

    return 0;
}

