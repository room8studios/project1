#include "structs.h"

#ifndef PROTOTYPES
#define PROTOTYPES

#include "structs.h"

/* Catalogue des prototypes des fonctions utilisées.
   On le complétera au fur et à mesure. */

extern void cleanup(void);
extern void delay(unsigned int frameLimit);
extern void drawGame(void);
extern void gestionInputs(Input *input);
extern void getInput(Input *input);
extern SDL_Renderer *getrenderer(void);
extern void init(char *);


#endif

