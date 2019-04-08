#ifndef FICHIER_H
#define FICHIER_H

#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h> 
#include <string.h>

typedef struct ENTITE_SECONDAIRE 
{ 
SDL_Surface* enemis[5];
SDL_Rect position;
int direction; //1 : a droite,  0: a gauche

}ENTITE_SECONDAIRE ;

void intialiser_entite(ENTITE_SECONDAIRE *entite);
void deplacement_aleatoire( ENTITE_SECONDAIRE *e,int min,int max);
void afficherennemi(ENTITE_SECONDAIRE *entite,SDL_Surface *ecran);

//void pause();

//void afficherentite(ENTITE_SECONDAIRE *entite,SDL_Surface *ecran);
#endif
