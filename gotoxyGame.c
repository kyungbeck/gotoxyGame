#include <stdio.h>

void clear();
void gotoxy(int x, int y);

int main()
{
	char input;
	int x = 5;
	int y = 5;
	clear();
	//gotoxy(5,10);
	while ( 1 ) {
		int result = scanf("%c", &input);
		if ( input == 'j' ) {
			x--;
		}
		else if ( input == 'l' ) {
			x++;
		} else if ( input == 'i') {
			y--;
		} else if ( input == 'k') {
			y++;
		}
		if ( result > 0 && input != 10) {
			//printf("result: %d %d\n", result, input) ;
			clear();
			gotoxy(x, y);
			printf("^_^");
		}
	}
}

void clear() {
	system("clear");
}

void gotoxy(int x, int y){
	printf("%c[%d;%df",0x1B,y,x);
}

