#include <stdio.h>
#include <stdlib.h>
#include <MLV/MLV_all.h>

#include "Coup.h"



int est_legal(Position *pos, Coup *coup) {
	if ((*pos).tab.grille[(*coup).y][(*coup).x] == 1) {
		return 1;
	}
	else {
		return 0;
	}
}


void jouer_coup(Position *pos, Coup *coup) {
	if (est_legal(pos, coup) == 0) {
		printf("CASE NON VALIDE\n");
	}
	else if (est_legal(pos, coup) == 1) {
		manger(&(pos->tab), coup->y, coup->x);
		printf("----------\n");
		afficher_tablette(pos->tab);
		if (pos->joueur == JOUEUR_1) {
			pos->joueur = JOUEUR_2;
		}
		else if (pos->joueur == JOUEUR_2) {
			pos->joueur = JOUEUR_1;
		}
	}
}

Coup lire_coup(Position *pos) {
	Coup tmp;
	int x;
	int y;
	int convert_x;
	int convert_y;
	MLV_wait_mouse(&x, &y);
	while ((x < 50) || (x > 530) || (y < 50) || (y > 290)) {
		MLV_wait_mouse(&x, &y);
	}
	convert_x = (x - 50)/30;
	convert_y = (y - 50)/30;
	printf("Y = %d\nX = %d\n\n", convert_x, convert_y);
	tmp.x = convert_x;
	tmp.y = convert_y;
	return tmp;
}