#ifndef COLL_H_INCLUDED
#define COLL_H_INCLUDED

#include <SDL/SDL.h>


SDL_Color GetPixel(SDL_Surface *surface,int x,int y);

int collisionmap (int direction,SDL_Rect col,SDL_Surface *collisionMap,SDL_Surface *ecran);

#endif
