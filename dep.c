#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>


#include "objet1"
#include "vie.h"

void objectmove(Object* objet1, Chars* perso, int xscroll, int yscroll, Map* m, Sprites* S)
{
    int i;
    SDL_Rect position[50];

    for (i=1; i<=objet1->nb_objet; i++){
        position[i].x = objet1->position[i].x - xscroll;
        position[i].y = objet1->position[i].y - yscroll;
        position[i].w = Size_Sprite;
        position[i].h = Size_Sprite;
    }

   for (i=1; i<=objet1->nb_objet; i++){ //On passe une fois par objet
       if (objet1->used[i]==0){
            if((position[i].x >= perso->position.x -xscroll + perso->position.w) 
            || (position[i].x + position[i].w <= perso->position.x -xscroll)
            || (position[i].y >= perso->position.y -yscroll + perso->position.h)
            || (position[i].y + position[i].h <= perso->position.y - yscroll)
            ){}
            else{
                audio_play(5);
                if(perso->lvl==1){
                    perso->position.w = 32;
                    perso->position.h = 60;
                    perso->position.y -=20;
                    perso->vie--;
                }
                objet1->used[i]=1;
            }
       }
   }

}
