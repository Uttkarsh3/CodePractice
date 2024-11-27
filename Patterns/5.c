#include<stdio.h>
int main()
{
    int n=5;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}