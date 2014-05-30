#include <stdio.h>

void clear();
void gotoxy(int x, int y);

int main()
{
	char input;
	int x = 5;
	clear();
	//gotoxy(5,10);
	while ( 1 ) {
		int result = scanf("%c", &input);
		if ( input == 'j' ) {
			x--;
		}
		else if ( input == 'l' ) {
			x++;
		}
		if ( result > 0 && input != 10) {
			//printf("result: %d %d\n", result, input) ;
			clear();
			gotoxy(x, 10);
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

