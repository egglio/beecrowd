#include <stdio.h>
#include <string.h>

void Verifica(int n, char historico[][101], char pesquisa[]);
 
int main() {
    int n, q;

    scanf("%d", &n);

    char historico[n][101];

    for (int i = 0 ; i < n ; i++) {
        getchar(); 
        scanf("%[^\n]", historico[i]);
    }

    scanf(" %d", &q);

    char pesquisa[101];

    for (int i = 0 ; i < q ; i++) {
        getchar(); 
        scanf("%[^\n]", pesquisa);
        
        Verifica(n, historico, pesquisa);
    }

    return 0;
}

void Verifica(int n, char historico[][101], char pesquisa[]){
    int quant = 0, maior = 0, tamanho = strlen(pesquisa);

    for (int i = 0 ; i < n ; i++) {
       
        for (int j = 0 ; j < tamanho ; j++) {
            
            if(pesquisa[j] != historico[i][j]){
                break;
            }

            if (j == tamanho - 1) {
                quant++;
                
                int teste = strlen(historico[i]);
                
                if (teste >= maior)
                    maior = teste;
            }
        }
    }

    if (quant == 0) {
        printf("-1\n");
    }

    else {
        printf("%d %d\n", quant, maior);
    }
}