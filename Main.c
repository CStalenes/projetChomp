#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <MLV/MLV_all.h>
#define N 8
#define M 16
#define TAILLE_X 580
#define TAILLE_Y 340

#include "Tablette.h"
#include "Position.h"
#include "Coup.h"




int main(int argc, char* argv[]) {
	Tablette t;
	Position pos;
	Coup c;
	Joueur joueur;

	t = creer_tablette();
	pos.tab = t;
	pos.joueur = JOUEUR_1;

	MLV_create_window("Chomp", NULL, TAILLE_X, TAILLE_Y);
	afficher_position(&pos);
	afficher_tablette(t);
	printf("\n");
	while (est_jeu_termine(&pos, &joueur) == 0) {
		if (pos.joueur == JOUEUR_1) {
			printf("	TOUR:	Joueur 1\n");
		}
		else if (pos.joueur == JOUEUR_2) {
			printf("	TOUR:	Joueur 2\n");
		}
		c = lire_coup(&pos);
		jouer_coup(&pos, &c);
		printf("\n");
		afficher_position(&pos);
	}
	MLV_wait_seconds(1);
	MLV_free_window();
	
	return 0;
}