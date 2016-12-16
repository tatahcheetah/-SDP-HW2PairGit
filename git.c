#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    printf("Lotto is ");

    for(int i=0;i<6;i++)
    {
        printf("%d", rand() % 10);
    }
    
}