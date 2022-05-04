#include <stdio.h>
#include <unistd.h>

//this block is for printing it out once
int main(){
	char startLetter = 'A';
	for(startLetter; startLetter; startLetter++){
			printf("%c ", startLetter); 
		}
	
	return 0;
}

//and this one will COMPLETELY GAME END YOUR COMPUTER
int main(){
	char startLetter = 'A';
	for(startLetter; startLetter == startLetter; startLetter++){
			printf("%c ", startLetter); 
		}
	
	return 0;
}
