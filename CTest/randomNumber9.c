#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int i;
    
    printf("Random Number 9 : ");
    for(i=0;i<9;i++)
    {
        printf("%d", rand() % 10);
    }
    printf("%d", rand() % 1+9);
    
}