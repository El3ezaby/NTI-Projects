/*
 * main.c
 *
 *  Created on: ??‏/??‏/????
 *      Author: Mohamed
 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>	
static void PrintingEvenNumbers(void);	
static void Factorila(void );
static void MultiplicationTable(void);
static void GetDay(void);

static void printAsterisks(int numAsterisks);
static void printSpaces(int numSpaces) ;
void main(void )
{
    system("cls");
    /******************************** Printing Even Numbers from 0:99******************/
     PrintingEvenNumbers();
    /******************************** Factorial on User input ************************/
    // Factorila();
    /******************************** Multiplication table of numbers 1:9************/
    // MultiplicationTable();
    /******************************** Getting day ***********************************/
    //GetDay();

    // int height = 5; 

    // for (int i = 0; i < height; i++)
    // {
    //     printSpaces(height - i - 1);
    //     printAsterisks(2 * i + 1);
    //     printf("\n");
    // }
    return;
}


void PrintingEvenNumbers(void)
{   
    printf ("printing all Numbers from 0 to 99 \n\r");
    for (int i=1; i <99;i++)
    {
        printf("No %d is : %d \n\r",i,i+1);
        i++;
    }
}
void Factorila(void )
{
    int facnum=0;
    unsigned long long Fact=1;
    do
    {
        printf("Please enter a positive number \n\r");
        scanf("%d",&facnum);
    }
    while (facnum<0);

    int var =facnum;
    // while (facnum>0)
    // {
    //     Fact *=facnum;
    //     facnum--;
    // }
    for(var; var>0;var--)
        Fact*=var;
    printf( "The factorial of %d is : %llu \n\r", facnum,Fact);

}     
void MultiplicationTable(void)
{
    int number=0;
    int Fact=1;
    do
    {
        printf("Please enter a positive from 1 to 9 number  \n\r");
        scanf("%d",&number);
    }
    while (number>9 || number<1);
    printf("Here is the multiplication table of : %d \n\r", number);
    for(int i=0 ;i <=12;i++)
        printf("%d X %d = %d \n\r",i,number,i*number);   
}
void GetDay(void)
{
    int Day=0;
    char state=' ';
    do
    {
        do
        {
            printf("please Enter a number from 1:7 \n\r");
            scanf("%d",&Day);
        } 
        while (Day<1 || Day >7);

        switch (Day)
        {
        case 1:
            printf("Todat is Saturday \n\r");
            break;
        case 2:
            printf("Todat is Sunday \n\r");
            break;
        case 3:
            printf("Todat is monday \n\r");
            break;
        case 4:
            printf("Todat is tusday \n\r");
            break;
        case 5:
            printf("Todat is wednesday \n\r");
            break;
        case 6:
            printf("Todat is thursday \n\r");
            break;
        case 7:
            printf("Todat is Friday \n\r");
            break;   
        default:
            printf("wrong input \n\r");
            break;
        }
        printf ("Do you want to Repeat ? 'y' for Yes 'n' for No \n\r");
        fflush(stdin);
        state =getch();

    } while (state == 'y');
}

void printSpaces(int numSpaces) 
{
    for (int i = 0; i < numSpaces; i++) {
        printf(" ");
    }
}
void printAsterisks(int numAsterisks) 
{
    for (int i = 0; i < numAsterisks; i++) {
        printf("*");
    }
}