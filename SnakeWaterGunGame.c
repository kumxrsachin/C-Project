#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int main()
{
    char me,comp;
    int n;
    srand(time(0));
    n  = rand() % 300 + 1;
    if(n<=100)
    {
        comp = 's';
    }
    else if(n>100 && n<200)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Enter s for snake, w for water and g  for gun: ");
    scanf("%c", &me);
    printf("Computer chose: %c\n", comp);
    
    if(me==comp)
    {
        printf("Match Draw");
    }
    if(me == 's' && comp == 'w')
    {
        printf("I Won");  //Snake will drink the water
    }
    else if(me == 'g' && comp == 'w')
    {
        printf("Computer Won");  //Gun will sink in water
    }
    else if(me == 's' && comp == 'g')
    {
        printf("Computer Won");  //Gun will shoot the snake
    }
    else if(me == 'g' && comp == 's')
    {
        printf("I Won");  //Gun will shoot the snake
    }
    else if(me == 'w' && comp == 'g')
    {
        printf("I Won");  //Gun will sink in water
    }
    else //(me == 'w' && comp == 's')
    {
        printf("Computer Won");  //Snake will drink the water
    }
    return 0;
}
