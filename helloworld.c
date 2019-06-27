#include <ncurses.h>

int main()
{
	initscr();
	addstr("hello, world.\n");
	addstr("--from ncurses.");
	move(33,33);
	attrset(A_BOLD);
	addstr("HAHA...\n");
	napms(300);
	refresh();
	attrset(A_BLINK);
	addstr("HAHA...\n");
	napms(300);
	refresh();
	attrset(A_REVERSE);
	addstr("HAHA...\n");
	napms(300);
	addstr("press q to exit ... \n");
	refresh();
	
	noecho();
	while(getch()!='q') 
		;		

	endwin();
	return 0;
}

