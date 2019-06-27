#include <ncurses.h>

int main()
{
	initscr();
	start_color();
	init_pair(1,COLOR_YELLOW,COLOR_RED);
	attrset(A_BLINK|A_BOLD|COLOR_PAIR(1));
	move(3,3);
	addstr("color text.");
	refresh();
	attrset(A_BOLD);
	printw("\ncolos: %d, color pair: %d\n",COLORS,COLOR_PAIRS);
	addstr("\n\npress any key...");
	getch();
	init_pair(2,COLOR_WHITE,COLOR_BLUE);
	//bkgd(COLOR_PAIR(2));
	bkgd(COLOR_PAIR(2)|'.');
	//bkgd('.');
	addstr("\nso, screen color is changed.\npress any key...");
	refresh();
	getch();
	endwin();
	return 0;
}

