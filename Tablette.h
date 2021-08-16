#ifndef __TABLETTE__
#define __TABLETTE__


#define N 8
#define M 16

typedef struct tablette{
	int grille[N][M];
} Tablette;

void afficher_tablette(Tablette t);

/* Renvoie une tablette initialisee avec toutes les cases egales a 1 */
Tablette creer_tablette();

/* Prend un couple d'entiers (x, y) en arguments, remplace toutes les valeurs de
 * tab->grille[i][j] avec x >= i et y >= j par 0 */
void manger(Tablette *t, int x, int y);


#endif