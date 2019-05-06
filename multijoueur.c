#include "partage.h"


void afficher_background(backgr *bg)
{
bg->pos.x=0;
bg->pos.y=0;
image=IMG_Load("boch.png");
SDL_BlitSurface(image,NULL,ecran,&bg->pos);
}

void afficher_background1(backgr *bg1)
{
bg1->pos.x=0;
bg1->pos.y=261;
image=IMG_Load("boch.png");
SDL_BlitSurface(image,NULL,ecran,&bg1->pos);
}
void afficher_perso(perso *p)
{
p->posper.x=10;
p->posper.y=70;
image=IMG_Load("perso.png");
SDL_BlitSurface(image,NULL,ecran,&p->posper);
}

void afficher_perso1(perso *p1)
{
p1->posper.x=10;
p1->posper.y=320;
image=IMG_Load("perso1.png");
SDL_BlitSurface(image,NULL,ecran,&p1->posper);
}

int main(int argc, char *argv[])
{
SDL_Init(SDL_INIT_EVERYTHING);
ecran=SDL_SetVideoMode(900,522,32,SDL_HWSURFACE|SDL_RESIZABLE);
backgr bg;
backgr bg1;
perso p;
perso p1;
afficher_background(&bg);
afficher_background1(&bg1);
afficher_perso(&p);
afficher_perso1(&p1);
SDL_Flip(ecran);
pause();
}
