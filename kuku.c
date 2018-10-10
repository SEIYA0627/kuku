#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a,b,sum;
    int i,j;
    int MAX;

    MAX=atoi(argv[1]);
    printf("%d\n",MAX);

    for(i=1;i<=MAX;i++){
        for(j=1;j<=MAX;j++){
            sum=i*j;
            printf("%3d ",sum);
        }
        printf("\n");
    }
}