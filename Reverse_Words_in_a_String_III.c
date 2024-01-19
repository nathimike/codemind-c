#include <stdio.h>
#include <string.h>
int main() 
{
    char str[200];
    scanf("%[^
]s",str);
    int len = strlen(str),i=0;
    while (i < len) 
    {
        int j = i;
        while (j < len && str[j] != ' ') 
        {
            j++;
        }
        for (int k = j - 1; k >= i; k--) 
        {
            printf("%c", str[k]);
        }
        if (j < len) {
            printf(" ");
        }
        i = j + 1;
    }
    return 0;
}
