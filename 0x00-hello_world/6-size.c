#include<stdio.h>
int main()
	
/**
 * main - Entry point
 *
 * Description: prints the size of various types on the computer c is compiled and run on.
 *
 * Return: Always 0 (Succesful)
*/

{
    int intType;
    float floatType;
    double doubleType;
    char charType;


    printf("Size of char: %zu byte\n", sizeof(charType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType)); 
    
    return 0;
}
