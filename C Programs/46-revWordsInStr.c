#include<stdio.h>
#include<string.h>

void reverseWord(char str[], int start, int end){
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main(){
    char str[200], revWrods[200];
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    // fgets(str, sizeof(str), stdin);

    int i = 0, wordStart = 0, wordEnd = 0;

    while (i <= strlen(str))
    {
        // find the end of the word
        if (str[i]==' ' || str[i]=='\0')
        {
            wordEnd = i - 1;
            // reverse the word from wordstart to wordEnd
            reverseWord(str, wordStart, wordEnd);
            wordStart = i + 1; // update wordstart for next word
        }
        i++;
    }
    

    printf("String with words reversed: %s\n", str);
    
    

    
    return 0;
}