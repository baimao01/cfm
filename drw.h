/*
 * UI layer handle
 */

typedef struct Menu Menu;
struct Menu {
	int maxw, maxh, minw, minh; /* max and min size */
	int x, y, w, h;
};

void menu_create();
