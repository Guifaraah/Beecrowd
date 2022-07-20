#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j, r, i, k, m, t;
    scanf("%d%d", &j, &r);
    int c[j*r], s[j];
    for(i=0; i<j*r; i++){
        scanf("%d", &c[i]);
    }

    for(i=0; i<j; i++){
        s[i] = 0;
    }
    for(i=0; i<j; i++){
        for(k=i; k<r*j; k+=j){
            s[i] += c[k];
        }
    }
    m = s[0];
    t = 1;
    for(i=0; i<j; i++){
        if(s[i] >= m){
            m  = s[i];
            t = i+1;
        }
    }
    printf("%d\n", t);


    return 0;
}