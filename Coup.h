#ifndef __COUP__
#define __COUP__

#include "Tablette.h"
#include "Position.h"



typedef struct coup {
	int x;
	int y;
} Coup;


int est_legal(Position *pos, Coup *coup);


void jouer_coup(Position *pos, Coup *coup);


Coup lire_coup(Position *pos);


#endif