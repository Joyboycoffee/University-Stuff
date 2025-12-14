#include <stdio.h>
#include <string.h>

int main() {
    char str[81], result[81];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);
    // fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U') 
        {
            result[j] = str[i];
            j++;
        }
        i++;
    }

    result[j] = '\0';

    printf("Sentence without vowels: %s\n", result);

    return 0;
}
