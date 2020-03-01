#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>

int main (void)
{

    WINDOW *ablak;
    ablak = initscr ();
    
float x = 0;
float xp = 0;

float y = 0;
float yp = 0;

float mx,my;

getmaxyx(ablak,my,mx);

nodelay (ablak, true);

mx =  mx*2;
my = my*2;


    for (;;)	
	{
        	x = (x - 1) % mx;
        	xp = (xp + 1) % mx;
    		y = (y - 1) % my;
        	yp = (yp + 1) % my;
    clear();

    mvprintw(abs((y+(my-yp)) / 2),abs((x+(mx-xp)) / 2), "0");
    refresh();
    usleep(10000);
    
  	}
    return 0;
}

