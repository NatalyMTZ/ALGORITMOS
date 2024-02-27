#include <stdio.h>

int n =5;

int main(){
    for(int i =1; i<=n ; i++){
        for(int j = 1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    for(int i=n-1;i>0;i--){
        for(int j=1; j<=i;j++){
           printf("%d", j);
        }
        printf("\n");
    }
}
