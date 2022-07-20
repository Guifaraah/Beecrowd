#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, b, j=0, s[55];
    char v[55], r[55];

    scanf("%d", &a);
    for(i=0; i<a; i++){
        scanf("%s", v);
        scanf("%d", &b);
        for(j=0; j<strlen(v); j++){
            s[j] = ("%d", v[j]);
        }
        for(j=0; j<strlen(v); j++){
            if((s[j] - b) < 65){
                r[j] = ("%c", (90 - (64 - (s[j] - b))));
            }else{
                r[j] = ("%c", s[j] - b);
            }
        }
        for(j=0; j<strlen(v); j++){
            printf("%c", r[j]);
        }
        printf("\n");
    }

    return 0;
}