//SE 185: Final Project Template//
/////////////////////////
/* 
Team xx (please insert your team number instead of xx)
Team member 1 "Tejal Devshetwar" | "50%"
Team member 2 "Aryan Rao" | "50%"
*/

////////////////////
#include<stdio.h>
#include <ncurses/ncurses.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <math.h>
#include <curses.h>
//
//add more here////

//////////////////////
//Struct Definition//
////////////////////


/////////////////////////////////////
//User Defined Functions Prototype//
//List prototypes here and define//
//tehm below the main function////
/////////////////////////////////

void draw_character(int x, int y, char use);

int main(){
	
	

	FILE* inFile = NULL;
	char action;
	int minLength;
	int totalWords = 1000;
	char wordsStore[totalWords][20];
	int lose = 0;
	int choosenWord;
	
	printf("Hello, this is a typing game.\n");
	printf("You will need to type the words as they appear.\n");
	printf("Would you like to play or add a word?\n");
	printf("You currently have %d words that can be used.\n",totalWords);
	printf("Action (p/w): ");
	scanf("%c", &action);
	
	if(action == 'p'){
		
	printf("What would you like your minimum word length to be?\n");
	printf("Minimum length word: ");
	scanf("%d", &minLength);
	
	//printf("Opening file wordList.txt\n");
	
	inFile = fopen("wordList.txt","r");
	
	if(inFile == NULL){
		
		printf("Could not open wordList.txt\n");
		return -1;
	}
	
	for(int i = 0; i < totalWords; i++){
		fscanf(inFile,"%s",wordsStore[i]);
	}
	
	fclose(inFile);
	
	/*for(int i = 0; i < 10; i++){
		printf("%s\n",wordsStore[i]);
	}*/
	
	}
	
	else if(action == 'w'){
	
	totalWords = 0;
	
	while(1){
		
	if(totalWords == 0){
		
	printf("\nYou currently have %d words that can be used.\n",totalWords);
	printf("What word would you like to add?\n");
	printf("Add word: ");
	scanf("%s",wordsStore[totalWords]);
	
	totalWords ++;
	
	}
	
	printf("There are now %d words.\n",totalWords);
	printf("Would you like to play or add another word?\n");
	printf("Action (p/w): ");
	scanf(" %c", &action);
	
	if(action == 'w'){
	printf("What word would you like to add?\n");
	printf("Add word: ");
	scanf("%s",wordsStore[totalWords]);
	totalWords++;
		
	continue;
	
		}
		
	if(action == 'p'){
		break;
	}
	
	
	
		
	}
	
	inFile = fopen("selfList.txt","w");
	
	
	
	inFile = fopen("selfList.txt", "r");

	if(inFile == NULL){
		
		printf("Could not open selfList.txt\n");
		return -1;
	}
	
	for(int i = 0; i <= totalWords; i++){
	fscanf(inFile,"%s",wordsStore[i]);	
	}
	
	fclose(inFile);
}

	srand(time(NULL));
	
	
	initscr();
    refresh();
	
	//printing the board
	mvprintw(1,1,"________________________________________________________________________");
	refresh();
	mvprintw(40,1,"________________________________________________________________________");
	refresh();
	mvprintw(41,1,"________________________________________________________________________");
	refresh();
	
	for(int y=2;y<40;y++){
		
		mvprintw(y,1,"|");
		mvprintw(y,72,"|");
		
		refresh();
	}
	
	

	refresh();
	
	int s=0;
	int t=0;
	time_t seconds;
	seconds = time(NULL);
	int myTime = seconds;
	int x=2;
	int y=0;
	char myString[100]=" ";
	char intro[50] ="Type here: ";
	char wordOnScreen[totalWords][20];
	int coordinate[40];
	while(y<40){
		
			
		choosenWord = rand() % totalWords;//randomize the word
		
		
		for(int i = 0; i < totalWords; i++){
			
			strcpy(wordOnScreen[i],wordsStore[choosenWord]);
			mvprintw(46, 2, "%s",wordOnScreen[i]);
			refresh();
		}
		
		
		
		//wordOnScreen[y-2][0]=wordsStore[choosenWord][0];
		
		
		x= (rand() % 65) +2;//randomize the position word is printed
		coordinate[y-2]=x;
		mvprintw(47, 2, "%d",coordinate[y-2]);
		if(strlen( wordsStore[choosenWord])>=minLength){//only print if the word matches the minimum length
			
			mvprintw(y+2,x,"%s", wordsStore[choosenWord]);
			y++;//to make the word keep going down
			napms(1000);
			
			//mvprintw(46, 2, "%s",wordOnScreen[y-2][0]);
			
		}
		
		
		refresh();
		
		mvprintw(44,2,"%s",intro);
		getstr(myString);
	
		refresh();
		int x2;
		int y2;
		
		//comparing for every word that is already printed
		for (int i=0; i<(y-2); i++){//(y-2) is the amount of words already printed
			
			if(strcmp(myString,wordOnScreen[i])==0){
				
				
				//if the string matches, replace the coordinate of word with ' '
				for(int j=0; j < strlen(wordOnScreen[i]); j++){//replace according to the length of string
					
					mvprintw(i+4,coordinate[i]+j," ");
					//mvprintw(48, 2, "%d, %d",i+2,coordinate[i]+j);
				}
				
			}
			
			
		}
		
		
	
	
	endwin();

	return 0;
}

///////////////////////////////////////
//User Defined Functions' Definition//
/////////////////////////////////////

void draw_character(int x, int y, char use)
{
    mvaddch(y,x,use);
    refresh();
}
