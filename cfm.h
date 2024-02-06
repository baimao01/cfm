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
typedef struct Cursor {
	int x, y;
	int sel_num;
} Cursor;

void cursor_move(const Arg *move_direction);
void handler();
void keypress(int keysym);
void quit(const Arg *arg);
void run();
void sel_is_button();

#endif
