/* 
Name: Joseph Beasley
Date: 18Mar19
Project: Personal Project (project #3)
*/
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

int main()
{
    float val1;
    float val2;
    float val3;
    int choice1;
    int choice2;
    int choice3;
    char input[5] = {0};
    printf("Enter the Password(lowercase)\n>");
    scanf("%s",&input);
    if (strcasecmp(input,"idf")!=0)
    {
        printf("INCORRECT PASSWORD DUM DUM\n");
        return(0);
    }
    system("clear");
    printf("input the value of the unit you are converting \n >");
    scanf("%f",&val1);
    fflush(stdin);
    system ("clear");
    //printf("%s",&unit1[0]);
    printf("choose unit you are converting\n 1:pound 2:ounce 3:gram 4:kilogram 5:inch 6:foot 7:yard 8:meter 9:kilometer 10:mile\n 11:cup 12:pint 13:quart 14:gallon 15:liter\n>");
    scanf("%i",&choice1);
    if (choice1<1 || choice1>15)
    {
        printf("incorrect input, exiting program\n"); //input handling
        return(0);
    }
    fflush(stdin);
    system("clear");
    printf("choose unit you are converting to\n1:pound 2:ounce 3:gram 4:kilogram 5:inch 6:foot 7:yard 8:meter 9:kilometer 10:mile\n 11:cup 12:pint 13:quart 14:gallon 15:liter\n>");
    scanf("%i",&choice2);
    if (choice2<1 || choice2>15)
    {
        printf("incorrect input, exiting program\n"); //input handling
        return(0);
    }
    fflush(stdin);
    system("clear");
    if (choice1 >=1 && choice1 <=4) //choosing type conversion
    {
        choice3=1;
    }
    else if (choice1 >=5 && choice1 <= 10) // choosing type conversion
    {
        choice3=2;
    }
    else if (choice1 >= 11 && choice1 <=15) // choosing type conversion
    {
        choice3=3;
    }
    switch(choice3)
    {
        case 1: // weight conversion
            switch(choice1)
            {
                case 1: // from pounds
                    switch(choice2) 
                    {
                        case 2: // convert to ounces
                            val3 = (val1 * 16);
                            printf("%f ounces\n",val3);
                            break;
                        case 3: // convert to grams
                            val3 = (val1 * 453.592);
                            printf("%f grams\n",val3);
                            break;
                        case 4: // convert to kilograms
                            val3 = (val1 * 0.453592);
                            printf("%f kilograms\n",val3);
                            break;
                        default: // incorect conversion
                            printf("Not a conversion option\n");
                            break;
                    }
                    break;
                case 2: // from ounces
                    switch(choice2)
                    {
                        case 1: //convert to pounds
                            val3 = (val1 * 0.0625);
                            printf("%f pounds\n",val3);
                            break;
                        case 3: //convert to grams
                            val3 = (val1 * 28.3495);
                            printf("%f grams\n",val3);
                            break;
                        case 4: //convert to kilograms
                            val3 = (val1 *0.0283495);
                            printf("%f kilograms\n",val3);
                            break;
                        default: //incorrect conversion
                            printf("not a conversion option\n");
                            break;
                    }
                    break;
                case 3: // from grams
                    switch(choice2)
                    {
                        case 1: //convert to pounds
                            val3 = (val1 * 0.00220462);
                            printf("%f pounds \n",val3);
                            break;
                        case 2: //convert to ounces
                            val3 = (val1 * 0.035274);
                            printf("%f ounces \n",val3);
                            break;
                        case 4: //convert to kilograms
                            val3 = (val1 * 0.001);
                            printf("%f kilograms \n",val3);
                            break;
                        default: // incorrect conversion
                            printf("not a conversion option\n");
                            break;
                    }
                break;
                case 4: // from kilograms
                    switch(choice2)
                    {
                        case 1: //convert to pounds
                            val3 = (val1 * 2.20462);
                            printf("%f pounds \n",val3);
                            break;
                        case 2: //convert to ounces
                            val3 = (val1 * 35.274);
                            printf("%f ounces \n",val3);
                            break;
                        case 3: //convert to grams
                            val3 = (val1 * 1000);
                            printf("%f grams \n",val3);
                            break;
                        default: // incorrect conversion
                        printf("not a conversion option\n");
                        break;
                    }
                break;
                default: // incorrect conversion
                    printf("not a conversion option\n");
                    break;
            }
        case 2: //length conversion (5:inch 6:foot 7:yard 8:meter 9:kilometer 10:mile)
            switch(choice1)
                {
                    case 5: // from inches
                        switch(choice2)
                        {
                            case 6: // convert to feet
                                val3 = (val1 * 0.0833333 );
                                printf("%f feet\n",val3);
                                break;
                            case 7: // convert to yards
                                val3 = (val1 * 0.0277778);
                                printf("%f yards\n", val3);
                                break;
                            case 8: // convert to meters
                                val3 = (val1 * 0.0254 );
                                printf("%f meters\n",val3);
                                break;
                            case 9: // convert to kilometers
                                val3 = ((val1 * 0.0254 ) * .001);
                                printf("%f kilometers\n");
                                break;
                            case 10: //convert to miles
                                val3 = ((val1 * 0.0277778) * 0.000568182);
                                printf("%f miles\n");
                                break;
                            default:
                                printf("not a conversion option\n");
                                break;
                        }
                        break;
                    case 6: // from feet
                        switch(choice2)
                        {
                            case 5: // convert to inches
                                val3 = (val1 * 12);
                                printf("%f inches\n",val3);
                                break;
                            case 7: //convert to yards
                                val3 = (val1 * 0.333333);
                                printf("%f yards\n", val3);
                                break;
                            case 8: //convert to meters
                                val3 = (val1 * 0.3048);
                                printf("%f meters\n",val3);
                                break;

                            case 9: //convert to kilometers
                                val3 = (val1 * 0.0003048);
                                printf("%f kilometers\n");
                                break;
                            case 10: //convert to miles
                                val3 = (val1 * 0.000189394);
                                printf("%f miles\n");
                                break;
                            default:
                                printf("not a conversion option\n");
                                break;
                        }
                        break;
                        break;
                    case 7: //from yards
                        switch(choice2)
                        {
                            case 5: // convert to inches
                                val3 = (val1 * 36);
                                printf("%f inches\n",val3);
                                break;
                            case 6: //convert to feet
                                val3 = (val1 * 3);
                                printf("%f feet\n",val3);
                                break;
                            case 8: //convert to meters
                                val3 = (val1 * 0.9144);
                                printf("%f meters\n",val3);
                                break;
                            case 9: //convert to kilometers
                                val3 = (val1 * 0.0009144);
                                printf("%f kilometers\n");
                                break;
                            case 10: //convert to miles
                                val3 = (val1 * 0.000568182);
                                printf("%f miles\n");
                                break;
                            default:
                                printf("not a conversion option\n");
                                break;
                        }
                        break;
                    case 8: // from meters
                        switch(choice2)
                        {
                            case 5: // convert to inches
                                val3 = (val1 * 39.3701);
                                printf("%f inches\n",val3);
                                break;
                            case 6: //convert to feet
                                val3 = (val1 * 3.28084);
                                printf("%f feet\n",val3);
                                break;
                            case 7: //convert to yards
                                val3 = (val1 * 1.09361);
                                printf("%f yards\n", val3);
                                break;
                            case 9: //convert to kilometers
                                val3 = ( val1 * 0.001);
                                printf("%f kilometers\n");
                                break;
                            case 10: //convert to miles
                                val3 = (val1 * 0.000621371);
                                printf("%f miles\n");
                                break;
                            default:
                                printf("not a conversion option");
                                break;
                        }
                        break;
                    case 9: //from kilometers
                        switch(choice2)
                        {
                            case 5: // convert to inches
                                val3 = (val1 * 39370.1);
                                printf("%f inches\n",val3);
                                break;
                            case 6: //convert to feet
                                val3 = (val1 * 3280.84);
                                printf("%f feet",val3);
                                break;
                            case 7: //convert to yards
                                val3 = (val1 * 1093.61);
                                printf("%f yards", val3);
                                break;
                            case 8: //convert to meters
                                val3 = (val1 * 1000);
                                printf("%f meters",val3);
                                break;
                            case 10: //convert to miles
                                val3 = (val1 * 0.621371);
                                printf("%f miles\n");
                                break;
                            default:
                                printf("not a conversion option");
                                break;
                        }
                        break;
                    case 10: // from miles
                        switch(choice2)
                        {
                            case 5: // convert to inches
                                val3 = (val1 * 63360);
                                printf("%f inches\n",val3);
                                break;
                            case 6: //convert to feet
                                val3 = (val1 * 5280);
                                printf("%f feet\n",val3);
                                break;
                            case 7: //convert to yards
                                val3 = (val1 * 1760);
                                printf("%f yards\n", val3);
                                break;
                            case 8: //convert to meters
                                val3 = (val1 * 1609.34);
                                printf("%f meters\n",val3);
                                break;
                            case 9: //convert to kilometers
                                val3 = (val1 * 1.60934);
                                printf("%f kilometers\n");
                                break;
                            default:
                                printf("not a conversion option\n");
                                break;
                        }
                        break;
                    default:
                        printf("not a conversion option\n");
                        break;
                }
            break;
        case 3: //volume converstion (11:cup 12:pint 13:quart 14:gallon 15:liter)
            switch(choice1)
            {
                case 11: // from cups
                    switch(choice2)
                    {
                        case 12: // to pints
                            val3 = (val1 * 0.5);
                            printf("%f pints\n", val3);
                            break;
                        case 13: // to quarts
                            val3 = (val1* 0.25);
                            printf("%f quarts\n",val3);
                            break;
                        case 14: // to gallons
                            val3 = (val1 * 0.0625);
                            printf("%f gallons\n",val3);
                            break;
                        case 15: // to liters
                            val3 = (val1 * 0.236588);
                            printf("%f liters\n",val3);
                            break;
                        default:
                            printf("not a conversion option");
                            break;
                    }
                    break;
                case 12: // from pints
                    switch(choice2)
                    {
                        case 11: //to cups
                            val3 = (val1 * 2);
                            printf("%f cups\n",val3);
                            break;
                        case 13: // to quarts
                            val3 = (val1 * 0.5);
                            printf("%f quarts\n",val3);
                            break;
                        case 14: // to gallons
                            val3 = (val1 * 0.125);
                            printf("%f gallons\n",val3);
                            break;
                        case 15: // to liters
                            val3 = (val1 * 0.473176);
                            printf("%f liters\n",val3);
                            break;
                        default:
                            printf("not a conversion option");
                            break;
                    }
                    break;
                case 13: // from quarts
                    switch(choice2)
                    {
                        case 11: //to cups
                            val3 = (val1 * 4);
                            printf("%f cups\n",val3);
                            break;
                        case 12: // to pints
                            val3 = (val1 * 2);
                            printf("%f pints\n", val3);
                            break;
                        case 14: // to gallons
                            val3 = (val1 * .25);
                            printf("%f gallons\n",val3);
                            break;
                        case 15: // to liters
                            val3 = (val1 * 0.946353);
                            printf("%f liters\n",val3);
                            break;
                        default:
                            printf("not a conversion option");
                            break;
                    }
                    break;
                case 14: // from gallons
                    switch(choice2)
                    {
                        case 11: //to cups
                            val3 = (val1 * 16);
                            printf("%f cups\n",val3);
                            break;
                        case 12: // to pints
                            val3 = (val1 * 8);
                            printf("%f pints\n", val3);
                            break;
                        case 13: // to quarts
                            val3 = (val1 * 4);
                            printf("%f quarts\n",val3);
                            break;
                        case 15: // to liters
                            val3 = (val1 * 3.78541);
                            printf("%f liters\n",val3);
                            break;
                        default:
                            printf("not a conversion option");
                            break;
                    }
                    break;
                case 15: // from liters
                    switch(choice2)
                    {
                        case 11: //to cups
                            val3 = (val1 * 4.22675);
                            printf("%f cups\n",val3);
                            break;
                        case 12: // to pints
                            val3 = (val1 * 2.11338);
                            printf("%f pints\n", val3);
                            break;
                        case 13: //to quarts
                            val3 = (val1 * 1.05669);
                            printf("%f quarts\n",val3);
                            break;
                        case 14: // to gallons
                            val3 = (val1 * 0.264172);
                            printf("%f gallons\n",val3);
                            break;
                        default:
                            printf("not a conversion option");
                            break;
                    }
                    break;
                default:
                    printf("not a conversion option\n");
                    break;
            }
            break;
        default: // error handling
            break;
    }
    return(0);
}