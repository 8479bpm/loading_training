blah.c:
	echo "int main() { return 0; }" > blah.c # Run first

blah.o: blah.c
	gcc -c blah.c -o blah.o # Run second

blah: blah.o
	gcc blah.o -o  blah # Run third
