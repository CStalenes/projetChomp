#include <stdio.h>
#include <stdlib.h>
#include <MLV/MLV_all.h>

#include "Position.h"




int est_jeu_termine(Position *pos, Joueur *joueur_gagnant) {
	if ((*pos).tab.grille[0][0] == 0) {
		printf("	PARTIE TERMINEE !\n");
		if (pos->joueur == JOUEUR_1) {
			printf("	LE JOUEUR 1 A GAGNE\n");
		}
		else if (pos->joueur == JOUEUR_2) {
			printf("	LE JOUEUR 2 A GAGNE\n");
		}
		return 1;
	}
	else {
		return 0;
	}
}


void afficher_position(Position *pos) {
	int i;
	int j;
	int k;
	MLV_draw_filled_rectangle(50, 50, 480, 240, MLV_COLOR_BROWN);
	MLV_draw_filled_rectangle(50, 50, 30, 30, MLV_COLOR_PURPLE);
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			if ((*pos).tab.grille[i][j] == 0) {
				MLV_draw_filled_rectangle(50 + (j * 30), 50 + (i * 30), 480, 240, MLV_COLOR_BLACK);
			}
		}
	}
	for (k = 0; k <= 16; k++) {
		MLV_draw_line(50 + (k * 30), 50, 50 + (k * 30), 240 + 50, MLV_COLOR_YELLOW);
	}
	for (k = 0; k <= 8; k++) {
		MLV_draw_line(50, 50 + (k * 30), 480 + 50, 50 + (k * 30), MLV_COLOR_YELLOW);
	}
	MLV_actualise_window();
}