#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int lotto[6];
    srand(time(NULL));
    for(int i=0;i<6;i++)
    {
        lotto[i]=rand() % 10;
    }
    printf("Lotto is %d",lotto);
}
