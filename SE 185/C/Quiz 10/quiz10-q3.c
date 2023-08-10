

#include <stdio.h>
#include <stdlib.h>

int stringLength(char myString[]){
    
   
    if(myString[0]=='\0'){
        
        return 0;
        
    }
    
    
    else
        return 1 + stringLength(myString + 1);
    
    
    
}


int main(int argc, const char * argv[]) {
    
    char tocalc[50];
        
    printf("Enter a string: ");
    
    scanf("%s",tocalc);
    
    int length= stringLength(tocalc);
    
    printf("The length of \"%s\" is: %d\n",tocalc,length);
    
   
    
}
