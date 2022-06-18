#include <stdio.h>

int main(){
    char O;
    int i, j;
    float M[12][12];
    
    float contador = 0.0;
    float media;

    scanf("%c\n", &O);
    for(j = 0; j < 12; j++){
            for(i = 0; i < 12; i++){
                scanf("%f", &M[j][i]);
                
            }
        }

    for(j = 0; j <= 10; j++){
            for(i = 0; i <= 10 - j; i++){
                
                contador += M[j][i];
                
            }
        }

    if(O == 'S'){
        
        printf("%.1f\n", contador);
    }

    if(O == 'M'){
        media = contador / 66.0;
        printf("%.1f\n", media);
    }

    
    return 0;
}