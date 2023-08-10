#include <stdio.h>

int main()
{
    int num=5;
    int *myPtr=&num;
    printf("num is stored at: %d\n",myPtr);
    printf("myPtr is stored at: %d\n",&myPtr);
    printf("num holds the value: %d\n",num);
    printf("myPtr holds the value: %d\n",myPtr);
    printf("myPtr points to this value: %d",num);
    
    return 0;
}
