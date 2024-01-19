#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[200],str[200];
    scanf("%[^
]s",str1);
    int len = strlen(str1),i;
    for(i=0;i<len;i++)
    {
        str[i]=str1[len-(i+1)];
    }
    i=0;
    while (i < len) 
    {
        int j = i;
        while (j < len && str[j] != ' ') 
        {
            j++;
        }
        for (int k = j-1; k >= i; k--) 
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
