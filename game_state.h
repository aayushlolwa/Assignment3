/*
*	Game State
*	Author: J.R.Dermoudy
*	Version: September 2021
*
*	This file holds the specification of the game_state.
*
*	This file is complete.
*/

#ifndef _GAME_STATE
#define _GAME_STATE

#include <stdbool.h>
#include "square_state.h"

struct game_state_int;
typedef struct game_state_int *game_state;

void init_game_state(game_state *gp);
square_state get_square(game_state g, int r, int c);
void set_square(game_state g, square_state s);
bool valid(game_state g, int r, int c);
bool row_clear(game_state g, int r);
bool column_clear(game_state g, int c);
bool diagonals_clear(game_state g, int r, int c);
bool clash(game_state g, int r, int c);
bool taken(game_state g, int r, int c);
void land(game_state g, int r, int c);
game_state clone(game_state g);
void show_game_state(game_state g);

#endif