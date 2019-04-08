#include "fichier.h"

 void deplacement_aleatoire(ENTITE_SECONDAIRE *entite,int min,int max)
{       
	 
               
               if (entite->position.x >= max )
		entite->direction = 0;
		
	if ( entite->position.x <= min )
		entite->direction = 1;
		
	if ( entite->direction == 1)
		entite->position.x += 5;
	if (entite->direction == 0)
		entite->position.x -= 5;
               	

} 
