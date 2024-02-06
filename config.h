#include "cfm.h"
/*
 * Custom config file.
 *
 * Cfm has no config file.
 * You can use this file to custom your cfm.
 */
static const int show_number = 1;
static const int show_file_size = 1;
static const int show_border = 0;

static const Key keys[] = {
	/*
	 * cursor_move:
	 *   up:    0
	 *   down:  1
	 *   left:  2
	 *   right: 3
	 */
	{ 113, quit, {0} },
	{ 102, cursor_move, {0} }
};
