#include <stdio.h>
#include <stdlib.h>
#define MAXN 100000

int n, a[MAXN];

int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a); // Inverse pour un tri décroissant
}

void solve() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    qsort(a + 1, n, sizeof(int), compare); // Trie le tableau
    printf("%d\n", a[(n + 1) / 2]); // Affiche l'élément central
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
