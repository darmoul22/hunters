#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "coll.h"

SDL_Color GetPixel(SDL_Surface *surface,int x,int y){

    SDL_Color color;
    Uint32 col = 0;

    //determine position
    char* pPosition = (char*) surface->pixels;

    //offset by y
    pPosition += surface->pitch * y;

    
    //offset by x
    pPosition += (surface->format->BytesPerPixel * x);


    //copy pixel data
    memcpy(&col, pPosition, surface->format->BytesPerPixel);


    //convert color
    SDL_GetRGB(col,surface->format,&color.r,&color.g,&color.b);

    return color;
}


int collisionmap (int direction,SDL_Rect col,SDL_Surface *collisionMap,SDL_Surface *ecran)
{
	if (collisionMap == NULL) 
	collisionMap = SDL_LoadBMP("forest1.png");
    SDL_Color color;
    int i;
    if (direction == 3)
    {
	for(i=(col.y+80);i<(col.y + 100);i++)
{
	color = GetPixel(collisionMap, col.x, i);
	if((color.r == 0 && color.g == 0 && color.b == 0) )
	break;
        else if((color.r == 255 && color.g == 255 && color.b == 255) )
	break ;
}
    }
    else if (direction == 4)
    {
	for(i=(col.y+80);i<(col.y + 100);i++)
{
       color = GetPixel(collisionMap, col.x + 25 + 10, i);
	if((color.r == 0 && color.g ==0  && color.b ==0 ) )
	break;
else if((color.r == 255 && color.g == 255 && color.b == 255) )
	break ;
}
    }
    else if (direction == 1)
    {
for(i=col.x + 10;i<(col.x + 25);i++)
{
        color = GetPixel(collisionMap, i, col.y - 10 + 80);
	if((color.r == 0 && color.g == 0 && color.b == 0) )
	break;
else if((color.r == 255 && color.g == 255 && color.b == 255) )
	break ;
}
    }
    else if (direction == 2)
    {
for(i=col.x + 10;i<(col.x + 25);i++)
{
        color = GetPixel(collisionMap, i, col.y + 100 + 10);
	if((color.r == 0 && color.g == 0 && color.b == 0) )
	break;
else if((color.r == 255 && color.g == 255 && color.b == 255) )
	break ;
}
    }
    
	if ((color.r == 0 && color.g == 0 && color.b == 0) )
return 1 ;
else if((color.r == 255 && color.g == 255 && color.b == 255) )
	return 2 ;
else return 0 ;

}
