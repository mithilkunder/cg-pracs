#include <stdio.h>
#include<conio.h>


void printCharacter(char character);

int main() {
    char character = 'A'; // You can change this to any character
    clrscr();
    printCharacter(character);
    getch();
    return 0;
}

// Function to print character using bitmap
void printCharacter(char character) {
    // Bitmap for 'A' in a 5x7 grid (1 means filled, 0 means empty)
      int i,j;
      int bitmap[7][5] = {
	{0, 1, 1, 1, 0},
	{1, 0, 0, 0, 1},
	{1, 0, 0, 0, 1},
	{1, 0, 0, 0, 1},
	{1, 1, 1, 1, 1},
	{1, 0, 0, 0, 1},
	{1, 0, 0, 0, 1}
    };

    printf("Character: %c\n", character);

    // Print the bitmap
    for (i = 0; i < 7; i++) {
	for (j = 0; j < 5; j++) {
	    if (bitmap[i][j] == 1) {
		printf("1"); // Filled pixel
	    } else {
		printf(" "); // Empty pixel
	    }
	}
	printf("\n");
    }
}