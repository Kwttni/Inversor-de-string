#include <stdio.h>
#include <string.h>

void inverte(char *string) {
    int i, j;
    char inversa;

      for(i = 0, j = strlen(string)-1; i < j; i++, j--) {   
        inversa = string[i];
        string[i] = string[j];
        string[j] = inversa;}
}
int main(){
    char palavra[10];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    inverte(palavra);
    printf("%s", palavra);
    return 0;
}