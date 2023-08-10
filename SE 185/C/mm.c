#include<stdio.h>
#include<string.h>

typedef struct{
    
    char name[50];
    double mid1;
    double mid2;
    double final;
    
}studentRecord;

void examAvg(studentRecord[], int NUM_STUDENT);

void examAvg(studentRecord student[], int NUM_STUDENT){
    
    double average;
    
    for(int i = 0; i <NUM_STUDENT; i++){
        
    average = (student[i].mid1 + student[i].mid2 + student[i].final) / 3;
    printf("%s exam average: %.2f\n", student[i].name, average);
    
    }
    

}
int main(void){
    
    FILE* inFile = NULL; //File pointer
    const int NUM_STUDENT = 4;
    studentRecord student[NUM_STUDENT];
    
    
    inFile = fopen("student_data.txt","r");
    
    if(inFile== NULL){
        printf("Could not open file student_data.txt.\n");
        return -1;
    }
    
    
    for(int i = 0; i < NUM_STUDENT; i++){
    
    printf("Enter student%d name and three exam score: ", i+1);
    fscanf(inFile, "%s %lf %lf %lf", student[i].name, &student[i].mid1, &student[i].mid2, &student[i].final);
    printf("%s %.2lf %.2lf %.2lf\n", student[i].name, student[i].mid1, student[i].mid2, student[i].final);
    }
    
    printf("\n");
    
    fclose(inFile);
    
    for(int i = 0; i < NUM_STUDENT; i++){
        
    printf("%s exam scores = %.2lf %.2lf %.2lf\n",student[i].name, student[i].mid1, student[i].mid2, student[i].final);
    
    }
    
    printf("\n");
    examAvg(student, NUM_STUDENT);  
    
    return 0;
}