#include <stdio.h>
#include <string.h>

typedef struct{
    char item[21];
} lista;

void inserir(lista *listadecompras, int tamanho);

int main ()
{
	int teste, i, j;
	lista listadecompras[1010];
	char itens[20010], *c_item;

	scanf("%d", &teste);

	while (teste--)
	{
		scanf(" %[^\n]", itens);

		i = 0;
		c_item = strtok(itens, " ");
		
        strcpy(listadecompras[i++].item, c_item);

		do {
			c_item = strtok('\0', " ");
			
            if (c_item == NULL)
				break;

			strcpy(listadecompras[i].item, c_item);

			i++;
		} while (c_item);

		inserir(listadecompras, i);

		for (j = 0; j < i; j++) {
			if (strcmp(listadecompras[j].item, listadecompras[j - 1].item) != 0) {
				if (j != 0 && j != i)
					printf(" ");

				printf("%s", listadecompras[j].item);
			}

		}

		printf("\n");
		memset(listadecompras, 0, sizeof(listadecompras));
		memset(itens, 0, sizeof(itens));

	}

}

void inserir(lista *listadecompras, int tamanho)
{

	int i = 1, j;
	lista p;

	while (i < tamanho) {
		j = i - 1;
		p = listadecompras[i];

		while (j >= 0 && strcmp(listadecompras[j].item, p.item) > 0) {
			listadecompras[j + 1] = listadecompras[j];
			j--;
		}

		listadecompras[j + 1] = p;
		i++;
	}

    return 0;
}