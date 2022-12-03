#include <stdio.h>
int main(){
	char character;
	printf("Enter the Character to convert to ASCII:");
	scanf("%c", &character);

	printf(" The ASCII value for the character %c is :%d \n" ,character ,character);
	return 0;
}
