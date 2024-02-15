#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        int flag=0;
        char arr[8][8];
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                scanf("%c ",&arr[i][j]);
            }
        }
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                if(arr[i][j]=='#' && arr[i+2][j]=='#')
                {
                    printf("%d %d
",i+2,j+1);
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
        }
    }
}