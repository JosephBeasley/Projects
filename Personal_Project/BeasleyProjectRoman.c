/*
Name: Joseph Beasley
Date: 18MAR19
Project: Personal Project (project #4)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void predigit(char num1, char num2); // declare functions and global variables
void postdigit(char c, int n);
int num2roman();
int roman2num();
int digit(char);
char romanval[1000];
int i = 0;

int main()
{
    int choice;
    char input[5] = {0};
    printf("Enter the Password(lowercase)\n>"); //get input
    scanf("%s",&input);
    if (strcasecmp(input,"idf")!=0)
    {
        printf("INCORRECT PASSWORD DUM DUM\n");
    }
    printf("1)decimal to Roman 2)Roman to decimal\n >");
    scanf("%i",&choice); //decide which function to call
    if (choice == 1) //call specified function
    {
        num2roman();
    }
    else if (choice == 2) //call specified function
    {
        roman2num();
    }
    else
    {
        printf("INCORRECT INPUT"); //error handling
        return(0);
    }
}


int roman2num()
{
    char roman_Number[1000]; //create variables
    int i=0;
    int number =0;
 
    printf("Enter any roman number smaller than 101 (Valid digits are I, V, X, L, C):  \n");
    scanf("%s",roman_Number); //get user input
 
    while(roman_Number[i]) //loop while there is a number
    { 
 
        if(digit(roman_Number[i]) < 0) //error handling
        {
            printf("Invalid roman digit : %c",roman_Number[i]);
            return 0;
        }
 
        if((strlen(roman_Number) -i) > 2) //error handling
        {
            if(digit(roman_Number[i]) < digit(roman_Number[i+2])){
                printf("Invalid roman number");
                return 0;
            }
         }
 
         if(digit(roman_Number[i]) >= digit(roman_Number[i+1])) //all of this is stupid roman numeral math
         {
            number = number + digit(roman_Number[i]);
         } 
        else
        {
            number = number + (digit(roman_Number[i+1]) - digit(roman_Number[i])); //same with this bull
            i++;
        }
        i++; //increment throught the array
    }
    if (number >100) //error handling
    {
        printf("VALUE EXCEEDED LIMIT");
        return(0);
    }
    printf("Its decimal value is : %i", number); //print value
 
    return 0;
 
}
 
int digit(char c){
 
    int value=0;
 
    switch(c){ //using the string "roman_Number" decide the value of Roman_Number[i]
         case 'I': 
            value = 1;
            break;
         case 'V': 
            value = 5;
            break;
         case 'X': 
            value = 10;
            break;
         case 'L': 
            value = 50;
            break;
         case 'C': 
            value = 100;
            break;
         case 'D': 
            value = 500;
            break;
         case 'M': 
            value = 1000;
            break;
         case '\0': 
            value = 0;
            break;
         default: 
            value = -1; 
    }
    return value; //return the number
}

int num2roman()
{
    int j; //declare variables
    long number;
 
    printf("Enter a number less than 101 \n >"); //get user input
    scanf("%d", &number);
    if (number >100) //error handling
    {
        return(0);
    }
    if (number <= 0) //error handling
    {
        printf("Invalid number");
        return 0;
    }
    if (number >= 100) //so much dumb math for roman numerals to get value of things (such as L, X, V, I)
        {
            if (number < (100 + 3 * 100)) 
            {
                postdigit('C', number / 100);
                number = number - (number / 100) * 100;
            }
            else
            {
                predigit('L', 'D');
                number = number - (500 - 100);
            }
        }
        else if (number >= 50 ) //so much dumb math for roman numerals to get value of things (such as L, X, V, I)
        {
            if (number < (50 + 4 * 10))
            {
                postdigit('L', number / 50);
                number = number - (number / 50) * 50;
            }
            else
            {
                predigit('X','C');
                number = number - (100-10);
            }
        }
        else if (number >= 10) //so much dumb math for roman numerals to get value of things (such as L, X, V, I)
        {
            if (number < (10 + 3 * 10))
            {
                postdigit('X', number / 10);
                number = number - (number / 10) * 10;
            }
            else
            {
                predigit('X','L');
                number = number - (50 - 10);
            }
        }
        else if (number >= 5) //so much dumb math for roman numerals to get value of things (such as L, X, V, I)
        {
            if (number < (5 + 4 * 1))
            {
                postdigit('V', number / 5);
                number = number - (number / 5) * 5;
            }
            else
            {
                predigit('I', 'X');
                number = number - (10 - 1);
            }
        }
        else if (number >= 1) //so much dumb math for roman numerals to get value of things (such as L, X, V, I)
        {
            if (number < 4)
            {
                postdigit('I', number / 1);
                number = number - (number / 1) * 1;
            }
            else
            {
                predigit('I', 'V');
                number = number - (5 - 1);
            }
        }
    printf("Roman number is: "); //print value
    for(j = 0; j < i; j++)
    {
        printf("%c", romanval[j]);
    }
    printf("\n");
    return (0);
}
void predigit(char num1, char num2) //functions for roman numeral math. things like IV = 4 while VI = 6
{
    romanval[i++] = num1;
    romanval[i++] = num2;
}
 
void postdigit(char c, int n) //functions for roman numeral math. things like IV = 4 while VI = 6
{
    int j;
    for (j = 0; j < n; j++)
        romanval[i++] = c;
}