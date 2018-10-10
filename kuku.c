#include <stdio.h>
int main(){
    int a,b,sum;
    int i,j;

    for(i=1;i<15;i++){
        for(j=1;j<15;j++){
            sum=i*j;
            printf("%3d ",sum);
        }
        printf("\n");
    }
}