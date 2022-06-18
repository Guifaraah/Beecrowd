#include <stdio.h>

int main(){
    int j, n, k, l;
    int par[5], impar[5];
    int qp = 0, qi = 0;

    for(int j = 0; j < 15; j++){
        scanf("%d", &n);

        if(n % 2 == 0){
            par[qp] = n;
            qp++;
            
            if(qp == 5){
                for(k = 0; k < 5; k++){
                    printf("par[%d] = %d\n", k, par[k]);
                }
               
                qp = 0;
                
            }
        }
        else{
            impar[qi] = n;
            qi++;
            
            if(qi == 5){
                 for(k = 0; k < 5; k++){
                    printf("impar[%d] = %d\n", k, impar[k]);
                }
                
                qi = 0;
                
            }
        }
}
    for(k = 0; k < qi; k++){
        printf("impar[%d] = %d\n", k, impar[k]);
    }
    for(k = 0; k < qp; k++){
        printf("par[%d] = %d\n", k, par[k]);
    }

    return 0;
}