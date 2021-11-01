//
// Created by PINGHUA LIU on 2021-10-31.
//

#include <stdio.h>
#include <stdlib.h>

void combinations (int v[], int start, int n, int k, int maxk) {
    int i;
    if (k > maxk) {
        for (i=1; i<=maxk; i++) printf ("%i ", v[i]);
        printf ("\n");
        return;
    }

    for (i=start; i<=n; i++) {
        v[k] = i;
        combinations (v, i+1, n, k+1, maxk);
    }
}

int main (int argc, char *argv[]) {
    int v[100], n, k;
    combinations (v, 1, 10, 1, 5);
    exit (0);
}