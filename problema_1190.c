#include <stdio.h>

int main(){
    char O;
    int i, j;
    double M[12][12];
    double soma = 0;
    double media;


    scanf("%c\n", &O);
    for(j = 0; j < 12; j++){
            for(i = 0; i < 12; i++){
                scanf("%lf", &M[j][i]);
                
            }
        }

    for(j = 1; j < 12; j++){
        if(j <= 5){
            for(i = 11; i > 11 - j; i--){
                soma += M[j][i];
            }
        }
        else{
            for(i = 11; i > j; i--){
                soma += M[j][i];
            }
        }
    }

    if(O == 'S'){
        
        printf("%.1lf\n", soma);
    }

    if(O == 'M'){
        media = soma / 30.0;
        printf("%.1lf\n", media);
    }

    
    return 0;
}