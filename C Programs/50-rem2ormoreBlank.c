// WAP that replaces two or more consecutive blanks in a string by a single blank.
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char result[100];
    int i = 0, j = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    // fgets(str, sizeof(str), stdin);
    
    while (str[i]!='\0')
    {
        // If current character is not a blank, copy it to result
        if (str[i] != ' ')
        {
            result[j++] = str[i++];
        }
        else
        {
            // If current character is a blank, copy it and skip subsequent blanks
            result[j++] = str[i++];
            while (str[i] == ' ')
            {
                i++;
            }
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    printf("String after replacing blanks:\n");
    printf("%s", result);
    return 0;
    
}