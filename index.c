#include <stdio.h>

int main()
{
    float a, b, media;
    scanf("%f%f", &a, &b);
    media = (a + b)/2;
    if (media >= 5){
    printf("%f = aprovado", media);
    } else {
        printf("%f = reprovado", media);
    }
    return 0;
}
