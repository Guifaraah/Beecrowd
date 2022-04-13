#include <stdio.h>

int main(){
    int X[10];  // X[0], X[1]..., para cada valor de X[i] teremos um valor "n".
    int n;

    for(int i = 0; i < 10; i++){
        scanf("%d", &n);
        
        if(n <= 0){
            X[i] = 1;
        }
        else{
            X[i] = n;
        }

        printf("X[%d] = %d\n", i, X[i]);
    }

    return 0;
}