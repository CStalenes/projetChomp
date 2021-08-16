#include <stdio.h>
#include <stdlib.h>
#include <MLV/MLV_all.h>


#include "Tablette.h"



void afficher_tablette(Tablette t) {
	int i;
	int j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			printf("%d ", t.grille[i][j]);
		}
		printf("\n");
	}
}

Tablette creer_tablette() {
	Tablette t;
	int i;
	int j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			t.grille[i][j] = 1;
		}
	}
	return t;
}


void manger(Tablette *t, int x, int y) {
	int i;
	int j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if ((i >= x) && (j >= y)) {
				(*t).grille[i][j] = 0;
			}
		}
	}
}
