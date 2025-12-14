#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int count[256] = {0}; // Array to hold count of each character
    char ch;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    // fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++)
    {
        count[(unsigned char)str[i]]++;
    }

    printf("Character counts:\n");
    for (int i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            printf("'%c' : %d\n", i, count[i]);
        }
    }

    return 0;
}