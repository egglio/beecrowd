#include <stdio.h>

int n;
int cam[100][100];
int ban[100][100];

void passarBolinha(int i, int j) {
    ban[i][j] = 1;

    if (j + 1 < n && cam[i][j + 1] >= cam[i][j] && !ban[i][j + 1])
        passarBolinha(i, j + 1);

    if (i + 1 < n && cam[i + 1][j] >= cam[i][j] && !ban[i + 1][j])
        passarBolinha(i + 1, j);

    if (j - 1 >= 0 && cam[i][j - 1] >= cam[i][j] && !ban[i][j - 1])
        passarBolinha(i, j - 1);

    if (i - 1 >= 0 && cam[i - 1][j] >= cam[i][j] && !ban[i - 1][j])
        passarBolinha(i - 1, j);

    return;
}

int main() {
    int i, j;
    int idx_i, idx_j;
    int temp;
    int cnt = 0;

    scanf("%d", &n);

    scanf("%d", &i);
    scanf("%d", &j);

    for (idx_i = 0; idx_i < n; idx_i++)
        for (idx_j = 0; idx_j < n; idx_j++) ban[idx_i][idx_j] = 0;

    for (idx_i = 0; idx_i < n; idx_i++)
        for (idx_j = 0; idx_j < n; idx_j++) scanf("%d", &cam[idx_i][idx_j]);

    passarBolinha(i - 1, j - 1);

    for (idx_i = 0; idx_i < n; idx_i++)
        for (idx_j = 0; idx_j < n; idx_j++) cnt += ban[idx_i][idx_j];
    printf("%d\n", cnt);
    return 0;
}