
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isMultiple(char c[], int size) 
{ 
    //initial state 0
    char state = '0'; 
  
    for (int i = 0; i < size; i++) {  
        char digit = c[i]; 
        switch (state) { 
  
          //state 0 
          case '0': 
              if (digit == '1') 
                  state = '1'; 
              break; 
    
          //state 1 
          case '1': 
              if (digit == '0') 
                  state = '2'; 
              else
                  state = '3'; 
              break; 
    
          //state 2 
          case '2': 
              if (digit == '0') 
                  state = '4'; 
              else
                  state = '0';
              break; 
          //state 3
          case '3': 
              if (digit == '0') 
                  state = '1'; 
              else
                  state = '2';
              break;
          //state 4
          case '4': 
            if (digit == '1') 
                state = '4'; 
            else
                state = '3';
            break;
        } 
    } 
  
    if (state == '0') 
        return true; 
    return false; 
}  


int main() 
{ 
  char c[100];
  printf("Enter a string\n");
  scanf("%s", c);
  int size = strlen(c); 
	if (isMultiple(c, size)) 
		printf("yeah");
  else
		printf("no") ;
	return 0; 
} 
