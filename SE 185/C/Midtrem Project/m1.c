#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


int main(int argc, char *argv[])
{
  printf("Welcome! We have 3 quizzes in total.\n Quiz 1- Based on General Programming. \n Quiz 2- Based on condition statements and arrays. \n Quiz 3- Based on identifiers and loops.\n");
  int no,a1=0,a2=0,a3=0,a4=0;
  int test1=0,test2=0,test3=0
  ;
  int marks1_1 = 0;
  int marks1_2 = 0;
  int marks1_3 = 0;
  int marks2_1 = 0;
  int marks2_2 = 0;
  int marks2_3 = 0;
  int marks3_1 = 0;
  int marks3_2 = 0;
  int marks3_3 = 0;
  char c1_1[5],c1_3[5],c1_4[5],c2_1[5],c2_2[5],c2_3[5],c2_4[5],c2_5[5],c3_1[5],c3_2[5],c3_3[5],c3_4[5],c[5];
  double t1,t2,t3,total=0;
  srand(time(0));
  printf(" Enter a number between 1 and 9: ");
  scanf("%d",&no);
  no=(rand()%3)+1;
 
  while(strcmp(c,"No"))
  { 
   
   switch(no)
  { case 1:   while(test1!=3)
              {  
             
              
              test1=0;
              printf(" Q1 We use stdlib.h library for using random function.\n a)True\n b)False\n");
              scanf("%s",c1_1);
              if(strcmp(c1_1,"True") == 0)
                { marks1_1 = marks1_1 + 5;
                  test1++;
                }
             
              
              printf(" Q2 Select the correct options.\n a)It is not a good practice to leave one space between operators.\n b)toLowerCase() converts to lower case.\n c)Integer data types are used for decimals\n d)toUpperCase() converts to lower case.\n");
              scanf("%s",c1_3);
              if(strcmp(c1_3,"b")==0)
                { marks1_2 = marks1_2 + 5; 
                  test1++;
                }
              
              
              printf(" Q3 Fill in the blank.\n We know x=2 already.\n (x___2)?5:9 \n");
              scanf("%s",c1_4);
              if( strcmp(c1_4,"==")==0)
                { marks1_3 =marks1_3 + 5;
                  test1++;
                 }
               
             ++a1;
           

             
              if(marks1_1==0)
               { printf("Q1 is wrong.\n"); }
              if( marks1_2==0)
               { printf("Q2 is wrong.\n"); }
              if(marks1_3==0)
               { printf("Q3 is wrong.\n"); }


              
              }
              printf("%d %d %d\n", marks1_1,marks1_2,marks1_3);
              t1=(double)(marks1_3+marks1_2+marks1_3)/a1;
              printf("Total Score for Quiz 1: %.2lf\n",t1);
              total+=t1;

              break;
             
 
case 2:     
            while(test2!=3)
            {  
                test2=0;
            printf(" Q1 Is default case compulsary to use in switch statement.\n a)True\n b)False\n");
            scanf("%s",c2_1);

            if(strcmp(c2_1,"True") == 0)
              { marks2_1 = marks1_1 + 5;
                test2++;
              }

            printf(" Q2 Select the correct statements.\n a)We write break statement after each case in switch statements.\n b)Double is not used for floating point numbers.\n c)Array is used to store single item.\n d)Array index starts from 1.\n");
            scanf("%s",c2_2);
            if(strcmp(c2_2,"a")==0)
              { marks1_2 = marks1_2 + 5; 
                 test2++;
              }

              printf(" Q3 Fill in the blank with operator to iterate the loop 10 times.\n for(int i=0;i""___""10;i++);\n");
              scanf("%s",c2_4);
              if( strcmp(c2_5,"<")==0)
              { marks2_3 =marks2_3 + 5; 
                test2++;
              }
              ++a2;

              if(marks2_1==0)
                { printf("Q1 is wrong.\n"); }
              if( marks2_2==0)
                { printf("Q2 is wrong.\n"); }
              if(marks2_3==0)
                { printf("Q3 is wrong.\n"); }
                

            }
         t2=(double)(marks2_3+marks2_2+marks2_3)/a2;
         total+=t2;
         printf("Total Score for Quiz 2: %.2lf\n",t2);
     break;
 
    case 3:  
             while(test3!=3)
             { 
                 
                 test3=0;
    
    
    
              printf(" Q1 A function definition consists of new function name and a block of statements.\n a)True\n b)False\n");
              scanf("%s",c3_1);
              if(strcmp(c3_1,"True") == 0)
               { marks3_1 = marks3_1 +5;
                 test3++;
                 
               }
              
              printf(" Q2 Select the correct statements.\n a)We cannot use reserved words for naming variables.\n b)Identifiers are not case sensitive.\n c)const is not a keyword.\n d)Binary has base 16.\n");
              scanf("%s",c3_2);
              if(strcmp(c3_2,"a")==0)
                { marks3_2 = marks3_2 + 5; 
                  test3++;
                
                }

              printf(" Q3 Fill in the blank.\n for(int i=0;i<1;i___){} \n");
              scanf("%s",c3_4);
              if( strcmp(c3_4,"++")==0)
               {  marks3_3 =marks3_3 + 5; 
                  test3++;
               }
              
              ++a3;

              if(marks3_1==0)
             { printf("Q1 is wrong."); }
              if( marks3_2==0)
             { printf("Q2 is wrong."); }
              if(marks3_3==0) 
              { printf("Q3 is wrong."); }

              
             }  
              t3=(double)(marks3_3+marks3_2+marks3_3)/a3;
              total+=t3;
              printf("Total Score for Quiz 3: %.2lf\n",t3);

              break;
 
    default: printf("Wrong input of data\n");
        break;

  }
   ++a4;
   
   printf("Do you want to take another quiz ???\n Enter Yes to take and No to Quit\n");
   scanf("%s",c);
   if(a4>1)
   {
       total+=10;
   }


  }

  printf("Total scores accross all quizes : %.2lf\n",total);
 
   
 
 
  return 0;
 
}
