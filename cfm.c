#include "cfm.h"
#include "config.h"
#include "drw.h"
#include "util.h"

enum { KeyPress }; /* user events */
enum { ButtonPress }; /* ui events */
enum { MoveUp, MoveDown, MoveLeft, MoveRight }; /* move direction */

unsigned int event;

static Cursor cursor;
static int running = 1;

void cursor_move(const Arg *move_direction)
{
	/* handle move direction */
	switch (move_direction->i) {
		case MoveUp:
			break;
		case MoveDown:
			break;
		case MoveLeft:
			break;
		case MoveRight:
			break;
	}
}

/*
 * handle all keypress event
 */
void keypress(int keysym)
{
	unsigned int i;
	for (i = 0; i < LENGTH(keys); i++)
		if (keysym == keys[i].keysym && keys[i].func)
			keys[i].func(&keys[i].arg);
}

/*
 * Auto get event and handle event.
 */
void handler()
{
	int keysym = getch();
	printf("%d\n", keysym);
	if (keysym) {
		event = KeyPress;
	}

	switch (event) {
		case KeyPress:
			keypress(keysym);
			break;
	}
}

/*
 * Close main loop.
 */
void quit(const Arg *arg)
{
	running = 0;
}

/*
 * Program main loop.
 */
void run()
{
	while (running)
		handler();
}

int main(int argc, char *argv[])
{
	run();
}

// vim: noexpandtab
