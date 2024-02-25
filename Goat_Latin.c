#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) 
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[200];
    scanf("%[^
]s",str);
    char *str2 = strtok(str, " ");
    int a_count = 1;
    while (str2 != NULL) 
    {
        if (isVowel(str2[0])) 
        {
            printf("%sma", str2);
        } else 
        {
            printf("%s%cma", str2 + 1, str2[0]);
        }
        for (int i = 0; i < a_count; i++) 
        {
            printf("a");
        }
        printf(" ");
        str2 = strtok(NULL, " ");
        a_count++;
    }
}
