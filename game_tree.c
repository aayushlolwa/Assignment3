/*
 *	Game Tree ADT Implementation
 *	Author: <<YOUR STUDENT IDs AND NAMES HERE>>
 *	Version: September 2021
 *	
 *	This file holds the game_tree ADT which is a
 *	general game tree.  The game_tree is built using
 *	t_node ADTs.  A game_tree variable consists of a
 *	"root" field which refers to a t_node variable
 *	which has a "data" field and "child" and
 *	"sibling" references, and a "level" value.
 *	
 *	YOU NEED TO MAKE CHANGES TO THIS FILE!
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "t_node.h"
#include "game_state.h"
#include "game_tree.h"
#include "assig_three221.h"

// types
struct game_tree_int
{
	t_node root; // the node at the top of the tree
};

// global variable
int thought = 0; // to show 'thinking' -- i.e. that the program hasn't crashed

/*
	*	init_game_tree
	*	initialiser function.
	*	Pre-condition: none
	*	Post-condition: if the parameter value (e) is true then the 
	*					game_tree variable's "root" field is set to NULL
	*					otherwise the game_tree variable's "root" field
	*					refers to a new t_node variable containing the
	*					parameter value (o) of level with parameter 
	*					value (l) with a NULL child, and a NULL sibling
	*	Informally: creates either an empty tree or a leaf node as
	*				required
*/
void init_game_tree(game_tree *tp, bool e, void *o, int l)
{
	trace("game_tree: initialiser starts");

	*tp = (game_tree)malloc(sizeof(struct game_tree_int));
	if (e)
	{
		(*tp)->root = NULL;
	}
	else
	{
		init_t_node(&((*tp)->root), o, l);
	}

	trace("game_tree: initialiser ends");
}

/*
	*	is_empty_game_tree
	*	Emptiness test.
	*	Pre-condition: the game_tree variable is defined and valid
	*	Post-condition: true is returned if the game_tree variable is
	*					empty, false is returned otherwise
	*	Informally: indicate if the game_tree contains no nodes
	*
	*	return boolean whether or not the game tree is empty
*/
bool is_empty_game_tree(game_tree t)
{
	// COMPLETE ME !
}

/**
	*	get_data
	*	Get function for "root" instance variable's data value.
	*	Pre-condition: the game_tree variable is defined and valid
	*	Post-condition: the value of the game_tree variable's data
	*					field is returned
	*	Informally: return the value within the root node
	*
	*	return void * the data item of the root node
*/
void *get_data(game_tree t)
{
	trace("get_data: get_data starts");

	if (is_empty_game_tree(t))
	{
		fprintf(stderr, "get_data: empty game tree");
		exit(1);
	}

	trace("get_data: get_data ends");
	return get_t_node_data(t->root);
}

/*
	*	get_level
	*	Get function for "root" instance variable's level value.
	*	Pre-condition: the game_tree variable is defined and valid
	*	Post-condition: the value of the game_tree variable's data
	*					field's level is returned
	*	Informally: return the level value within the root node
	*
	*	return int the level number of the root node
*/
int get_level(game_tree t)
{
	// COMPLETE ME !
}

/*
*	get_child
*	Get function for "root" instance variable's child value.
*	Pre - condition: the game_tree variable is defined and valid
*	Post - condition : the value of the game_tree variable's child
*					field is returned in a newly
*					constructed game_tree variable
*	Informally : return the game_tree variable's child
*
*	return game_tree the eldest child of the current node
*/
game_tree get_child(game_tree t)
{
	game_tree c;

	trace("get_child: get_child starts");

	if (is_empty_game_tree(t))
	{
		fprintf(stderr, "get_child: empty game tree");
		exit(1);
	}

	init_game_tree(&c, true, NULL, -1);
	c->root = get_t_node_child(t->root);

	trace("get_child: get_child ends");
	return c;
}

/*
	* 	get_sibling
	*	Get function for "root" instance variable's sibling value.
	*	Pre-condition: the game_tree variable is defined and valid
	*	Post-condition: the value of the game_tree variable's sibling
	*					field is returned in a newly constructed 
	*					game_tree variable
	*	Informally: return the game_tree variable's sibling
	*
	*	return game_tree the next sibling of the current node
*/
game_tree get_sibling(game_tree t)
{
	// COMPLETE ME !
}

/*
	*	set_data
	*	Set function for "root" instance variable's data field.
	*	Pre-condition: the game_tree variable is defined and valid
	*	Post-condition: the t_node variable's data field is altered to
	*					hold the given (o) value
	*	Informally: store the given value in the root node of the
	*				game_tree variable
	*
	*	param o void * to install as data for root node
*/
void set_data(game_tree t, void *o)
{
	trace("set_data: set_data starts");

	if (is_empty_game_tree(t))
	{
		fprintf(stderr, "set_data: empty game tree");
		exit(1);
	}

	set_t_node_data(t->root, o);

	trace("set_data: set_data ends");
}

