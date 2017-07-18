#include "prototypes.h"


void drawGame(void)
{

    // Remplit le renderer de noir, efface l'�cran et l'affiche.
    //SDL_RenderPresent() remplace SDL_Flip de la SDL 1.2

    SDL_SetRenderDrawColor(getrenderer(), 0, 0, 0, 255);
    SDL_RenderClear(getrenderer());
    SDL_RenderPresent(getrenderer());

    // D�lai pour laisser respirer le processeur
    SDL_Delay(1);
}


void delay(unsigned int frameLimit)
{
    // Gestion des 60 fps (images/seconde)
    unsigned int ticks = SDL_GetTicks();

    if (frameLimit < ticks)
    {
        return;
    }

    if (frameLimit > ticks + 16)
    {
        SDL_Delay(16);
    }

    else
    {
        SDL_Delay(frameLimit - ticks);
    }
}

