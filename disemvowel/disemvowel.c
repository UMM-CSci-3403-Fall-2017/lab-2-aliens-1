#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "disemvowel.h"


char* disemvowel(char* str) {
	int char_length = strlen(str);
	char* output;
	int consonantCounter = 0;
	//memory allocation Time.....pain
	//For this I just a memory allocation that was the same size as the original input, This could be done in such a way as to save space in memory by only ollocation space for the consonants
	//but I could not concieve of a way to do that without looping over the input twice...too much work.
	//So for the sake of argument. You could use the consoantCounter to define calloc instead of cha_length
	//Then ther would need to be another variable that served the same purpose as consonantCounter in order to determine the location to place consonants in the output.  
	output = (char*) calloc(char_length + 1, sizeof(char));
	//loops over the character array that is the input string. Checks every letter to see if it was a vowel. 
	//This is long and gross to read, should consider turning it into a helper function.
	//Glad I foound toupper or this would be twice as long
	for (int i = 0; i < char_length; i++){
		if(toupper(str[i]) == 'A' || toupper(str[i]) == 'E' || toupper(str[i]) == 'I' || toupper(str[i]) == 'O' || toupper(str[i]) == 'U') {
		//do nothing here because the current place in character array of string contains a vowel.
		} else {
		//if the compared character does not match a vowel then it is placed into the next position of output. and then consonantCounter is incremented by one. 
		//The incrementing of consonantCounter is done to move to the next position of the character array output
		output[consonantCounter] = str[i];
		consonantCounter++;
		}


	}

	output[consonantCounter] = '\0';
	return output;
}
