#ifndef __POSITION__
#define __POSITION__

#include "Tablette.h"

typedef enum {
	JOUEUR_1,
	JOUEUR_2
} Joueur;

typedef struct position {
	Tablette tab;
	Joueur joueur;
} Position;



int est_jeu_termine(Position *pos, Joueur *joueur_gagnant);


/* Affiche la tablette dans une fenetre MLV */
void afficher_position(Position *pos);


#endif