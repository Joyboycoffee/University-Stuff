#include <stdio.h>
#include <string.h>

void abbreviateName(char str[], char abbrev[])
{
    int i = 0, j = 0, lastWordStart = 0;
    // remove trailing spaces
    int len = strlen(str);
    while (len > 0 && str[len - 1] == ' ') // len - 1 for getting the index
        str[--len] = '\0';

    // find where the last word begins
    for (i = len - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            lastWordStart = i + 1;
            break;
        }
    }

    // abbreviate all words before last word
    for (i = 0; i < lastWordStart; i++)
    {
        if (i == 0 || str[i - 1] == ' ')
        {
            abbrev[j++] = str[i];
            abbrev[j++] = '.';
            abbrev[j++] = ' ';
        }
    }

    // copy the last word fully
    i = lastWordStart;
    while (str[i] != '\0')
    {
        abbrev[j++] = str[i++];
    }

    abbrev[j] = '\0';
}

int main()
{
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar(); // consume newline after number input
    char names[n][100];
    char abbrev[n][100];

    for (int i = 0; i < n; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%[^\n]s", names[i]);
        getchar(); // consume leftover newline after each name
    }

    for (int i = 0; i < n; i++)
    {
        abbreviateName(names[i], abbrev[i]);
    }

    printf("\nAbbreviated Names:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Original Name %d: %s\n", i + 1, names[i]);
        printf("Abbreviated Name %d: %s\n\n", i + 1, abbrev[i]);
    }

    return 0;
}