/*
	*	set_level
	*	Set function for "root" instance variable's level field.
	*	Pre-condition: the game_tree variable is defined and valid
	*	Post-condition: the t_node variable's level field is altered
	*					to hold the given (l) value
	*	Informally: assign the given value as the level of the
	*				game_tree variable
	*
	*	param l level number for root of current game tree
*/
void set_level(game_tree t, int l)
{
	// COMPLETE ME !
}

/*
	*	set_child
	*	Set function for "root" instance variable's child field.
	*	Pre-condition: the game_tree variable is defined and valid
	*	Post-condition: the t_node variable's child field is altered
	*					to hold the given (c) value
	*	Informally: assign the given value as the child of the
	*				game_tree variable
	*
	*	param c game_tree to be set as eldest child of current game tree
*/
void set_child(game_tree t, game_tree c)
{
	// COMPLETE ME !
}

/*
	*	set_sibling
	*	Set function for "root" instance variable's sibling field.
	*	Pre-condition: the game_tree variable is defined and valid
	*	Post-condition: the t_node variable's sibling field is altered
	*					to hold the given (s) value
	*	Informally: assign the given value as the sibling of the
	*				game_tree variable
	*
	*	param s game_tree to be set as next sibling of current game tree
*/
void set_sibling(game_tree t, game_tree s)
{
	// COMPLETE ME !
}

/*
*	generate_levelBF
*	Generate the next level of the tree in a breadth-first manner
*	Pre-condition: the given tree is defined, the given queue
*				   is defined
*	Post-condition: an additional level of possible moves has
*					been added to the given game tree and each
*					tree node of the new level also has been
*					added to the queue.
*	Informally: generate the next level of the game tree
*
*	param q Queue of reachable but unexpanded game trees
*/
void generate_levelBF(game_tree t, queue q)
{
	// COMPLETE ME !}
}
/*
*	build_gameBF
*	Generate the game tree in a breadth-first manner
*	Pre-condition: the given queue and game tree are defined, and
*				   the given int value represents the desired depth
*				   of the tree
*	Post-condition: If the given tree isn't already deep enough, an
*					additional level of possible moves is added to
*					the given game tree and each tree node of the
*					new level also is added to the queue.
*					Finally, the next tree is determined by removing
*					the front of the queue and the process continues
*					until the queue is empty
*	Informally: generate the game tree from the current point
*				in a breadth-first manner until it is "d" levels
*				deep
*
*	param q Queue of reachable but unexpanded game trees
*	param d desired depth (number of queens) that game tree should be built to
*	return	the game tree with the first found solution, or an empty game
*			tree if there is no solution
*/
game_tree build_gameBF(game_tree t, queue q, int d)
{
	// COMPLETE ME !
}

/*
*	generate_levelDF
*	Generate the next level of the tree in a depth-first manner
*	Pre-condition: the given tree is defined, the given stack
*				   is defined
*	Post-condition: an additional level of possible moves has
*					been added to the given game tree and each
*					tree node of the new level also has been
*					added to the stack.
*	Informally: generate the next level of the game tree
*
*	param q Stack of reachable but unexpanded game trees
*/
void generate_levelDF(game_tree t, stack s)
{
	// COMPLETE ME !}
}
/*
*	build_gameDF
*	Generate the game tree in a depth-first manner
*	Pre-condition: the given stack and game tree are defined, and
*				   the given int value represents the desired depth
*				   of the tree
*	Post-condition: If the given tree isn't already deep enough, an
*					additional level of possible moves is added to
*					the given game tree and each tree node of the
*					new level also is pushed onto the stack.
*					Finally, the next tree is determined by removing
*					the top of the stack and the process continues
*					until the stack is empty
*	Informally: generate the game tree from the current point
*				in a depth-first manner until it is "d" levels
*				deep
*
*	param s Stack of reachable but unexpanded game trees
*	param d desired depth (number of queens) that game tree should be built to
*	return	the game tree with the first found solution, or an empty game
*			tree if there is no solution
*/
game_tree build_gameDF(game_tree t, stack s, int d)
{
	// COMPLETE ME !
}

/*
	*	to_string_game_tree
	*	String conversion for tree
	*	Pre-condition: none
	*	Post-condition: a string variable is returned consisting of the
	*				string representation of all items in the game_tree,
	*				from top to bottom in depth-first order, separated by
	*				" " and contained within "<" and ">"
	*	Informally: produce a string representation of the game tree
	*
	*	return (char *) printable contents of game tree
*/
char *to_string_game_tree(game_tree t)
{
	game_tree c;
	char *s;

	trace("to_string_game_tree: to_string_game_tree starts");

	if (is_empty_game_tree(t))
	{
		trace("to_string_game_tree: to_string_game_tree ends");
		return "<>";
	}
	else
	{
		s = (char *)malloc(200 * 5 * sizeof(char));

		sprintf(s, "%s (%d,%d) ", s, get_row(get_data(t)), get_column(get_data(t)));
		c = get_child(t);
		if (!is_empty_game_tree(c))
		{
			sprintf(s, "%s %s ", s, to_string_game_tree(c));
		}
		c = get_sibling(t);
		if (!is_empty_game_tree(c))
		{
			sprintf(s, "%s %s ", s, to_string_game_tree(c));
		}
	}

	trace("to_string_game_tree: to_string_game_tree ends");
	return s;
}
