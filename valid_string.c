#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    scanf("%[^
]s",str);
    int freq[26]={0};
    int i,count=0;
    for(i=0;str[i]!=NULL;i++)
        freq[str[i]-'a']++;
    for (i = 0;i<26;i++)
        count += freq[i]%2;
    (count <= 1) ? printf("Valid String") : printf("Not Valid");
}
