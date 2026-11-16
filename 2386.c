#include <stdio.h>

int main()
{
    int i, abertura_telescopio, num_estrelas, fluxo, captado, cont = 0;

    scanf("%d", &abertura_telescopio);
    scanf("%d", &num_estrelas);

    for(i = 0; i < num_estrelas; i++) {
        scanf("%d", &fluxo);

        captado = fluxo * abertura_telescopio;

        if (captado >= 40000000) {
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}