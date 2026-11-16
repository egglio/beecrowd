#include <stdio.h>

int main(){
int idx, posicao, numero, maior;
maior = 0;

for (idx=1; idx<=100; idx++){
    scanf("%d", &numero);
    if (maior < numero){
        maior = numero;
        posicao = idx;
  }
}
printf("%d\n%d\n", maior, posicao);

return 0;
}