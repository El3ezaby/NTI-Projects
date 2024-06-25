/*
 * main.c
 *
 *  Created on: ??‏/??‏/????
 *      Author: Mohamed
 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>	
static void FIZBUZ(void);
static void Multiplication(void);
static void CountDigits(void);
static void TrianglePattern(void);
static void RightTriangle1(void);
static void RightTriangle2(void);
void main(void)
{
    system("cls");
    /*************************** FIZZ BUZZ Example**********************/
    // FIZBUZ();
    /*************************** Multiplication table 1:10 *************/
    // Multiplication();
    /**************************** Count digits in integer **************/
    // CountDigits();
    /****************************** Triangle pattern *****************/
      TrianglePattern();
    /*******************************Right angle Triangle1*************/
    // RightTriangle1();
    /*******************************Right angle Triangle2*************/
    // RightTriangle2();
    return;
}

void FIZBUZ(void)
{
    int x=0;
    printf("printing all numbers from 0 : 100 \n\r");
    while (x<=100)
    {
        if(x%3==0 && x%5==0)
            printf("FIZZBUZZ. \n\r");
        else if (x%3==0)
            printf("FIZZ. \n\r");
        else if (x%5==0)
            printf("BUZZ. \n\r");
        else
            printf(" %d \n\r",x);
        x++;
    }
}
void Multiplication(void)
{
    for (int i = 1; i <=10; i++)
    {
        for (int j = i; j <= 10; j++)
        {
            printf("%d * %d = %d    ", i,j, i*j);
        }
        printf(" \n");
        
    }  
}
void CountDigits(void)
{
    int x=0;
    int count=0;
    printf("please enter an integer \n\r");
    scanf("%d",&x);
    while (x!=0)
    {
        count++;
        x/=10;
    }
    printf("Count = %d",count);    
}
void TrianglePattern(void)
{
    int x=0;
    printf("please enter an integer \n\r");
    scanf("%d",&x);
    for(int i=0 ; i<=x ; i++)
    {
        for (int j = x-i; j > 0; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
void RightTriangle1(void)
{
    int height =6 ;
    int count =1;
    for (int i = 1; i < height; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d",count++);
        }
        printf ("\n");
        
    }  
}
void RightTriangle2(void)
{
    int height =6 ;
    int count =1;
    for (int i = 1; i < height; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d",i);
        }
        printf ("\n");
        
    }  
}