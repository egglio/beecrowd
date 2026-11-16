#include <ctype.h>
#include <stdio.h>
#include <string.h>

char listwords[1000][1000];
int wordcount;

void s_to_words(char* s);
void qsort(char* v[], int left, int right);
void bubbleSort(char* v[]);

int main() {
    int n, k;
    char string[2600], ntext[5];
    char* listpoints[1000];
    char* temp;

    fgets(ntext, sizeof(ntext), stdin);
    n = atoi(ntext);

    for (k = 0; k <= n; k++) {
        fgets(string, sizeof(string), stdin);
        s_to_words(string);

        for (int i = 0; i < wordcount; i++) {
            listpoints[i] = listwords[i];
        }

        bubbleSort(listpoints);

        for (int i = 0; i < wordcount; i++) {
            if (i == wordcount - 1) {
                printf("%s\n", listpoints[i]);
            } else {
                printf("%s ", listpoints[i]);
            }
        }
    }

    return 0;
}

void s_to_words(char* s) {
    wordcount = 0;
    int counter;

    while (*s != '\0') {
        if (isalnum(*s)) {
            counter = 0;
            while (isalnum(*s)) listwords[wordcount][counter++] = *s++;
            listwords[wordcount][counter] = '\0';
            wordcount++;
        } else {
            while (!isalnum(*s) && *s != '\0') s++;
        }
    }
}

void swap(char* v[], int i, int j) {
    char* temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void bubbleSort(char* v[]) {
    int j, i;
    for (j = 0; j < wordcount; j++) {
        for (i = 0; i < wordcount - 1; i++) {
            if (strlen(v[i + 1]) > strlen(v[i])) {
                swap(v, i, i + 1);
            }
        }
    }
}
