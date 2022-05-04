#include <stdio.h>
#include <unistd.h>

int main(){
	char startLetter = 'A';
	for(startLetter; startLetter; startLetter++){
			printf("%c ", startLetter); 
		}
	
	return 0;
}
