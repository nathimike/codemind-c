#include <stdio.h>
#include <string.h>

int main() 
{
    char str[200];
    scanf("%s",str);
    int count[26] = {0};
    int len = strlen(str);
    for(int i = 0; i < len; i++)
        count[str[i] - 'a']++;
    int min = count['b' - 'a'];
    min = (count['a' - 'a'] < min) ? count['a' - 'a'] : min;
    min = (count['l' - 'a'] / 2 < min) ? count['l' - 'a'] / 2 : min;
    min = (count['o' - 'a'] / 2 < min) ? count['o' - 'a'] / 2 : min;
    min = (count['n' - 'a'] < min) ? count['n' - 'a'] : min;
    printf("%d",min);
}
