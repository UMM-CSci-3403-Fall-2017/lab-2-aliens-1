#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "palindrome.h"

char* str_reverse(char* str) {
  int len, i;
  char* result;
  //get the length of the string

  len = strlen(str);
  //allocate space for the result
  //loop the the input and return the word in reverse
  result = (char*) calloc(len+1, sizeof(char));
  for (i=0; i<len; ++i) {
    result[i] = str[len-i-1];
  }
  result[len] = '\0';
  
  return result;
}

char* palindrome(char* str) {
  char *rev;
  int i;
  bool result = true;
  char *answer;
	// reverse the input string
  rev = str_reverse(str);
  i = 0;
	//loop through the string and the reverse string
	//check each haracter to see if they match 
	//if they dont return false else true.
  while (result && str[i]) {
    if (str[i] != rev[i]) {
      result = false;
    }
    ++i;
  } 
  //free up reverse string
free(rev);		
  if (result) {
	  //if the result is a palindrome set answer to yes
    answer = (char*) calloc(4, sizeof(char));
    answer[0] = 'Y';
    answer[1] = 'e';
    answer[2] = 's';
    answer[3] = '\0';
    //else set answer to no
  } else {
    answer = (char*) calloc(3, sizeof(char));
    answer[0] = 'N';
    answer[1] = 'o';
    answer[2] = '\0';
  }
 
  return answer;
  
}
