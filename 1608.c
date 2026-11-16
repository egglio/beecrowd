#include <stdio.h>

int main() 
{
    int testes, dinheiro, qtd_ingredientes, tipos_bolo, preco, qtd_por_bolo, quantos, precisa = 0;
    int ingredientes[101], bolo[101], bolo_espelho[101];
    int i, j, k, l, idx, cont = 0, a;
    scanf("%d", &testes);

    for (i = 0; i < testes; i++) {
        scanf("%d %d %d", &dinheiro, &qtd_ingredientes, &tipos_bolo);
        for (j = 0; j < qtd_ingredientes; j++) {
            scanf("%d", &preco);
            ingredientes[i] = preco;
        }

        for (k = 0; k < 101; k++) {
            bolo[k] = 0;
        }

        for (k = 0; k < tipos_bolo; k++) {
            scanf("%d", &qtd_por_bolo);

            for (l = 0; l < qtd_por_bolo; l++) {
                scanf("%d %d", &idx, &quantos);
                
                if (quantos > 0)
                    precisa += (ingredientes[idx] * quantos);
            }

            if (precisa < dinheiro) {
                a = dinheiro/precisa;
                bolo[k] += a;
            }

            precisa = 0;
        }

        for (k = 0; k < tipos_bolo; k++) {
            if (bolo[k] > cont)
                cont = bolo[k];
        }

        printf("%d\n", cont);
        cont = 0;
    }

    return 0;
}