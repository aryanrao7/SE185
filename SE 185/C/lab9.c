// Lab 09 DS4Talker Skeleton Code       

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ncurses.h>

#define WORDLENGTH 11
#define MAXWORDS 100
#define DEBUGM 1   // Set this to 0 to disable debug output
#define AVATAR '*'
#define EMPTY_SPACE ' '


// Reads words from the file into WL and trims the whitespace off of the end
// DO NOT MODIFY THIS FUNCTION
int read_words(char* WL[MAXWORDS], char* file_name);

// modifies str to trim white space off the right side
// DO NOT MODIFY THIS FUNCTION
void trimws(char* str);
void draw_character(int x, int y, char use);


int main(int argc, char* argv[]) {
    
    char* wordlist[MAXWORDS];
    int wordcount;
    int i;
    int c = 0;
    wordcount = read_words(wordlist, argv[1]);

    int x = 16, y = 1;
    
    int time = 0;
    int j_LX, j_LY, j_RX, j_RY; 
    int triangle, circle, cross, square;
    
    int iTime = 0;
    int p = 20, q = 5;
    int a = 20, b = 15;
    char intro[10] = "Begin: ";
    char newline[10] = "Newline: ";
    int actionTaken[50];
    
    initscr();
    refresh();
    
    if (DEBUGM) {
        printw("Read %d words from %s \n", wordcount, argv[1]);
        
        for (i = 0; i < wordcount; i++) {
            
                printw("%15s ", wordlist[i]);
                
                if((i+1)%5 == 0 && i > 0)
                    printw("\n");
            }
            
        
        //printw("\n");
    }

    // most of your code goes here. Do not forget to include the ncurses library 
    
    draw_character(x, y, AVATAR);
    i = 0;
    
    while(1){
        
    scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d,", &time, &triangle, &circle, &cross, &square, 
            &j_LX, &j_LY, &j_RX, &j_RY);
            
    /*printf("%d, %d, %d, %d, %d, %d, %d, %d, %d\n", time, triangle, circle, cross, square, 
            j_LX, j_LY, j_RX, j_RY);*/
            
    
    if(time > iTime){
        
    if (j_LX > 120 && j_LX < 127 && x <= 75 ){ //right
        
        draw_character(x, y, EMPTY_SPACE);
        x += 16;
        refresh();
        
        draw_character(x, y, AVATAR);
        refresh();
        iTime = time + 300;
        
        i += 1;
        
    
    }

    
    if(j_LX < -120 && j_LX > -128 && x >= 17){ //left
    
        draw_character(x, y, EMPTY_SPACE);
        x -= 16;
        refresh();
        
        draw_character(x, y, AVATAR);
        refresh();
        iTime = time + 300;
        
        i -= 1;
        
    }
    
    
    if(j_LY < -120 && j_LY > -128 && y > 1){ //down
        
        draw_character(x, y, EMPTY_SPACE);
        y -= 1;
        refresh();
        
        draw_character(x, y, AVATAR);
        refresh();
        iTime = time + 300;
        
        i -= 5;
        
        
    }
    
    
    if(j_LY > 120 && j_LY < 127 && y <= 15){ //up
        
        draw_character(x, y, EMPTY_SPACE);
        y += 1;
        refresh();
        
        draw_character(x, y, AVATAR);
        refresh();
        iTime = time + 300;
        
        i += 5;
    }
    
    mvprintw(p,q,"%s",intro);
    
    if(j_RX == 8){ //triangle
        
        mvprintw(a,b," %s", wordlist[i]);
        refresh();
        
        actionTaken[c] = strlen(wordlist[i])+1;
        
        c++;
        b += strlen(wordlist[i])+1;
        
        refresh();
        
        iTime = time + 300;
        
        refresh();
        
    }
    
    if(j_RX == -88 && b > q){ //cross
        
        for(int i = b; i >= (b - actionTaken[c-1]); i--){ 
            
            if(i >= 5){
                refresh();
                draw_character(i,a,EMPTY_SPACE);
            }
        }
        
        if(actionTaken[c-1] > 0){
            
            b -= actionTaken[c-1];
        }
        
        c--;
        iTime = time + 300;
    }
    
    if(j_RX == -104){ //square
        
        mvprintw(a,b,"%s",wordlist[i]);
        refresh();
        
        actionTaken[c] = strlen(wordlist[i]);
        
        c++;
        
        refresh();
        b += strlen(wordlist[i]);
        
        
        iTime = time + 300;
        
        refresh();
    }

        if(j_RY == 0){
        
        for(int i = b; i >= actionTaken[c]; i--){       
        
        refresh();
        draw_character(i,a,EMPTY_SPACE);
            
        }
        
        a = 20, b = 15;
        iTime = time + 300;
        
        refresh();
        }
        
    }
    }
    

    endwin();
    return 0;
}

// DO NOT MODIFY THIS FUNCTION!
void trimws(char* str) {
    int length = strlen(str);
    int x;
    if (length == 0) return;
    x = length - 1;
    while (isspace(str[x]) && (x >= 0)) {
        str[x] = '\0';
        x -= 1;
    }
}


// DO NOT MODIFY THIS FUNCTION!
int read_words(char* WL[MAXWORDS], char* file_name)
{
    int numread = 0;
    char line[WORDLENGTH];
    char *p;
    FILE* fp = fopen(file_name, "r");
    while (!feof(fp)) {
        p = fgets(line, WORDLENGTH, fp);
        if (p != NULL) 
        {
            trimws(line);
            WL[numread] = (char *)malloc(strlen(line) + 1);
            strcpy(WL[numread], line);
            numread++;
        }
    }
    fclose(fp);
    return numread;
}

void draw_character(int x, int y, char use)
{
    mvaddch(y,x,use);
    refresh();
}