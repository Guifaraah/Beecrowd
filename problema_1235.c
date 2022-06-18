#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, a, c, j=0, k=0;
    char v[101], r1[101];
    scanf("%d", &a);
    for(i=0; i<a; i++){
        fflush(stdin);
        gets(v);
        c = strlen(v);
        for(j=0; j<c/2; j++){
            r1[j] = v[((c/2)-1) - j];
        }
        for(j=(c/2); j<c; j++){
            r1[j] = v[(c-1) - k];
            k++;
        }
        r1[c] = '\0';
        k = 0;
        for(j=0; j<c; j++){
            printf("%c", r1[j]);
        }
        printf("\n");
    }
    return 0;
}