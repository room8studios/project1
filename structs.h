#ifndef DEF_STRUCTS
#define DEF_STRUCTS

#include "defs.h"

/* Structures qui seront utilis�es pour g�rer le jeu */

// Structure pour g�rer l'input (clavier puis joystick)
typedef struct Input
{

    int left, right, up, down, jump, attack, enter, erase, pause;

} Input;

#endif

