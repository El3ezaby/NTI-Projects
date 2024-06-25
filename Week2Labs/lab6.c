/*
 * main.c
 *
 *  Created on: ??‏/??‏/????
 *      Author: Mohamed
 */
#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>
#include <stdbool.h>
#include <conio.h>	
float average (int x1,int x2,int x3,int x4,int x5);
int Evenodd(int x );
int biggest( int x, int y , int z );
unsigned long long sumOfFactorialSeries(int n);
unsigned long long factorial(int num);
bool isPrime(int num) ;
void decimalToBinary(int decimalNum) ;
void FIZZBUZZ(int n );
void main(void )
{

	system("cls");

	// printf("Average =%f \n ",average(1,2,3,4,5));
	/*********************** odd Even*********************/
	// int x =4;
	// Evenodd(x)==1? printf("Even \n"):printf("odd \n");
	/********************** biggest ****************/
	// printf ("the biggest number is %d \n",biggest(4,5,3));
	/************************* Sum of series **********/
   	// int n;
    // printf("Enter the value of n: ");
    // scanf("%d", &n);
    // unsigned long long result = sumOfFactorialSeries(n);
    // printf("The sum of the series of factorials is: %llu\n", result);

	/*********************IS prime***********************/
	// int num;
    // printf("Enter a number: ");
    // scanf("%d", &num);

    // if (isPrime(num))
	// {
    //     printf("%d is a prime number.\n", num);
    // }
	// else
	// {
    //     printf("%d is not a prime number.\n", num);
    // }
	/**********************Decimal to binary*****************/
	// int decimalNum;
    // printf("Enter a decimal number: ");
    // scanf("%d", &decimalNum);
    // decimalToBinary(decimalNum);
	/******************** FIZZ BuZZ***************/

	return ;

}
float average (int x1,int x2,int x3,int x4,int x5)
{
	float av=(x1+x2+x3+x4+x5)/5.0;
	return (av);
}
int Evenodd(int x )
{
	return ((x%2==0)?1:0);
}
int biggest( int x, int y , int z )
{
	return ((x>y)?((x>z)?x:z):((y>z)?y:z));
}
bool isPrime(int num) 
{
    if (num <= 1) {
        return false; // 0 and 1 are not prime numbers
    }

    // Check for factors from 2 to the square root of the number
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // Found a factor, so the number is not prime
        }
    }

    return true; // If no factors found, the number is prime
}
unsigned long long factorial(int num)
{
    if (num == 0 || num == 1) {
        return 1;
    }

    unsigned long long result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}
unsigned long long sumOfFactorialSeries(int n)
{
    unsigned long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += factorial(i);
    }
    return sum;
}
void decimalToBinary(int decimalNum) 
{
    int binary[32]; 
    int i = 0;

    if (decimalNum == 0)
	{
        printf("Binary representation: 0\n");
        return;
    }
    while (decimalNum > 0)
	{
        binary[i] = decimalNum % 2;
        decimalNum /= 2;
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) 
	{
        printf("%d", binary[j]);
    }
    printf("\n");
}
void FIZZBUZZ(int n )
{

	for (int i = 0; i < n; i++)
	{
		if (n%3==0 && n%5==0)
		{
			printf("FIZZ BUZZ. \n\r");
		}
		else if (n%3==0 )
		{
			printf("FIZZ. \n\r");
		}
		else if (n%5==0)
		{
			printf("BUZZ. \n\r");
		}
		else
			printf ("%d",n);
	}
}