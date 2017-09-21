#include <stdlib.h>
#include "disemvowel.h"

char* disemvowel(char* str) {
	char* output = malloc(sizeof(str));
	char_length = sizeof(str);
	for (int i = 0; i < char_length; i++) {
//This is long and disgusting, consider turning into a helper function
		if(toupper(str[i]) == "A" || toupper(str[i]) == "E" || toupper(str[i]) == "I" || toupper(str[i]) == "O" || toupper(str[i]) == "U") {
	        //Do nothing here, If the string at that point is equal to one of the vowels, I dont want it to output the vowel.  
		}	
		else
	       	{ 
			output[i] = str[i];
		}

			
	}
  return ("The disemvoweled word is" + output);
  free(output);
  return (char*) "";
}
