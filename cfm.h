/*
 * About this file's copyright: LENGTH macro comes from
 *   the dwm of suckless. (https://dwm.suckless.org)
 *   Arg and Key struct comes form
 *   the dwm of suckless. (https://dwm.suckless.org)
 * I am a beginner in C language :(. <The code is terrible>
 */

#ifndef _CFM_H
#define _CFM_H

#include <stdio.h>
#include <stdlib.h>

#define LENGTH(X) (sizeof X / sizeof X[0])

typedef union {
	int i;
	unsigned int ui;
	float f;
	const void *v;
} Arg;

typedef struct {
	int keysym;
	void (*func)(const Arg *arg);
	const Arg arg;
} Key;

/* cursor object struct */
typedef struct {
	unsigned int x, y, y_offset; /* Y is current selection file */
	unsigned int sel_panel;
	unsigned int sel_num;
} Cursor;

void cursor_move(const Arg *move_direction);
void handler();
void keypress(int keysym);
void quit(const Arg *arg);
void run();
void sel_is_button();

#endif
