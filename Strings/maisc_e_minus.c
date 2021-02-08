#include <stdio.h>
#include <ctype.h>

int main(){
    char caractere = '0';
    scanf("%c", &caractere);

    if(caractere >= 'A' && caractere <= 'Z')
        printf("%c", tolower(caractere));
    else if(caractere >= 'a' && caractere <= 'z')
        printf("%c", toupper(caractere));
    else
        printf("%c", caractere);
}