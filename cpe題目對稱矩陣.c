#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);

    int input_num[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&input_num[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(input_num[i][j]!=input_num[n-1-i][n-1-j]){
                printf("不對稱");
            }
        }
    }
    

    return 0;
}