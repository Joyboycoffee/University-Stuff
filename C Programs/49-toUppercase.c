#include<stdio.h>

int main(){
    char str[100];
    char upperStr[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    // fgets(str, sizeof(str), stdin);

    printf("Uppercase string: ");
    for (int i = 0; str[i] != '\0'; i++)
    {
        // Convert lowercase letters to uppercase
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            upperStr[i] = str[i] - ('a' - 'A');
        }
        else
            upperStr[i] = str[i];
        
        printf("%c", upperStr[i]);
    }

    return 0;
}