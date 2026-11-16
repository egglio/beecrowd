#include <stdio.h>
#include <stdlib.h>

int even(long);

int main() {
    long long int* sit;
    long long int* atck;
    long long int sit_n, pos, i, temp, atck_ct, next, rmn;

    scanf("%lld", &sit_n);

    sit = malloc(sizeof(long long int) * sit_n + 1);
    atck = malloc(sizeof(long long int) * sit_n + 1);

    for (i = 1; i <= sit_n; i++) {
        scanf("%lld", &temp);
        sit[i] = temp;
        atck[i] = 0;
    }

    for (next = 1, atck_ct = 0;
         (pos = next) <= sit_n && pos > 0 && sit[pos] > 0;) {
        next = even(sit[pos]) ? pos - 1 : pos + 1;
        sit[pos] -= 1;
        atck_ct = (atck[pos]++) ? (atck_ct) : (atck_ct + 1);
    }

    for (i = 1, rmn = 0; i <= sit_n; i++) rmn += sit[i];

    printf("%lld %lld\n", atck_ct, rmn);

    return 0;
}

int even(long n) { return (n % 2) ? 0 : 1; }