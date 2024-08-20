// run with - gcc main.c - ./a.out

#include <stdio.h>   // include allows feature libraries to be added - in this case it includes standard input/output features
#include <stdbool.h> // boolean library
#include <string.h>  // string library
#include <math.h>    // math library

void birthday()
{
    printf("Invoked birthday function! Happy birthday!");
}

int main()
{
    printf("hello world!\n");

    // VARIABLES AND FORMAT IDENTIFIERS

    int x;   // declaration
    x = 123; // initialisation
    // int x = 1234; // declaration + initialisation

    char c = "C";                  // single character -- %c
    char cGrade[] = "You got a C"; // array of characters (string emulation) -- %s

    float f = 3.111111;               // 4 bytes %f (32 bits of precision) float is generally faster than double but less precise
    double d = 3.1111111111111111111; // 8 bytes (64 bits of precision) %lf

    char numChar = 120;      // 1 byte char which stores between -128 to +127 (USES ASCII TO TRANSLATE TO LETTER CHAR) -- %d or %c
    unsigned uNumChar = 255; // 1 byte char which is unsigned and stores 0 to +255 (ASCII) -- %d or %c

    short int shortInt = 32768;           // 2 bytes (-32,768 tp +32767) -- %d (can also be declared as short instead of short int)
    unsigned short int uShortInt = 65536; // 2 bytes (0 to +65,535) -- %d

    int standardInt = 222222222; // 4 bytes -- %d (can be unsigned which doubles containment positively) -- %d -- IF unsigned int -- %u

    bool e = true; // 1 byte of true/false -- %d

    const float PI = 3.14159; // constant variable cannot be modified

    printf("you got a %c", c);
    printf("A high number is %d", x);

    // USER INPUT AND ARITHMETIC OPERATORS

    int a = 5;
    int b = 2;

    float z = a / (float)b; // can cast diviser as float/double from int

    // a++; INCREMENT
    // b--; DECREMENT

    // can use a += 1 as an augmented assignment operator

    int age;
    char name[25]; // bytes

    printf("\n\nWhat is your name?\t");
    // scanf("%s", &name);
    fgets(name, 25, stdin);        // allows for whitespace unlike scanf -- fgets doesnt take format identifier and rather the var name, and length of the var (+stdin)
    name[strlen(name) - 1] = '\0'; // gets the last char object in name which would be the new line, then replaces it with '\0' (MUST USE SINGLE QUOTES FOR THIS)

    printf("How old are you?\t");
    scanf("%d", &age); // scanf takes user input with the appropriate format identifier, and then lists the source variable

    printf("Your name is %s! You are %d years old!", name, age);

    // MATH FUNCTIONS

    // all of these are contained in the include library math.h
    double square = sqrt(9);
    double power = pow(2, 4);
    int rounding = round(3.14);
    int ceiling = ceil(3.14);
    int floorRound = floor(3.99);
    double absoluteValue = fabs(-100);
    double logarithm = log(3);
    double sine = sin(45);
    double cosine = cos(45);
    double tangent = tan(45);

    // CONDITION STATEMENTS AND LOGICAL OPERATORS (AND, OR, NOT)

    // if practice

    printf("\n\nHow old are you again?\t");
    scanf("%d", &age);

    if (age >= 18) // typical IF statment with block code within curly braces
    {
        printf("You are old enough!");
    }
    else if (age < 0) // ELIF/ELSE IF
    {
        printf("You haven't been born yet!");
    }
    else // ELSE
    {
        printf("You are not old enough!");
    }

    // switch practice

    char grade;

    printf("\n\nEnter a single letter grade:\t");
    scanf(" %c", &grade); // adding a space before the %c here allows for whitespace to be ignored -- error fix

    switch (grade) // start of switch defining which var to check
    {
    case 'A':
        printf("perfect!");
        break;
    case 'B':
        printf("Well done! That's a good grade!");
        break;
    default:
        printf("Thats OK! Not an A or a B though!");
    }

    // logical operators

    if (age != 18 && age != 19) // AND logical operator represented as &&
    {
        printf("\n\nYou are not 18 or 19!");
    }

    if (age == 1 || age == 2 || age == 3) // OR logical operator represented as ||
    {
        printf("You are still an infant!");
    }

    // to represent NOT you can use ! at the start of a boolean

    birthday();

    return 0;
}