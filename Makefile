all:
	gcc -o gotoxyGame gotoxyGame.c
run:
	./gotoxyGame
clean:
	rm -rf ./*.obj gotoxyGame
