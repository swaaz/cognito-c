#include <stdio.h>
//#include<conio.h>
//#include<ctype.h>
#include <stdlib.h>
//#include<string.h>
//#include<conio.h>
//#include<module-1.h>
//#include<c-tokens.h>
//#include<constant.h>
//#include<variables.h>
//#include<learn1.h>
//#include<learn2.h>
//#include<learn3.h>
#include "terminal.h"

/*structure to store the answers of quiz*/
typedef struct
{
    int q[10];

} quiz;

/*function used to automate*/
int automat(char st[])
{
    int c;
    printf("\n\n----------%s----------", st);
    printf("\nDo you want this module to be automatic?\n");
    printf("1. YES\n2. NO\n");
    printf("Enter the choice\n");
    scanf("%d", &c);
    if (c == 1)
        return 1;
    else if (c == 2)
        return 2;
    else
        return 0;
}
/*function whic is used to delay for one sec*/
int delay()
{
    long int i;

    for (i = 0; i < 999999999; i++)
        ;
    return 0;
}
/*function which is used to delay depending upon the argument passed to the function in sec*/
int delay_loop(int x)
{
    int i;
    for (int i = 0; i < x; i++)
        delay();
    return 0;
}

/*Learn*/

int learn1() //c-tokens
{
    system("clear");
    printf("\n----------Learn----------\n");
    printf("C-Tokens and the smallesT individual Hits of a C-program. These are the basic building blocks in a C program that cannot be further broken down into elements\n");
    printf("There are mainly five C tokens namely\nKeywords\nIdentifiers (Variables)\nConstants\nStrings\nOperators\n");
    printf("Keywords\nKeywords are the predefined words in a C compiler which are meant to perform specific function in C program Keywords cannot be used for naming variables, identifiers and functions. C Language supports 32 keywords namely int, float, double, long, short, char, if,else switch, case, for, while, goto, do, break, continue, struct, enum, extern, typedef, const,auto, register, default, volatile, sizeof, static, signed, return, union, void, unsigned\n");
}

int learn2() //variables
{
    system("clear");
    printf("\n-------------------LEARN---------------------\n");
    printf("Variables :\n");
    printf("Identifiers are the names provided to the elements of a program such as variables,functions and array.Identifiers consist of letter, number or an under score.\n");
    printf("VARIABLES are the named storage location that holds a data. The rules for writing variables are same as for identifiers.\n");
    printf("• First character must be a letter or underscore, and the it can have considerable number of digits letter underscore.\n");
    printf("• Keywords cannot be used as identifiers\n");
    printf("• Variables should not have two consecutive underscores\n");
    printf("• Punctuation,spaces,special symbols cannot be used\n");
    printf("• Variables are case sensitive\n");
    printf("Examples that are valid:\n1._abc,2._simple_interest,3.num,4.InTel(valid)\tetc.\n");
    printf("Examples of invalid variables are:\n1.auto(since it is a keyword),\t2.$apple(since it has a special character),\t3.opp pop(since it has space)\t4.#(cannot have special symbols)\tetc.\n");
    printf("\n");
    printf("Declaration :\n");
    printf("Each variable that are used in program must be declared. It is nothing but creating a variable.\n");
    printf("Declaration of same variable is not allowed in programming.\n");
    printf("Examples:int num,char str[50], etc.\n");
    printf("\n");
    printf("Assignment :\n");
    printf("The declared variable can be assigned a value bu using '='operator. The values can be assigned any number of times in programming. Old value will be replaced by new value.This is called assignments.\n");
    printf("Examples:\n1.age=18,2.num=100\n");
    printf("Intialization :\n");
    printf("The declaration of variables be the assigned value at the declaration time is called initalization.later the assigned value can be changed\n");
    printf("Examples:\n1.int age=18,2.int num=100\n");
}
int learn3() //constants
{
    system("clear");
    printf("Constants :\n");
    printf("    \tConstants is a fixed value assigned to a variable which cannot be modified in a program. In C program constants is declared by using a keyword const.\n");
    printf("\nExamples :\n1.const int a=3.14, const char letter='N'.\n");
    printf("Types of constants are follows:\n");
    printf("    • Integer constant\n");
    printf("    • Real or floating point constant\n");
    printf("    • Octal and hexadecimal constants\n");
    printf("    • Character constants\n");
    printf("    • String constant\n");
    printf("\n Integer constants :\n");
    printf("    Integer constants are whole number without any fractional part. Thus integer constant consist of a sequence of digits.\n Integer constant can be written in three different number systems:\nDecimal, Octal and hexadecimal.\n");
    printf("\n Decimal integer constant :\n");
    printf("    \tThese consist of any combinations of digits taken from the set 0 through 9.");
    printf("If the decimal constant consist of two or more digits,the first digit must be something other than 0. \n");
    printf("The following valid examples are introduced:\n0,462,-82 etc\n");
    printf("\n Real or floating point constant:\n");
    printf("     \tThese constants must have  the digits along with the decimal point and it can  be either positive or negative.\n");
    printf("Examples :3.142, 4.35, -1.234 etc\n");
    printf("\n Octal constants :\n");
    printf("     \tAn Octal integer constants can consist of any combination of digits the set 0 through 7. However, the fist digit must be 0,in order to identify the constants as an octal number.\n");
    printf("Examples :012, 0555, 012 etc.\n");
    printf("\n Hexadecimal constants :\n");
    printf("    \tA hexadecimal integer  constant must begin either 0x or ox.It can then be followed by any combinations of digits taken from set 0 through 9 and A through F(either uppercase or lowercase).\n");
    printf("The following valid hexadecimal integer constants.\nExamples :0x0, -0x55, -0x12 etc.\n");
    printf("\n Character constant :\n");
    printf("     \tThese constant are single alphabet, single digit or single special symbol enclosed within single quotes.\n");
    printf("Example :'a','7','@'etc.\n");
    printf("\n String constants :\n");
    printf("These constants are single alphabet single digit or single special alphabet(s), single or several digit(s) or single several special symbols or combination of these enclosed within double quotes.\n");
    printf("Example :'a@34','745','sony' etc.\n");
}
int learn4() //operators
{
    system("clear");
    printf("\n------ Operators ------\n");
    printf("\n  Operators in c are the symbols, which are used to perform operations i.e operators specify the operations to be performed.\n");
    printf("\n    • operands are the data upon which operators act.\n");
    printf("\n\n the operators in c are classified based on :\n");
    printf("      i) the number of operands an operator acts upon.\n");
    printf("     ii) the type of operations the operator performs.\n");
    printf("\n Based on the number of operands on operator has :\n");
    printf("->unary operators\n->binary operators\n->turnary operators\n->special operators\n ");
    printf("\nBased on the type of operators :\n ");
    printf("->arithmetic operators\n ->assignment operator\n ->increment/decrement operator\n ->relational operator\n ->logical operator\n ->conditional operator\n ->bitwise operator\n ->special operator\n ");
    printf("\n Types of operators :\n");
    printf("    |-->arithmetic operators(+,*,-,/,%)\n");
    printf("    |\n");
    printf("    |-->relational operators(<,>,<=,>=,==,!=)\n");
    printf("    |\n");
    printf("    |-->increment/decrement operators(++,--)\n");
    printf("    |\n");
    printf("    |-->logical operators(&&,||,!)\n");
    printf("    |\n");
    printf("    |-->assignment operators(=,+=,-=,*=,/=,%=)\n");
    printf("    |\n");
    printf("    |-->conditional operators(?:)\n");
    printf("    |\n");
    printf("    |-->bitwise operators(&,|,^,<<,>>)\n");
    printf("    |\n");
    printf("    |-->special operators(',-operator','size operator','address operator')\n");
    printf("\n Arithmetic operators :\n");
    printf("    • Arithmetic operators perform the usual arithmetic operators in a c program");
    printf("\n  ___________________________________________________________\n");
    printf("  | operators       | meaning                               |\n");
    printf("  |_________________|_______________________________________|\n");
    printf("  | +               |   addition or unary operation         |\n");
    printf("  | -               |   subtraction or unary operation      |\n");
    printf("  | *               |   multiplication                      |\n");
    printf("  | /               |   division                            |\n");
    printf("  | %%              |   modulo division( returns remainder  |\n");
    printf("  |_________________|_______________________________________|\n");
    delay_loop(20);
    printf("\n Example : program to demonstrate the working of arithmetic operators\n");
    printf("\n/* program to illustrate the working of arithmetic operators */\n");
    printf(" #include<stdio.h>\nvoid main()\n{\n  int a=9, b=4, c;\n  c=a+b;\n  printf(\"a+b=\%%d\\n\",c);\n  c=a+b;\n  printf(\"a-b=\%%d\\n\",c);\n  c=a*b;\n  printf(\"a*b=\%%d\\n\",c);\n  c=a/b;\n  printf(\"a/b=\%%d\\n\",c);\n  c=a%b;\n  printf(\"Remainder when a divided by b=\%%d\\n\",c);\n}\n");
    printf("\n Relational operators :\n");
    printf("    • Relational operators are used to find the relational between two operands.\n");
    printf("    • The output relational expression is either true(1) or false(0).");
    printf("    • The two operational may be constants, variables or expressions.");
    printf("\n  ____________________________________________________________________________________________________________________________________________________\n");
    printf("  | operators | operation      | usage  |             operations performed                                                                            |\n");
    printf("  |___________|________________|________|_____________________________________________________________________________________________________________|\n");
    printf("  | >         | lesser that    | a>b    | if a is lesser than b, then it gives the result true(1).otherwise gives the result false(0)                 |\n");
    printf("  | <=        |lesser or equal | a<=b   | if a is lesser then or equal to b, then it gives  the result true(1),otherwise gives the result false(0)    |\n");
    printf("  | >         | greater than   |  a>b   | if a is greater than b, then it gives the result true(1).otherwise gives the result false(0)                |\n");
    printf("  | >=        |greater or equal| a>=b   | if a is greater then or equal to b, then it gives  the result true(1),otherwise gives the result false(0)   |\n");
    printf("  | ==        |  equal to      | a==b   | if a is equal to be, then it give the result true(1)                                                        |\n");
    printf("  | !=        |  equal to      | a!=b   | if a is not equal to be, then it give the result true(1), otherwise gives result false (0)                  |\n");
    printf("  |___________|________________|________|_____________________________________________________________________________________________________________|\n");
    printf("\n Example :program to illustrate the use of relational operators is given below.\n");
    printf("/*program to illustrate the use of relational operators */\n");
    printf(" #include<stdio.h>\nvoid main()\n{\n  int a=50, b=10;\n  if(a>b)\n   {\n   printf(\"a is greater then b\");\n   }\n}\n");
    printf("   output :\na is greater than b\n");
    printf("\n Logical operators :\n");
    printf("    • Logical operators is also called as connectors since they are used to connect(join) relational expression.\n");
    printf("    • Logical operators produced either true(1) or false(0) as result \n");
    printf("\n  ____________________________________________________________________________________________________________________________________________________\n");
    printf("  | symbols   | logical        | usage  |             operations performed                                                                            |\n");
    printf("  |___________|__operators_____|________|_____________________________________________________________________________________________________________|\n");
    printf("  | &&        | AND            | a&&b   | if both a and b are true, then it gives the result true(1). otherwise gives the result false(0)             |\n");
    printf("  | <=        |lesser or equal | a||b   | if either a or b is true, then it gives the result true(1). otherwise gives the result false(0)             |\n");
    printf("  | >         | greater than   |  !a    | if a is true(1) the NOT a gives false(0) if a is false the NOT a is true                                    |\n");
    printf("  |___________|________________|________|_____________________________________________________________________________________________________________|\n");
    printf("\n");
    printf("\n Truth table :\n");
    printf("\n___________________________________________\n");
    printf("| r1   | r2   |r1&&r2 |r1||r2| !r1 | !r2  |\n");
    printf("|______|______|_______|______|_____|______|\n");
    printf("| 0    |  0   |  0    |   0  |  1  |  1   |\n");
    printf("| 0    |  1   |  0    |   1  |  1  |  0   |\n");
    printf("| 1    |  0   |  0    |   1  |  0  |  1   |\n");
    printf("| 1    |  1   |  1    |   1  |  0  |  0   |\n");
    printf("|______|______|_______|______|_____|______|\n");
    printf("\n true is represented by 1 and false is represented by 0\n");
    delay_loop(20);
    printf("\n General usage :\n");
    printf("Relational expression connector relational expression.\nexample:((a>b)||(a>c))");
    printf("\nExample: program to illustrate logical operators\n");
    printf("/*program to illustrate logical operators*/\n");
    printf("#include<stdio.h>\nvoid main()\n{\n int a=9,b=6,c=3;\n if((a>b)&&(a>c))\n {\n   printf(\"a is greater than b and c\");\n }\n}\n");
    printf("Output:\n a is greater than b and c");
    printf("\n Assignment Operators :\n");
    printf("     • The '=' is the assignment operator, it is used to assign a constant to the variable.\n");
    printf("syntax:\n   variable=constant;\n   variable=variable;\n   variable=expression;\n");
    printf("example :      (variable)<- a         =          100 ->(constant)   ;\n");
    printf("                                      |\n");
    printf("                                (assignment)           \n\n");
    printf("\n               (variable)<- a         =          100 ->(variable)   ;\n");
    printf("                                      |\n");
    printf("                                  (assignment)           \n\n");
    printf("\n               (variable)<- a         =          100 ->(variable)   ;\n");
    printf("                                      |\n");
    printf("                                  (assignment)           \n\n");
    printf("compound assignment operator :\n");
    printf("\n_______________________________________________________________________________________________\n");
    printf("|operator  |statement  |long form  |meaning                                                   |\n");
    printf("|  +=      | x+=100    |x=x+100    |x+100 is first completed and that result is assigned to x |\n");
    printf("|  -=      | x-=100    |x=x-100    |x-100 is first completed and that result is assigned to x |\n");
    printf("|  *=      | x*=100    |x=x*100    |x*100 is first completed and that result is assigned to x |\n");
    printf("|  /=      | x/=100    |x=x/100    |x/100 is first completed and that result is assigned to x |\n");
    printf("|  %%=     | x%%=y     |x=x%%y     |x%%y is first completed and that result is assigned to x  |\n");
    printf("|__________|___________|___________|__________________________________________________________|\n");
    printf("\n Increment /Decrement operator :\n");
    printf("     •Increment operator(++) is used to add 1 to its operand and decrement operator(--) is used to subtract 1 from its operand\n");
    printf(" Examples:\nI)++a;<-->a=a+2;\t--a<-->a=a-2;\n");
    printf("\nPre-increment operator:                            |Post-increment operator                           \n");
    printf("x=++a<=>a=a+1;increment by 1 or x=a;assignment     |a=a++<=>x=a;assignment or a=a+1increment by 1     \n");
    printf("example :program to illustrate pre-increment       |example :program to illustrate post incrementation\n");
    printf("\npre-increment:\n#include<stdio.h>\nvoid main()\n{\n int a=50,b=++a;\n printf(\"a=%%d,b=%%d\\n\",a,b);\n}\n\noutput:\na=51,b=51;\n");
    printf("\npost-increment:\n#include<stdio.h>\nvoid main()\n{\n int a=50,b=a++;\n printf(\"a=%%d,b=%%d\\n\",a,b);\n}\n\noutput:\na=51,b=50;\n");
    printf("\nPre-decrement operator:                            |Post-decrement operator                           \n");
    printf("x=--a<=>a=a-1;decrement by 1 or x=a;assignment     |a=a++<=>x=a;assignment or a=a-1decrement by 1     \n");
    printf("example :program to illustrate pre-decrement       |example :program to illustrate post decrement\n");
    printf("\npre-decrement:\n#include<stdio.h>\nvoid main()\n{\n int a=50,b=--a;\n printf(\"a=%%d,b=%%d\\n\",a,b);\n}\n\noutput:\na=49,b=49;\n");
    printf("\npost-decrement:\n#include<stdio.h>\nvoid main()\n{\n int a=50,b=a--;\n printf(\"a=%%d,b=%%d\\n\",a,b);\n}\n\noutput:\na=49,b=50;\n");
    printf("\n Conditional operator :\n");
    printf("     • Conditional operator(?:) is a ternary operator\n");
    printf("general form :\n\t\t expression.1?expression.2:expression.3\n");
    printf("\n example:\nexpression.1-> x>50?y=10:y=10<-expression.3\n");
    printf("                       |   \n");
    printf("                   expression.2\n");
    printf("\n expression.2---->expression.1<----expression.3\n");
    printf("              true             false\n");
    printf("\nprogram to illustrate conditional operators:");
    printf("\n#include<stdio.h>\nvoid main()\n{\n int a=9, b=19,c;\n a>b?c=99:c=1991;\n printf(\"%%d\",c);\n}\n\noutput:1991\n");
    printf("\nBitwise operator :\n");
    printf("     •Bitwise operator are the operators which act on the individual bits of the data stored in memory of computer.\n");
    printf(" consider the c language statements :\n int a //provides 2bytes in memory\n a=14 //places the data (14 into the reserved bytes in language form\n ");
    printf("\n ________________________________          ________________________________\n");
    printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |          | 0 | 0 | 0 | 0 | 1 | 1 | 1 | 0 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n");
    printf("\n   15  14  13  12  11  10   9   8              7   6   5   4   3   2   1   0\n");
    printf("  2   2   2   2   2   2    2   2              2   2   2   2   2   2   2   2  \n");
    printf("\n\n     0     1     2      3      4\n");
    printf("  0*2 + 1*2 + 1*2 +  1*2 +  0*2\n");
    printf("\n   0 +  2 +   4  +   8  +   0  =14\n");
    delay_loop(20);
    printf("\n___________________________________________________________________________________________________________________________________\n");
    printf("|operator  |statement  |long form  |meaning                                                                                        |\n");
    printf("|  BW-AND  |    &      |a&b        |it performs bitwise  AND. If both the the corresponding bits is 1 then result is l else 0      |\n");
    printf("|  BW-OR   |    |      |a|b        |it performs bitwise OR. If either of the bit is 1 than result is 1 else the result is false    |\n");
    printf("|  BW-XOR  |    ^      |a^b        |it performs bitwise XOR. If corresponding bit are different then the resultant bit is 1. else 0|\n");
    printf("|  LS OP   |    <<     |a<<2       |Data variable is shifted left by 2 position                                                    |\n");
    printf("|  RS OP   |    >>     |a>>2       |Data variables is shifted right by two variables                                               |\n");
    printf("|  1'S CP  |    ~      |~a         |If the corresponding bit is 0 then the result is made 1 and vice-versa                         |\n");
    printf("|__________|___________|___________|_______________________________________________________________________________________________|\n");
    printf("\nBitwise AND operator :\n in this both the corresponding bits 1 then the resultant is 1 else 0.\n");
    printf("\n ________________________________          ________________________________\n");
    printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |          | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 1 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n    a=9\n");
    printf(" ________________________________          ________________________________\n");
    printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |          | 0 | 0 | 0 | 0 | 0 | 1 | 1 | 1 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n    b=7\n");
    printf(" ________________________________          ________________________________\n");
    printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |          | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n    a&b=1\n");
    printf("\nBitwise OR operator :\nin this if at least one of the corresponding bits is 1 then the result is 1 else it is 0.");
    printf("\n ________________________________          ________________________________\n");
    printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |          | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 1 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n    a=9\n");
    printf(" ________________________________          ________________________________\n");
    printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |          | 0 | 0 | 0 | 0 | 0 | 1 | 1 | 1 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n    b=7\n");
    printf(" ________________________________          ________________________________\n");
    printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |          | 0 | 0 | 0 | 0 | 1 | 1 | 1 | 1 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n    a&b=15\n");
    printf("\nBitwise XOR(^) :\n in this if the corresponding bit is different then the result is 1 else 0.\n");
    printf("\n ________________________________          ________________________________\n");
    printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |          | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 1 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n    a=9\n");
    printf(" ________________________________          ________________________________\n");
    printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |          | 0 | 0 | 0 | 0 | 0 | 1 | 1 | 1 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n    b=7\n");
    printf(" ________________________________          ________________________________\n");
    printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |          | 0 | 0 | 0 | 0 | 1 | 1 | 1 | 0 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n    a&b=14\n");
    printf("\nLeft shift operator(<<) :\n it is used to shift the bit by the specified number of position to the left,its general from is:\n a<<num;\n");
    delay_loop(20);
    printf("it means that the bits in the variable 'a' must be shifted to the left by number of positions.\n");
    printf("\n ________________________________          ________________________________\n");
    printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |          | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 1 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n    a=9\n");
    printf(" ________________________________          ________________________________\n");
    printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |          | 0 | 0 | 0 | 1 | 0 | 0 | 1 | 0 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n    a<<1\n");
    printf("while shifting the final bit is discarded and every bit is shifted backward vacant place is filled by 0.\n");
    printf("\nRight shift operator(>>) :\n it is used to shift the bit by the specified number of position to the right,its general from is:\n a>>num;\n");
    printf("it means that the bits in the variable 'a' must be shifted to the right by number of positions.\n");
    printf("\n ________________________________          ________________________________\n");
    printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |          | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 1 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n    a=9\n");
    printf(" ________________________________          ________________________________\n");
    printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |          | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 1 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n    a>>1\n");
    printf("while shifting the vacant bit is filled by 0 and every bit is shifted forward the initial bi is discarded.\n");
    printf("\nOne's complement(~) : it is a bitwise operator which changes the bit with the value 1 to 0 and vice versa.\n");
    printf("\n ________________________________          ________________________________\n");
    printf("| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |          | 0 | 0 | 0 | 0 | 1 | 0 | 1 | 0 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n    a=10\n");
    printf(" ________________________________          ________________________________\n");
    printf("| 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 |          | 1 | 1 | 1 | 1 | 0 | 1 | 0 | 1 |\n");
    printf("|___|___|___|___|___|___|___|___|          |___|___|___|___|___|___|___|___|\n    a>>1\n");
    delay_loop(20);
    printf("\nSpecial operators in c:\n");
    printf("\n                                              special operators in c\n");
    printf("        ____________________________________________________|_________________________________________________________\n");
    printf("        |                       |                           |                           |                            |\n");
    printf("size of operator        comma operator              address of operator         reference operator           dot operator\n");
    printf("\nSize of the operator which gives the number of bytes allocated for a variable or a data type\n");
    printf("general form:\nsizeof(datatype); sizeof(variable);\n");
    printf("consider: char a; int b; float c; double d;\nthen sizeof(a)->output is 1;\nsizeof(b)->output is 2;\nsizeof(c)->output is 4;\nsizeof(d)->output is 8;\n");
    printf("\n Comma operator(,) is an operator which promotes compactness of code is used to combine many different statements into a single statement\n");
    printf("examples without using comma operator :\nint a;\nint b\ntemp=p;\np=q;\nq=temp\n");
    printf("examples using comma operator:\nint a,b,c,d;\ntemp=p,p=q,q=temp;\n");
    printf("\n     •Address operator(&) :\nit is used to obtain the address of variable\n");
    printf("\n     •De-reference operator(*) is used in pointer\n ");
    printf("\n     •Dot operator (•)operator is also called as the member access operator. It is used to access the members of structure\n");
    printf("\nPrecedence and Associativity :\n");
    printf("\n     •Precedence tells about the order in which the different operator can be evaluated in the expression\n");
    printf("\n     •associativity tells about the order in which the operators with the same precedence can be evaluated.\n ");
    printf("\n  __________________________________________________________________\n");
    printf("  | operators       |precedence  highest precedence | associativity|\n");
    printf("  |_________________|_______________________________|______________|\n");
    printf("  | ( ) [ ]         |   innermost brackets          |left to right |\n");
    printf("  | unary operators |   ++,--,!,sizeof,~,+,-,&      |right to left |\n");
    printf("  |arithmetic       |   +,/,*,/,%%                  |left to right |\n");
    printf("  | shift operators |   <<,>>                       |left to right |\n");
    printf("  |relational       |   <,>,<=,>=                   |left to right |\n");
    printf("  |equal to !equal  |   =,!=                        |left to right |\n");
    printf("  | bitwise AND     |   &                           |left to right |\n");
    printf("  | bitwise OR      |   |                           |left to right |\n");
    printf("  | bitwise XOR     |   ^                           |left to right |\n");
    printf("  | logical AND, OR |   ||,&&                       |left to right |\n");
    printf("  | conditional     |   ?                           |left to right |\n");
    printf("  |assignment       |=,+=,-=,*=,/=,%%=,&=,|=,<<=,>>=|left to right |\n");
    printf("  |_________________|_______________________________|______________|\n");
    delay_loop(20);
    return 0;
}
int learn5() //strings
{
    system("clear");
    printf("\n**********  STRING  **********                       \n");
    printf("\n•String is an array of character or a pointer to a portion of memory containing ASCII character\n ");
    printf("\n•String can also be defined as sequence of zero or more character followed by a NULL '\0'character. ");
    printf("\n•character type of value are enclosed in single quotes.\n\n     •string type values are enclosed by double quotes.\nexample: \"a\" is a string value\n");
    printf("\nDeclaring a variable\n");
    printf("syntax: char string_name[string_size]\nwhere ,\n     •char is a data type of string.\n     •string_name is name for string variable.\n     •string_size is length of string which is to be stored.\n    ->string_size is the length of string i.e no. of characters stored in the string (excluding NULL character)\n ");
    printf("example: char name[21];\n->here 20 character are stored by character and 1 space is filled by the NULL making the end of the string\n");
    printf("string initialization of string :\nchar name [11]={'p','r','a','k','h','y','a','t','h','\0'};\n");
    printf("char name[11]=\"prakayath\";\n");
    printf("     •Both are same, if we specify characters separately we should'' for each character and finally enclosing all the character within the braces {} and if we directly specify the entire string at one time we use "
           "\n ");
    printf("\nIn the above example: \nchar name[11]={'p','r','a','k','h','y','a','t','h','\0'};\n name[0] holds 'p' name[1] holds 'r' name[2] hods 'a'so on name[9] holds the '\0'\n remaining memory is wasted.\n");
    printf("consider the example :\n char name[11]=\"prakhayath\"\n");
    printf("Here string is initialized as a unit, and null character supplied by the compiler automatically. \n");
    printf("The values is stored in these two strings as identical.\n");
    printf("\nString input/output functions :\n");
    printf("\n                                    string i/o functions                            \n");
    printf("        _______________________________________|______________________________________\n");
    printf("        |                                                                            |\n");
    printf("    formated                                                                     un-formated\n");
    printf("        |                                                                            |\n");
    printf("        |-->printf -for output                                                       |-->puts-for output\n");
    printf("        |-->scanf -for input                                                         |-->gets-for input\n");
    printf("\n\n/* program to illustrate formated I/O for strings */\n");
    printf("\n#include<stdio.h>\nvoid main()\n{\n char name[20];\n printf(\"enter Name :\");\n scanf(\"%%s\",name);\n printf(\"your name is %%s\",name);\n}\n");
    printf("output :\nenter name: prakhayath\nyourname is prakhayath.\n");
    printf("\n\n/* program to illustrate un-formated I/O for strings */\n");
    printf("\n#include<stdio.h>\nvoid main()\n{\n char name[20];\n printf(\"enter Name :\");\n gets(name);\n printf(\"your name is :\");\n puts(name)\n}\n");
    printf("output :\nenter name: prakhayath\nyourname is prakhayath.\n");
    printf("\n\narray of strings /multidimensional strings :\n");
    delay_loop(20);
    printf("     •The two dimensional character array which consist of strings as its individual elements,is said to be an array of string \nsyntax:\n  char string_name[size_of_rows][size_of_cols];\n ");
    printf("example:char names[3][10];\n initialization:\nchar day[7][10]={\"sunday\",\"monday\",\"tuesday\",\"wednesday\",\"thursday\",\"friday\"}\n");
    printf("\n   0   1   2   3   4   5   6   7   8   9   ");
    printf("\n ________________________________________\n");
    printf("0| s | u | n | d | a | y |\\0 |   |   |   |\n");
    printf(" |___|___|___|___|___|___|___|___|___|___|\n");
    printf("1| m | o | n | d | a | y |\\0 |   |   |   |\n");
    printf(" |___|___|___|___|___|___|___|___|___|___|\n");
    printf("2| t | u | e | s | d | a | y |\\0 |   |   |\n");
    printf(" |___|___|___|___|___|___|___|___|___|___|\n");
    printf("3| w | e | d | n | e | s | d | a | y |\\0 |\n");
    printf(" |___|___|___|___|___|___|___|___|___|___|\n");
    printf("4| t | h | u | r | s | d | a | y |\\0 |   |\n");
    printf(" |___|___|___|___|___|___|___|___|___|___|\n");
    printf("5| f | r | i | d | a | y |\\0 |   |   |   |\n");
    printf(" |___|___|___|___|___|___|___|___|___|___|\n");
    printf("6| s | a | t | u | r | d | a | y |\\0 |   |\n");
    printf(" |___|___|___|___|___|___|___|___|___|___|\n");
    printf("\n memory is created for the above initialization as illustrated\n");
    printf("     •The above initialization creates 7 rows and 10 columns using which different strings are stored in day array as shown \n");
    printf("     •Last character of each string is always NULL character '\0'\n");
    printf("     • day[0] contains first i.e \"sunday\"\n");
    printf("       day[1] contains second i.e \"monday\"\n");
    printf("                    .                       \n");
    printf("                    .                       \n");
    printf("                    .                       \n");
    printf("       day[6] contains second i.e \"saturday\"\n");
    printf("\n\nString Manipulation function:\n");
    printf("1.strlen():to find the length of the string\n2.strcpy():is the copy string with another\n3.strncpy():copy the string up to an length\n4.strcmp():compare of two strings case sensitive\n5.stricmp():compare of tow strings not case sensitive\n");
    printf("6.strcmp():compare the two string upto the lengths\n7.strincmp():compare of two strings up to their length not case sensitive\n8.strlwr():it convert upper case character into lower case\n9.strupr()it convert lowercase letter into uppercase\n");
    printf("10.strcat():this will combine two strings to make one sentence\n11.strrev():reversing the string the string\n12.strset():replacing the characters by symbols\n13.strnset():replacing the character by symbols upto length specified\n");
    printf("\n\n  This is a brif representation of string. \n");
    delay_loop(20);
}

int learn6() //Branching and looping
{
    system("clear");
    printf("if-else contrd construct :\n");
    printf("• Is used to execute one set of statement if the condition is true and another set of statement if the condition is false.\n");
    printf("syntax :\nif(condition)\n{\n statement a;\n}\nelse\n{\n statement b;\n}\n");

    printf("                  | \n");
    printf("                  /\\              \n");
    printf("                 /  \\             \n");
    printf("         true   /    \\ false\n");
    printf("        _______/condi \\________\n");
    printf("        |      \\  ?   /       | \n");
    printf("        |       \\    /        |\n");
    printf("        |        \\  /         |\n");
    printf("        |         \\/          |\n");
    printf("        |                      |\n");
    printf("    ____|_________         ____|_________\n");
    printf("      |statement.a |         |statement.b |\n ");
    printf("      |____________|         |____________|\n");
    printf("        |__________________________|\n ");
    printf("                    |\n ");
    printf("                    O \n");
    printf("example program to check if the given number is even or odd.\n ");
    delay_loop(20);
    printf("algorithm : to check even or odd\n");
    printf("step 1:[read the number]\n       input n \nstep 2:[check if the number is even or odd]\n     if(n%2==0)\n       {\n      output\"even number\"\n       }\nstep 3:[finished]\n      stop\n");
    printf("flow chart:\n");
    printf("                    ____________      \n   ");
    printf("                   (____start___)   \n");
    printf("                     ______|_____\n");
    printf("                    /__input n__/ \n  ");
    printf("                           |\n");
    printf("                           /\\              \n");
    printf("                          /  \\             \n");
    printf("                         / if \\ false\n");
    printf("                        /n%%2==0\\________\n");
    printf("                        \\  ?   /       | \n");
    printf("                         \\    /        |\n");
    printf("                          \\  /         |\n");
    printf("                           \\/          |\n");
    printf("                            |           |\n");
    printf("                      ______|_______    | \n");
    printf("                     /printf\"even\"/   |  \n");
    printf("                    /__number______/    |\n");
    printf("                            |<----------|\n ");
    printf("                     _______|_____\n ");
    printf("                    (______stop___)\n\n");
    printf("/* program to check even number */ \n");
    printf("#include<stdio.h>\nvoid main()\n{\n int n;\n clrscr();\n printf(\"enter the number\");\n scanf(\"%%d\",&n);\n if(n%2==0)\n {\n printf(\"even number\");\n }\ngetch();\n}\n\n");
    printf("the output1 :\t\t\tthe output2:\nenter the number:10\t\tenter the number\neven number\n\n");
    printf(" Program to find biggest of three numbers\nAlgorithm : To find the largest number\n");
    printf("step1:[read 3 different number as input]\n    input a,b,c\nstep2:[find the largest of 3 numbers]\n    if(a>b)\n   {\n\n     if(a>c)\n     {\n     printf \"a largest\"\n      }\n     else\n      {\n     if(b>c)\n       }\n     else\n      printf\"c largest\"\n     }\nstep3:[finished]\n       stop\n");
    printf("\nProgram to find the largest of three numbers\n");
    printf("\n #include<stdio.h>\nvoid main()\n{\n int a,b,c; clrscr(); printf(\"enter 3 different numbers\"\n scanf(\"%d%d%d\",&a,&b,&c);\n if(a>b&&a>c)  {\n   printf(\"a number is largest\");\n else if(b>a&&b>c)\n  {\n   printf(\"b is largest\");\n  else\n  {\n  printf(\"cis largest\");\n  }\ngetch();\n}\n");
    printf("\nnested if else control construct:\n");
    delay_loop(20);
    printf("• is used to execute one set of many sets of statements depending upon the outcome of the condition\nit consist if if else control condtruct with in another if or else control construct and hence the\n");
    printf("syntax:\nif(condition 1)\n{\n statement a;\n}\nelse if(condition 2)\n {\n statement b;\n }\n .\n .\n .\nelse if(condition n)\n{\n statement n;\n}\nelse\n{\n default statement;\n}\n");
    printf("                           |\n");
    printf("                           /\\              \n");
    printf("                          /  \\             \n");
    printf("                         / if \\ false   ______________\n");
    printf("                        /cond:1\\------->|statement a |---|\n");
    printf("                        \\  ?   /        |____________|   |\n");
    printf("                         \\    /                          |\n");
    printf("                          \\  /                           |\n");
    printf("                           \\/                            |\n");
    printf("                            |                             |\n");
    printf("                           |                             |\n");
    printf("                           /\\                            |\n");
    printf("                          /  \\                           |\n");
    printf("                         / if \\ false    ____________    |\n");
    printf("                        /cond:2\\-------->|statement b|-->o\n");
    printf("                        \\  ?   /         |___________|   |\n");
    printf("                         \\    /                          |\n");
    printf("                          \\  /                           |\n");
    printf("                           \\/                            |\n");
    printf("                            |                             |\n");
    printf("                            *                             *\n");
    printf("                            *                             *\n");
    printf("                            *                             *\n");
    printf("                           |                             |\n");
    printf("                           /\\                            |\n");
    printf("                          /  \\                           |\n");
    printf("                         / if \\ false    ____________    |\n");
    printf("                        /cond:n\\-------->|statement b|-->o\n");
    printf("                        \\  ?   /         |___________|   |\n");
    printf("                         \\    /                          |\n");
    printf("                          \\  /                           |\n");
    printf("                           \\/                            |\n");
    printf("                    ________|_______                      |\n");
    printf("                    | default stat|                       |\n");
    printf("                    |_____________|                       |\n");
    printf("                           |                              |\n");
    printf("                           |----------->o<----------------|\n");
    printf("                                        |                 \n");
    printf("\nexample:program to find the biggest of three numbers \n");
    printf("Algorithm to find the largest of three numbers                    ____________      \n ");
    printf("step 1:[read 3 different number]                                 (____start___)   \n");
    printf("          input a,b,c                                             _____|_______\n");
    printf("[find the largest of three numbers]                              /__input n___/ \n ");
    printf("if (a>b&&a>c)                                                          |\n");
    printf("{                                                                      /\\\n");
    printf("printf\"a is largest\" ;  }                                           /  \\\n");
    printf("else if(b>a&&b>c)                                                    / if \\ false\n");
    printf(" printf(\"b is largest\");                                          /cond:n\\----|\n ");
    printf("else                                                               \\  ?   /     |\n");
    printf("printf\"c is largest\"                                              \\    /      | \n");
    printf("step 3:[finished]                                                     \\  /      |\n");
    printf("stop                                                                   \\/       |\n");
    printf("                                                                        |--------| \n");
    printf("                                                                        | \n");
    printf("                                                                       /\\              \n");
    printf("                                                                      /  \\             \n");
    printf("                                                              true   /    \\ false\n");
    printf("                                                             _______/condi \\________\n");
    printf("                                                             |      \\  ?   /       | \n");
    printf("                                                             |       \\    /        |\n");
    printf("                                                             |        \\  /         |\n");
    printf("                                                             |         \\/          |\n");
    printf("                                                             |                      |\n");
    printf("                                                          ___|_________      _______|______\n");
    printf("                                                         | statement.a |    |  statement.b |\n ");
    printf("                                                         |_____________|    |______________|\n");
    printf("                                                             |_____________________|\n ");
    printf("                                                                        |\n ");
    printf("                                                                        O \n");
    printf("\nSwitch pictorial representation :\n");
    delay_loop(20);
    printf("                    ____________      \n   ");
    printf("                   (____start___)   \n");
    printf("                           |\n");
    printf("                           /\\              \n");
    printf("                          /  \\             \n");
    printf("                         /    \\ \n");
    printf("                        /expres\\\n");
    printf("                        \\  ?   /        \n");
    printf("                         \\    /        \n");
    printf("                          \\  /         \n");
    printf("                           \\/          \n");
    printf("                            |         \n");
    printf("          __________________|__________________\n");
    printf("     _____|___   _____|____   ______|___   ___|_____\n");
    printf("     |state 1|   |state 2 |   |state 3 |   |default|\n");
    printf("     |_______|   |________|   |________|   |_______|\n");
    printf("          |___________|_____________|_________|\n");
    printf("                     _______|_______\n ");
    printf("                    (______stop_____)\n\n\n");
    printf(" ___________________________                ___________________________\n");
    printf(" | if else control construct|               | switch control construct |\n");
    printf(" |__________________________|               |__________________________|\n");
    printf("      ------------------                          ---------------\n");
    printf("      ------------------                          ---------------\n");
    printf("      ------------------                          ---------------\n");
    printf("      ------------------                          ----------------\n");
    printf("             /\\                                 (an integer exp)\n");
    printf("         ___/? \\___                               ----------------\n");
    printf("          | \\  /  |                               |   |   |  |...|\n");
    printf("          |  \\/   |                               |   |   |  |...|\n");
    printf("         ---      ---                            --- --- --- -- ---\n");
    printf("         ---2 path---                            --- --- --- -- ---\n");
    printf("         ---      ---                            --- --- --- -- ---\n");
    printf("          |________|                              |___|___|___|__|\n");
    printf("              |                                           |\n");
    printf("          ----------                              ------------------\n");
    printf("          ----------                              ------------------\n");
    printf("          ----------                              ------------------\n");
    printf("\nWhen the use the various type of if control constructs ?\n");
    printf("• if the statements present in a program are to be executed one after the other (sequential),without skipping any statements then there is no need of a control construct.\n");
    printf("The if-else control construct is used when one route has to be selected out of two possible routs (alternatives).\n");
    printf("The nested if-else control construct or the else if ladder must be used if one rout has to be selected out of many possible routes (alternatives).\n");
    printf("switch control construct must be used if one route has to be selected out of many possible routes (alternatives).\n");
    printf("\n SWITCH CONTROL CONSTRUCT:\n• switch is a control construct which allows us to make a decision out of many differences\n");
    delay_loop(20);
    printf("Syntax :  __________________________________________\n");
    printf("          |          switch(an integer expression) |\n");
    printf("          |           case value1: statement 1;    |\n");
    printf("          |                        break;          |\n");
    printf("          |           case value2: statement 2;    |\n");
    printf("          |                        break;          |\n");
    printf("          |           case value3: statement 3;    |\n");
    printf("          |                        break;          |\n");
    printf("          |           case value4: statement 4;    |\n");
    printf("          |                        break;          |\n");
    printf("          |           default    : statement 5;    |\n");
    printf("          |________________________________________|\n");
    printf("\n/*program to find the largest of three numbers*/\n");
    printf("#include<stdio.h>\nvoid main()\n{\n int a,b,c;\n clrscr()\n printf(\"enter 3 different no.\\n\");\n scanf(\"%d%d%d\",&a,&b,&c);\n if(a>b){\n if(a>c){\n  printf(\"a is largest\");}\n else{\n  printf(\"c is largest\");}\n }\n else{\n  if(b>c){\n  printf(\"bis largest\");}\n else{\n  printf(\"c is largest\");}\n}\n");
    printf("\n Unconditional statements :\n");
    printf("• An unconditional control construct is a control statement which alters the sequential control flow without checking any condition\n");
    printf("                                     _______________________\n");
    printf("                                     |unconditional control|\n");
    printf("                                     |_____________________|\n");
    printf("                   _____________________________|_____________________________\n");
    printf("         __________|______            __________|_________           _________|____________\n");
    printf("        (_goto statement__)           (__break_statement__)          (_construct_statement_)\n\n");
    printf("i) goto control construct :\n• the goto control construct us used to transfer control from one point in the program to another point with checking any condition\n");
    printf("syntax : goto label;\n     goto label;--|\n    statement 1;--|\n    statement 2;--|\n    statement 3;--|\nlabel:statement;<-|\n\n");
    printf("label:statement;<-|\n     goto label;--|\n    statement 1;--|\n    statement 2;--|\n    statement 3;--|\n");
    printf("\nexample :program illustrate use of goto statement\n");
    printf("#include<stdio.h>\nvoid main()\n{\n int i=1; clrscr();\n back: printf(\"PCD\\n\");\n if(i!=5){\n i++;\n goto back;}\n}\n");
    printf("output:\n PCD\n PCD\n PCD\n PCD\n PCD\n \n");
    delay_loop(20);
    printf("\nLooping and Repetition :\n");
    printf("\n• The looping control construct are the control constructs which enable us to perform an activity more than :once fill the condition is true ,ie as long as the condition holds good, the activity is repeatedly executed. once the condition fails, the control flows to the statements outside the body.\n");
    printf("\n• c language has 3 looping control constructs namely:\n i) for loop\n ii) while loop\n iii) do while loop\n");
    printf("\n• for loop\n");
    printf("\n->for loop is entry controlled loop that provides programmer with more concise loop structure.\n");
    printf("syntax:                                                               |\n");
    printf("for(initialization ;testing ;increment/decrement)  ___________________|__________________\n");
    printf(" {                                             |->/__initialization___|      condition   \\-| \n");
    printf(" body of the loop                              |  \\__updation________|___________________/ |   \n");
    printf(" }                                             |                      |                     |  \n ");
    printf("                                               |             _________|________             |\n");
    printf("                                               |             | body of loop   |             |\n");
    printf("                                               |             |________________|             |\n");
    printf("                                               |______________________|                     |\n");
    printf("                                                                      |_____________________|\n");
    printf("                                                                      |\n");
    printf("\n-> Initialization :\n the loop variable is initialized with value when the control enters the for loop.\n");
    printf("\n-> condition :\n it is generally relational expression ,the for loop is executed as long as the test condition is true.\n");
    printf("\n Ternary operator :\n• ternary operator is a combination of ? and : and takes three operands.\n");
    printf("syntax:\n conditional expression ? statement 1: statement 2 ;\n");
    printf("• the conditional expression is evaluated first. if the result is true then statement 1 is executed else statement 2 is executed.\n");
    printf("\nexample :/*program to illustrate ternary /conditional operator */\n");
    printf("#include<stdio.h>\n#include<conio.h>\nvoid main()\n{\n int x,flag;\n clrscr();\n printf(\"enter the value of x\\n\");\n scanf(\"%%d\",&x);\n flag=(x<0)?0:1;\n printf(\"flag value is %%d\\n\",flag);\n getch();\n}\n");
    printf(" output :\n enter value of x\n  9\n flag value is 1\n");
    printf("\nDisadvantage of goto control construct:\n");
    printf("• usage of goto heads to unstructured programming .Hence  a good programming practice.\n• goto is difficult to read and understand\n • indifferent code will be generated by  the compiler\n");
    printf("\nii) break control construct :\n");
    printf("• The break control construct is used basically at 2 places\n-> Inside the body of the switch\n-> Inside the body of a looping control construct,in both cases, the break control construct would take the control out of the respective bodies\n");
    printf("\niii) Continue control construct :\n");
    delay_loop(20);
    printf("\n• During execution of the loop it may be necessary to help a part of loop based on some condition ,continue statement id used in such cases.\n");
    printf("• continue statement when used in loop,terminate the current iteration.\nNote: continue can be used only in loops.\n");
    printf("\n• while loop:                                                 flowchart          \n");
    printf("syntax :                                                      ________|________\n");
    printf("statement x;                                                  | statement x   |\n");
    printf("while(test_condition)                                         |_______________|\n");
    printf("   {                                                                  |\n");
    printf("    statements block;                                                / \\     \n");
    printf(" }                                                                  /   \\    \n");
    printf("statement y;                                           ----------->/condi\\false__\n");
    printf("                                                       |          \\      /      |\n");
    printf("                                                       |           \\    /       |\n");
    printf("                                          _____________|________    \\  /        |\n");
    printf("                                          |update condit expres|     \\/         |\n");
    printf("                                          |____________________|      |          |\n");
    printf("                                                      |      _________|________  |\n");
    printf("                                                      |<-----|statement block |  |\n");
    printf("                                                             |________________|  |\n");
    printf("                                                                       __________|\n");
    printf("                                                           ____________|_________\n");
    printf("                                                           |   statement y      |\n");
    printf("                                                           |____________________|\n");
    printf("\n-> upon entry of control into while test expression is evaluated.\n");
    printf("-> if expression is true (non-zero), statement under while is executed.\n");
    printf("-> the while loop executes the as long as the expression in while statement is true.\n");
    printf("-> body of while loop will not be executed at all if the expression is false at the time of entry itself.\n");
    printf("-> while loop is know as pretest structure because the expression is tested before the body of the loop is executed.\n");
    printf("->a while loop is also referred as top-checking loop since the control condition is placed at the beginning of the loop.\n");
    printf("->the initialization statements is not compulsory. But semicolon must precede the test expression.\n");
    printf("\n/* program to illustrate while loop */\n");
    printf("#include<stdio.h>\n#include<conio.h>\nmain()\n{\n int i;\n clrscr();\n i=0;\n while(i<=5)\n {\n  printf(\"pcd\");\n  i++;\n }\n printf(\"c programming\");\ngetch();\n}\n");
    printf("\noutput:\n pcd\n pcd\n pcd\n pcd\n pcd\n c programming language\n");
    printf("\n do-while loop\n");
    printf("example:\n int i=0;\n for(;i<=5;i++)\n {\n    .\n    .\n    .\n }\n");
    printf("-> more than one variable can be initialized in for statement \n example:\n int i,j;\n");
    printf(" for(i=0;j=1;i<=5;i++)\n          //comma operator is used to separate initialization statements\n");
    printf("-> 2 loop variables can be simultaneously can be updated in for \n example\n int i,j;\n for(i=0,j=0;i<=5;i++,j--)   //two updation simultaneously\n");
    printf("{\n}\n");
    printf("-> only 1 test variable is permitted.\n");
    printf("-> empty for loop with 2 remainder is permitted but executes infinity times \n                ex: for( ; ; )\n");
    printf("counter controlled loop \n");
    printf("-> The body of loop is executed of times\n");
    printf("-> The following procedure is followed for such a loop\n i) counter must be initialized\n ii) test the counter\n iii) update the counter\n");
    printf("-> generally for-loop is used in counter control loops.\n");
    printf("Break and Continue :\n");
    printf("-> break and continue are two unidirectional control contents.\n");
    printf("-> they are called as the undirectional control constructs since they are the sequentially flow without checking any condition.\n");
    printf("-> break control constructs sends the control out of the loop.\n");
    delay_loop(20);
    printf("-> continue control construct sends the control to the beginning of the loop.\n");
    printf("-> break control construct send the control out of the loop where as continue control construct sends the control to the beginning of the loop.\n");
    printf("\n  /* Loop without break and continue*/  || /*Loop with break*/          ||  /* Loop with continue*/           \n");
    printf("  #include<stdio.h>                       ||  #include<stdio.h>           ||  #include<stdio.h>                 \n");
    printf("  #include<conio.h>                       ||  #include<conio.h>           ||  #include<conio.h>                 \n");
    printf("  main()                                  ||  main()                      ||  main()                            \n");
    printf("  {                                       ||  {                           ||  {                                 \n");
    printf("  int i;                                  ||  int i;                      ||  int i;                            \n");
    printf("  clrscr()                                ||  clrscr()                    ||  clrscr()                          \n");
    printf("  for(i=0;i<=3;i++){                      ||  for(i=0;i<=3;i++){          ||  for(i=0;i<=3;i++){                \n");
    printf("   printf(\"ram\");                       ||   printf(\"ram\");break;     ||   printf(\"ram\"); continue;       \n");
    printf("   printf(\"sham\");                      ||   printf(\"sham\");          ||   printf(\"sham\");                \n");
    printf("  }                                       ||  }                           ||  }                                 \n");
    printf("  getch();                                ||  getch();                    ||  getch();                          \n");
    printf("  }                                       ||  }                           ||  }                                 \n");
    printf("  output:                                 ||  output:                     ||  output:                           \n\n\n");
    printf("  ram sham                                ||  ram                         ||  ram                               \n");
    printf("  ram sham                                ||                              ||  ram                               \n");
    printf("  ram sham                                ||                              ||  ram                               \n");
    printf("\n Nesting Loops :\n");
    printf("-> there is no restriction with respect to loops that can be nested.\n");
    printf("-> index value of loops should be different.\n");
    printf("-> inner loop should be enclosed completely within outer loop.\n");
    printf("example: for(i=1;i<=;i++){\n          for(j=1;j<=m;j++){\n         .\n         .\n         .\n           }\n         }\n\n");
    printf("updation :it updates the value of the loop variable after each execution of the body of the loop\n");
    printf("\n/* program to illustrate for statements */\n");
    printf("#include<stdio.h>\n#include<stdlib.h>\nmain()\n{\n int i;\n clrscr();\n for(i=1;i<=5;i++)\n {\n  printf(\"%d\n\",i);\n }\n printf(\"thank you\");\n getch();\n}");
    printf("output:\n   1\n   2\n   3\n   4\n   5\n thank you\n");
    printf("*  variations in for statements\n");
    printf("-> loop variable be a type of int,float,char etc\nexample\n");
    printf("  int i;                    float x;\n  for(i=0;i<=5;i++)         for(x=0;x<=5;x++)\n   {                        {\n   .                        .\n   .                        .\n   .                        .\n   }                        }\n\n");
    printf("Loop control statements are classified based on\n");
    printf("i) pre testing loops and post testing loops \nii) event controlled loops \n");
    printf("Pre-test and Post-test loop:\n");
    delay_loop(20);
    printf("*  pre-test loop :in a looping construct,if  the condition is checked before each iteration of the loop, the loop is called pre-test loop\n-> the expression is evaluate to true/false at the beginning.\n");
    printf("flow char\n");
    printf("                   | \n");
    printf("                  /\\                                                     |                      \n");
    printf("                 /  \\                                 ___________________|__________________    \n");
    printf("                /    \\ false                      |->/__initialization___|      condition   \\--|\n");
    printf("        _______/condi \\________                   |  \\__updation_________|___________________/ |\n");
    printf("        |      \\  ?   /       |                   |                      |                      |\n");
    printf("        |       \\    /        |                   |             _________|________              |\n");
    printf("        |        \\  /         |                   |             | body of loop   |              |\n");
    printf("        |         \\/          |                   |             |________________|              |\n");
    printf("        |         |            |                   |______________________|                      |\n");
    printf("        |   ______|_______     |                                           ______________________|\n");
    printf("        |   |statement.a |     |                                           |\n");
    printf("        |   |____________|     |\n");
    printf("        |_________|  __________|\n");
    printf("                     |\n ");
    printf("                       \n");
    printf("\n-> if the condition is false,the loop is terminated\n-> it is also known as entry controlled loop\n example: for loop and while loop\n");

    delay_loop(20);
    return 0;
}
int learn7() //array and atring
{
    system("clear");
    printf("\n_____________________________ARRAYS______________________________\n");
    printf("An array is the collection of data items of same data, which are stored in consecutive memory location.\n");
    printf("Each value(data item) is an array is indicated by same name\n that is array name and an index which indicates the position of value in an array.");
    printf("\nTypes of array:\n");
    printf("1) One dimensional array.\n2)Two dimensional array.\n3)Multi dimensional array.\n\n");
    printf("ONE DIMENTIONAL ARRAY:\n");
    printf("    *the one dimensional array or single dimensional array is the simplest type of array that contains only one row for storing the values of same type.\n");
    printf("\nDECLARATION OF ONE-DIMENSIONAL ARRAY:\n");
    printf("Syntax:\n");
    printf("    data_type array_name[array_size];\n");
    printf("    where,\n");
    printf("        *data type defines the types of an array or type of the data stored in it.\n ");
    printf("*array name is the name given to represent the array items.\n*array size tells number values that can be stored in an array.\n\nExample: int arr[20];\n");
    printf("\nMemory occupied by one dimensional array:\n         Total memory=array_size*size of(data_type)\nin the above example, int arr[20],\n    arr_size=20\n   data_type is int so size0f(int)=2 bytes(16 bit machine)\n");
    printf("so,total memory=20*2;");
    printf("                =40 bytes\n\nSTRUCTURE OF ONE DIMENSIONAL ARRAY:\n*index for an array for n elements starts zero and end with n-1.\nConsider, int array[arr]\n");
    printf("     _______________________________________________________\n");
    printf("    |array[0]|array[1]|array[2]|array[3]|  ...   |array[n-1]|\n");
    printf("    |________|________|________|________|________|__________|\n");
    printf("        |->holds first element                         |->holds last elements\n\n");
    printf("INITIALIZING ONE DIMANTIONAL ARRAY:\n");
    printf("    *Array can be initialized statically one by one and in a single statement or dynamically using loop statements.\n*Array elements can be initialized at the time of declaration,");
    printf("    syntax:\n");
    delay_loop(20);
    printf("        data_type array_name[array_size]={v1,v2,v3,....vn};\n");
    printf("Here,\n     *data_type is the type of data to be stored in an array, data type can be char,int, float, double or string.\n");
    printf("    *array name is the name given to the array.\n     *array name specifies the number of values given to the array i.e array_size specifies size of the array.\n");
    printf("\nVARIOUS METHODS OF INITIALIZING ONE DIMENTIONAL ARRAY ARE:");
    printf("1)Initializing all specified memory location.\n2)Partial array initialization.\n3)Initializing without size.\n4)string initialization.\n");
    printf("5)Dynamic initialization with for or while loop.\n");
    printf("\n");
    printf("\n1)INITIALIZIN ALL SPECIFIED MEMORY LOCATION:\n");
    printf("consider the example,\n");
    printf("        int a[5]={10,20,30,40,50};\nHere, 5 contiguous memory locations are reserved for array 'a' and all 5 locations are initialized as shown below,\n");
    printf("        ________________________\n");
    printf("       | 10 | 20 | 30 | 40 | 50 |\n");
    printf("       |____|____|____|____|____|\n");
    printf("        a[0] a[1] a[2] a[3] a[4] \n");
    printf("\n2)PARTIAL ARRAY INITIALIZATION:\n Here the number of elements to be stored in an array will be the less then the size specified.\nExample,\n  float a[5]={10.5,2.5};\n");
    printf("    First two locations of the array 'a' will be initialized and left out spaces will be filled with zero's.\n");
    printf("         ________________________\n");
    printf("        | 10.5 | 2.5 | 0 | 0 | 0 |\n");
    printf("        |______|_____|___|___|___|\n");
    printf("          a[0]  a[1] a[2] a[3] a[4] \n");
    printf("\n3)INITIALIZATION WITHOUT SIZE:\nHere, array size is not specified,\nExample:\n        int a[]={10,15,20,25,30};\n");
    printf("    *here though we have not specified the size of the array,\n it will be set to total number of elements to be stored.\n the compiler calculate size of the array using number of elements specified.");
    printf("*For above example 5*2=10 bytes will be reserved and array will be initialized as follows,\n");
    printf("         ________________________\n");
    printf("        | 10 | 15 | 20 | 25 | 30 |\n");
    printf("        |____|____|____|____|____|\n");
    printf("          a[0]  a[1] a[2] a[3] a[4] \n");
    printf("\nARRAY INITIALIZATION WITH STRING:\n");
    delay_loop(20);
    printf("Sequence of characters enclosed within double quotes is called as string.\nString always ends with a NULL character(\\0).\n");
    printf("example:a)char b[]=''COMPUTER'';\n");
    printf("         ______________________________________________________\n");
    printf("        |  C  |  O  |  M  |  P  |  U  |  T  |  E  |  R  |  \\0  |\n");
    printf("        |_____|_____|_____|_____|_____|_____|_____|_____|______|\n");
    printf("         b[0]   b[1]  b[2]  b[3]  b[4]  b[5]  b[6]  b[7]  b[8]\n");
    printf("\n        b)char b[5]=''NAME'';\n");
    printf("         ______________________________\n");
    printf("        |  N  |  A  |  M  |  E  |  \\0  |\n");
    printf("        |_____|_____|_____|_____|______|\n");
    printf("         b[0]   b[1]  b[2]  b[3]  b[4]");
    printf("\n5) DYNAMIC INITIALIZATION WITH FOR OR WHILE LOOP:\nConsider, int arr[rr]; //array declaration\n /*initialization using for loop*/\n");
    printf("for(i=0;i<rr;i++)\n{\nscanf(''%d'',&arr[i]);\n}\n");
    printf("\n");
    printf("\n/*Initialization using while loop*/\ni=0;\nwhile(i<rr)\n{\nscanf(''%d'',&arr[i]);\ni++;\n}\n\n");
    printf("\nTWO DIMWNSIONAL ARRAY:\n    *An array where elements can be stored row wise or column wise is called two dimensional array.\n*a two dimensional array is used to store a table of values of same data type.\n\n");
    printf("\nDECLARATION OF TWO DIMENSIONAL ARRAY:\nsyntax:\n    data_type array_name[row_size][column_size];\nwhere,\n  *data type indicates type of an array or type of data stored in array.\n");
    printf("*array name is the name given to represent the array.\n*row_name defines the size of number rows in the array\n*column_size defines the size of number of columns in the array.\nexample: int array[10][5];\n");
    printf("\nMEMORY OCCUPIED BY TWO DIMENSIONAL ARRAY:\n total memory=row_size*column_size*sizeof(data_type)\n");
    printf("consider the example, int array[10][5];\n   row_size=10\n   column_size=5\n data_type=int, so sizeof(int)=2 bytes\ntotal memory=10*5*2\n        =100bytes\n");
    printf("\nSTRUCTURE OF TWO DIMENSIONAL ARRAY:\n*there are two index values,one for representing position in terms of rows and\n and another for representing position in terms of columns.\n");
    printf("    consider, int array[m][n];\n->here, row index starts from 0 and ends with m-1, where m is the number of rows.\n->column index starts from 0 and ends with n-1,where n is the number of columns,\n\n");
    printf("    array[0][0] holds first elements\n    array[0][1] holds second element\n      .\n      .\n      .\n   array[m-1][n-1] holds last element\n");
    printf("     _________________________________________________________________\n");
    printf("    |array[0][0]  |array[o][1]  |array[0][2]  |  ...  |array[0][n-1]  |\n");
    printf("    |_____________|_____________|_____________|_______|_______________|\n");
    printf("    |array[1][0]  |array[1][1]  |array[1][2]  |  ...  |array[1][n-1]  |\n");
    printf("    |_____________|_____________|_____________|_______|_______________|\n");
    printf("    |   .         |    .        |    .        |   .   |       .       |\n");
    printf("    |   :         |    :        |    :        |   :   |       :       |\n");
    printf("    |_____________|_____________|_____________|_______|_______________|\n");
    printf("    |array[m-1][0]|array[m-1][1]|array[m-1][2]|  ...  |array[m-1][n-1]|\n");
    printf("    |_____________|_____________|_____________|_______|_______________|\n");
    printf("\nINITIALIZATION OF TWO DIMENSIONAL ARRAY:\nSyntax:\n   data_type array_name[row_size][column_size]={{a1,a2,...an},\n\t\t\t\t\t\t{b1,b2,...bn},\n\t\t\t\t\t\t\t.\n\t\t\t\t\t\t\t:\n\t\t\t\t\t\t{z1,z2,...zn}};\n");
    printf("here,\n->data_type can be any data type like char, int,float etc.\n->row size specifies number of rows and column size specifies number columns.");
    printf("->{a1,a2,...an} are values assigned to | row and {b1,b2...bn} are values assigned to || row.\nTYPES OF TWO DIMENSIONAL ARRAY INITIALIZATION:\n\n");
    printf("1)INITIALIZING ALL SPECIFIED MEMORY LOCATIONS:\nConsider,\nint a[4][3]={{11,12,13},{44,55,66},{11,10,9},{33.66.99}};\nHere,4 rows and 3 columns will be reserved for array 'a'and all 4 rows and 4 columns are initialized with same value as shown below,\n");
    delay_loop(20);
    printf("\t\t          0    1    2\n");
    printf("\t\t         ______________\n");
    printf("\t\t     | 0| 11 | 12 | 13 |\n");
    printf("\t\t     |  |____|____|____|\n");
    printf("\t\t     | 1| 44 | 55 | 66 |\n");
    printf("\t\trows |  |____|____|____|\n");
    printf("\t\t     | 2| 11 | 10 | 9  |\n");
    printf("\t\t     |  |____|____|____|\n");
    printf("\t\t     | 3| 33 | 66 | 99 |\n");
    printf("\t\t     V  |____|____|____|\n");
    printf("\t\t         ------------->\n");
    printf("\t\t           columns\n");
    printf("2)PARTIAL ARRAY INITIALIZATION:\n\t*here, number values to be initialized are less then the size of an array.\nthe remaining location will be initialized to zero automatically.\n\t example:\n");
    printf("\tint a[4][4]={{11,12},{33,44},{55,66},{77,88}};\n*Here the array 'a' has 4 rows and 4 columns out of which only first two columns of each row are initialized\n");
    printf("\t\t           ___________________\n");
    printf("\t\t       | 0| 11 | 22 | 0  | 0  |\n");
    printf("\t\t       |  |____|____|____|____|\n");
    printf("\t\t       | 1| 33 | 44 | 0  | 0  |\n");
    printf("\t\t rows  |  |____|____|____|____|\n");
    printf("\t\t       | 2| 55 | 66 | 0  | 0  |\n");
    printf("\t\t       |  |____|____|____|____|\n");
    printf("\t\t       | 3| 77 | 88 | 0  | 0  |\n");
    printf("\t\t       V  |____|____|____|____|\n");
    printf("\t\t             0    1    2    3\n");
    printf("\t\t            ---------------->\n");
    printf("\t\t                 columns\n");
    printf("INITIALIZATION CAN ALSO DONE AS BELOW:\nint a[4][3]={10,11,12,13,14,15,20,21,22,44,55,66};\nint a[][3]={10,80,60,30,5,11,19,20,22,30,33,35};\n");
    printf("Note: While initializing 2D array, it is compulsory to mention the column_size,where as row_size is optional\n\nint a[4][]={10,80,11,14,16,20,30};\nint a[][]={10,80,30,60,70,80};\n");
    printf("Both are illegal because column size is not mentioned\n\n3)USING FOR LOOP TO INITIALIZE THE 2D ARRAY BLOCKS:\n\nint a[4][3];\nfor(i=0;i<4;i++)\n{\nfor(j=0;j,3;j++)\n{\nprintf(''enter the integer'');\nscanf(''%d'',&a[i][j]);\n}\n}\n\n");
    printf("MULTI DIMENSIONAL ARRAY:\n\n*C allows arrays of three or more dimensions ,\n the general form of a multi dimensional array is\n\tdata_type array_name[S1][S2][S3]...[Sn];\n");
    printf("where,\n\t*data_type is the type of items in the array(int,float,char etc)\n\t*array_name is the name to represent the array\n\t->S1 is size of 1 dimension\n\t->S2 is size of 2 dimension\n\t\t.\n\t\t:\n\t->Sn is size of nth dimension\n\n");
    printf("example:\tint survey[3][5][12]; {T0tal memory=3*5*12*sizeof(int)}\n->In the above example array survey may represent a survey data of rain fall during the 3 years from january to december in five cities.\n*if the first index indicates year,the second city and third index month.\n*the three dimensional array can be represented as a series of 2D arrays as shown below,\n\nConsider,\n");
    printf("\tsurvey[2][3][10] ->denotes rain fall month of october during\n\t\t\t\tsecond year in second city\n ");
    printf("\t       |  |  |\n");
    printf("\t       V  |  |\n");
    printf("\t     year |  |\n");
    printf("\t          V  |\n");
    printf("\t       city  |\n");
    printf("\t             V\n");
    printf("\t           month\n\n");
    printf("/*Reading and displaying elements fom a two dimwnsional array*/\n#include<stdio.h>\n#include<conio.h>\nvoid main()\n{\nint array[20][2],m.n,i,j;\nprintf(''enter number of rows and columns'');\n");
    printf("for(i=0:\nprintf(''enter %d array elements'',m*n);\nfor(i=0;i<m;i++)\n{\nfor(j=0;j<m;j++)\n{\nscanf(''%d'',&a[i][j];\n}\n}\nprintf(''array elements are'');\nfor(i=0;i<m;i++)\n{\nfor(j=0;j<n;j++)\n{\nprintf(''%d'',a[i][j]);\n}\n}\ngetch();\n}\n");
    printf("\nOUTPUT:\nenter number of rows and columns\n2\n3\nenter 6 array elements\n11 22 33 44 55 66\narray elements are\n11 22 33\n44 55 66\n");
    printf("/*Program to generate fibonacci series using array*/\n\n#include<stdio.h>\n#include<conio.h>\nvoid main()\n{\nint fib[20],n,i;\nprintf(''enter number of terms to be generated'');\nscanf(''%d'',&n);\nfib[0]=0;\nfib[1]=1;\nprintf(''fibonacci series'');\n");
    printf("for(i=2;i<n;i++)\n{\nfib[i]=fib[i-1]+fib[i-2];\n}\nfor(i=0;i<n;i++)\n{\nprintf(''%d'',fib[i]);\n}\ngetch();\n}\n\nOUTPUT:\nenter number of terms to be generated\n7\nfibonacci series\n0 1 1 2 3 5 8\n\n");
    printf("ADVANTAGES OF ARRAYS:\n*array can be used to store numerous values of the same data type(homogenious data).\n*program is freed from creating many variables.\n\ta single array of required size can be created.\n*reading and writing and to the array is simple.\n\t(loops can be used for this purpose).\n");
    printf("\nDISADVANTAGES OF ARRAYS:\n*a single array cannot store heterogeneous data(data of different type)\narrays demand contiguous memory locations to store data.\n*size of the array has to be mentioned at the begining of the program itself.\nthis may lead to insufficient memory utilization since all reserved spaces may not be utilized.\n");
    printf("*addition and deletion of elements at the middle of the array is problamatic.\n");
    delay_loop(20);
    printf("\n");
    printf("\n");
    printf("____________________________________________STRINGS______________________________________________\n");
    printf("*String is an array of characters or a pointer to a portion of memory containing ASCII character.\n*a string can also be defined as sequence of zero or more characters followed by a NULL '\\0' characters.\n");
    printf("Char type values are enclosed in single quotes.\n\tExample: 'a' is char value.\n*String type values are enclosed in double quotes.\n\tExample:''a'' is string value.\n");
    printf("\nDECLARING STRING VARIABLES:\nSyntax:\n\tchar string_name[string_size];\n\nwhere,\n\t*char is data_type of strings.\n\t*string name is name for string variables\n\t*string_size is length of string which is to be stored.\n\t\t->string_size is the length of string i.e no. of characters stored in the string(excluding NULL character)\n");
    printf("example:char name[21];\n\t->Here, 20 characters can be stored and 1 null character should be appended at the end.\n\nINITIALIZATION OF STRING:\n\nCHAR NAME[11]={'P','R','A','K','H'.'Y','A','T','H','\\0'};\n\t\tOr\nchar name[11]=''PRAKHYATH'';\nBoth are same, if we specify characters seperately we should use' ' for each characters and finally enclosing all the characters within flower braces { },\n");
    printf("and if we directly specify entire string at a time we use '' ''.\n\nin the above example,\n\tchar name[11]={'P','R','K','H','Y','A','T','H','\\0'};\n\t*here string is initialized as a unit, and null character is supplied by the compiler automatically.\n\t*the value stored in these two strings as identical.\n\n");
    printf("*if the string itself has a double quotes , a escape character is needed in-front of it to tell the compiler that it is not a delimeter.\n*some thing ha sto be done to include backslash in dtring.\nExample:\n");
    printf("1) won't fit\t\tchar str1[20]=''won\\'t fit'';\n2)the ''king''\t\tchar str2=''the\\''king\\''; '';\n3)c:\\ mydocs\t\tchar str3[20]=''c:\\\\ mydocs'';\n");
    printf("     0   1   2   3   4   5   6   7   8    9        19\n");
    printf("    ________________________________________________\n");
    printf("1) | w | o | n | ' | t |   | f | i | t | \\0 |  ...  |\n");
    printf("   |___|___|___|___|___|___|___|___|___|____|_______|\n\n\n");
    printf("     0   1   2   3   4    5   6   7   8   9    10         19\n");
    printf("    _______________________________________________________\n");
    printf("2) | t | h | e |   | '' | k | i | n | g | '' | \\0 | ...    |\n");
    printf("   |___|___|___|___|____|___|___|___|___|____|____|________|\n\n\n");
    printf("     0   1    2   3   4   5   6   7   8    9            19\n");
    printf("    ____________________________________________________\n");
    printf("3) | c | : | \\ | m | y | d | o | c | s | \\0 |   ...     |\n");
    printf("   |___|___|___|___|___|___|___|___|___|____|___________|\n\n\n");
    printf("ARRAY OF STRINGS/MULTI DIMENSIONAL STRINGS:\n\n*Two dimensional character array which consists of strings as its individual elements, is said to be an array of strings\nsyntax:\n\tchar string_name[sizeof_rows][sizeof_column];\nexample:char_names[3][10];\n\nINITIALIZTION:");
    printf("char  day[7][10]={''sunday'',''monday'',''tuesday'',''wednesday'',''thursday'',''friday'',''saturday''};\n\n");
    printf("    0   1   2   3   4   5    6    7   8    9\n");
    printf("   ___________________________________________\n");
    printf(" 0| s | u | n | d | a | y | \\0 |    |    |    |\n");
    printf("  |___|___|___|___|___|___|____|____|____|____|\n");
    printf(" 1| m | o | n | d | a | y | \\0 |    |    |    |\n");
    printf("  |___|___|___|___|___|___|____|____|____|____|\n");
    printf(" 2| t | u | e | s | d | a | y  | \\0 |    |    |\n");
    printf("  |___|___|___|___|___|___|____|____|____|____|\n");
    printf(" 3| w | e | d | n | e | s | d  | a  | y  | \\0 |   memory is created for\n");
    printf("  |___|___|___|___|___|___|____|____|____|____|   the above initialization\n");
    printf(" 4| t | h | u | r | s | d | a  | y  | \\0 |    |     illustrated\n");
    printf("  |___|___|___|___|___|___|____|____|____|____|\n");
    printf(" 5| f | r | i | d | a | y | \\0 |    |    |    |\n");
    printf("  |___|___|___|___|___|___|____|____|____|____|\n");
    printf(" 6| s | t | u | r | d | a | y  | \\0 |    |    |\n");
    printf("  |___|___|___|___|___|___|____|____|____|____|\n");
    delay_loop(20);
    printf("\n*the above initialization creates 7 rows and 10 columns using which different strings are stored in day array as shown above.\n*last character of each string is always null character '/0'.\n*day[0] contains 1st string i.e ''sunday''\n day[1] contains second string i.e ''monday''\n   .\n   :\n day[6] contains seventh string i.e ''saturday''\n");
    printf("\nSTRING INPUT/OUTPUT FUNCTION\n");
    printf("                       string i/o function\n");
    printf("                               |\n");
    printf("            ___________________|__________________\n");
    printf("           |                                      |\n");
    printf("           V                                      V\n");
    printf("      Formatted                             un-formatted\n");
    printf("           |                                      |\n");
    printf("           |->printf- for output                  |->puts- for output\n");
    printf("           |                                      |\n");
    printf("           |->scanf- for input                    |->gets- for input\n\n");
    printf("/*Program to illustrate formatted i/o for strings*/\n#include<stdio.h>\nvoid mai()\n{\nchar name[20];\nprintf(''enter name'');\nscanf(''%s'',name);\nprintf(''your name is %s'',name);\n}\n\n");
    printf("OUTPUT:\nEnter name:sachin\nyour name is sachin\n\n");
    printf("/*program to illustrate un-formatted i/o for strings*/\n#include<stdio.h>\nvoid main()\n{\nchar name[20];\nprintf(''enter name:'');\ngets(name);\nprintf(''your name is:'');\nputs(name);\n}\n\nOUTPUT:\nEnter name:sachin\nyour name is:sachin\n\n");
    printf("STRING MANUPULATION FUNCTION:\n");
    printf("   ____________________________________________________________________________\n");
    printf("  |      string function            |            descriptions                  |\n");
    printf("  |_________________________________|__________________________________________|\n");
    printf("  | strlen(str_name);               |this function returns the length of string|\n");
    printf("  |_________________________________|__________________________________________|\n");
    printf("  |strcpy(destination str,          |this function copies the string from one  |\n");
    printf("  |                source str);     |variable to another variable              |\n");
    printf("  |_________________________________|__________________________________________|\n");
    printf("  |strncpy(destination,source,      |this function also copies the string from |\n");
    printf("  |             length);            |one variable to another variable, but only|\n");
    printf("  |                                 |the specified length                      |\n");
    printf("  |_________________________________|__________________________________________|\n");
    printf("  |strcmp(string1,string2);         |this function is used to compare two      |\n");
    printf("  |                                 | strings. they are case sensitive.        |\n");
    printf("  |_________________________________|__________________________________________|\n");
    printf("  |stricmp(string1,string2);        |this function is also used to compare two |\n");
    printf("  |                                 |strings but they are not case sensitive.  |\n");
    printf("  |_________________________________|__________________________________________|\n");
    printf("  |strncmp(string1,string2,length); |this function compare two functions only  |\n");
    printf("  |                                 |up to a specified length.they are         |\n");
    printf("  |                                 |case sensitive.                           |\n");
    printf("  |_________________________________|__________________________________________|\n");
    printf("  |strnicmp(string1,stringn,length);|this function also compares two strings up|\n");
    printf("  |                                 |to a specified length,but not             |\n");
    printf("  |                                 |  case sensitive                          |\n");
    printf("  |_________________________________|__________________________________________|\n");
    printf("  |strlwr(string_name);             |this function converts upper case         |\n");
    printf("  |                                 |characters to lowercase                   |\n");
    printf("  |_________________________________|__________________________________________|\n");
    printf("  |strupr(str_name);                |this function converts lowercase          |\n");
    printf("  |                                 |characters to uppercase                   |\n");
    printf("  |_________________________________|__________________________________________|\n");
    printf("  |strcat(string1,string2);         |this function is used join two strings    |\n");
    printf("  |_________________________________|__________________________________________|\n");
    printf("  |strrev(string_name);             |this function is used to reverse the      |\n");
    printf("  |                                 |characters in given string                |\n");
    printf("  |_________________________________|__________________________________________|\n");
    printf("  |strset(string,symbol);           |this function replaces all the characters |\n");
    printf("  |                                 |of a string with a given symbol or        |\n");
    printf("  |                                 |  characters                              |\n");
    printf("  |_________________________________|__________________________________________|\n");
    printf("  |strnset(string,symbol,n)         |this function also replaces all the       |\n");
    printf("  |                                 |characters of a string with a given symbol|\n");
    printf("  |                                 |or characters but only to a specific      |\n");
    printf("  |                                 |  length                                  |\n");
    printf("  |_________________________________|__________________________________________|\n");
    delay_loop(20);
    printf("\nstrncpy():\n/*program to illustrate strncpy() function*/\n#include<stdio.h>\n#include<string.h>\nmain()\n{\nchar a[10],b[10];\nprintf(''enter a string:'');\nscanf(''%s'',a);\nstrncpy(b,a,3);\nprintf(''value of a:%s'',a);\n");
    printf("printf(''value of b:%s'',b);\n}\n\nOUTPUT:\nenter a string:sachin\nvalue of a:sachin\nvalue of b:sac\n\n\n");
    printf("strcmp():\n/*program to illustrate strcmp() function*/\n#include<stdio.h>\n#include<conio.h>\n#include<string.h>\nmain()\n{\nchar a[10],b[10];int n;\nprintf(''enter string one:'');\nscanf(''%s'',a);\nprintf(''enter string two:'');\nscanf(''%s'',b);\n");
    printf("n=strcmp(a,b);\nif(n==0)\n{\nprintf(''both strings are equal'');\n}\nelse\n{\nprintf(''strings are not equal'');\n}\ngetch();\n}\n\n");
    printf("OUTPUT1:\nenter string one:vicky\nenter string two:vicky\nboth strings are equal\n\nOUTPUT2:\nenter string one:vicky\nenter string two:vikky\nstrings are not equal\n\n\n");
    printf("strlen():\n/*illustrating string length function i.e strlen()*/\n#include<stdio.h>\n#include<conio.h>\n#include<string.h>\nmain()\n{\nchar a[30];\nint l;\nprintf(''enter a string'');\nscanf(''%s'',a);\nl=strlen(a);\nprintf(''length of string is %d'',l);\n");
    printf("getch();\n}\n\nOUTPUT:\nenter a string:chethan\nlength of string is 7\n\n\nstrcpy():\n/*program to illustrate strcpy() function*/\n#include<stdio.h>\n#include<string.h>\nmain()\n{\nchar a[10],b[10];\nprintf(''enter a string:'');\nscanf(''%s'',a);\n");
    printf("strcpy(b,a);\nprintf(''value of a:%s'',a);\nprintf(''value of b:%s'',b);\n}\n\nOUTPUT:\nenter a string:vicky\nvalue of a:vicky\nvalue of b:vicky\n\n\n");
    printf("strncmp():\n/*program to illustrate strncmp() function*/\n#include<stdio.h>\n#include<conio.h>\n#include<string.h>\nvoid main()\n{\nchar a[30],b[30];\nint n;\nprintf(''enter string one:'');\nscanf(''%s'',a);\nprintf(''enter string two:'');\nscanf(''%s'',b);\nn=strncmp(a,b,2);\nif(n==0)\n");
    printf("{\nprintf(''both strings are equal up to two characters'');\n}\nelse\n{\nprintf(''strings are not equal'');\n}\ngetch();\n}\nOUTPUT:\nenter string one:vicky\nenter string two:vikky\nboth strings are equal up to two characters\n\n\n");
    printf("strnicmp():\n/*program illustrate strnicmp() function*/\n#include<stdio.h>\n#include<conio.h>\n#include<string.h>\nmain()\{\nchar a[30],b[30];\nint n;\nprintf(''enter string one :'');\nscanf(''%s'',a);\nprintf(''enter strin two:'');\nscanf(''%s'',b);\nn=strnicmp(a,b,2);\nif(n==0)\n{\n");
    printf("printf(''both strings are equal up to first two characters'');\n}\nelse\n{\nprintf(''strings are not equal'');\n}\ngetch();\n}\n\nOUTPUT:\nenter string one:vicky\nenter string two:VIKKY\nboth strings are equal up to first two characters\n\n\n");
    printf("stricmp():\n/*program to illustrate stricmp() function*/\n#include<stdio.h>\n#include<conio.h>\n#include<string.h>\nmain()\n{\nchar a[30],b[30];\nint n;\nprintf(''enter string one:'');\nscanf(''%s'',a);\nprintf(''enter string two:'');\nscanf(''%s'',b);\nn=stricmp(a,b);\n");
    printf("if(n==0)\n{\nprintf(''both the strings are equal'');\n}\nelse\n{\nprintf(''strings are not equal'');\n}\n}\n\nOUTPUT:\nenter string one:vicky\nenter the string two:VICKY\nboth te strings are equal\n\n\n");
    printf("strset():\n/*program to illustrate strset() function*/\n#include<stdio.h>\n#include<conio.h>\n#include<string.h>\nmain()\n{\nchar a[30];\nchar b;\nprintf(''enter a sting'');\ngets(a);\nprintf(''enter a symbol to replace the string:'');\nscanf(''%c'',&b);\nstrset(a,b);\nprintf(''after strset:%s'',a);\n");
    printf("getch();\n}\n\nOUTPUT:enter a string:vikhyath\nenter a symbol to replace the string:#\nafter strset:########\n\n\nstrcat():\n/*program to illustrate strcat() function*/\n#include<stdio.h>\n#include<conio.h>\n#include<sting.h>\nmain()\n{\nchar a[30],b[30];\nprintf(''enter string one:'');\nscanf(''%s'',a);\n");
    printf("printf(''enter string two:);\nscanf(''%s'',b);\nstrcat(a,b);\nprintf(''final string is:%s'',a);\ngetch();\n}\n\nOUTPUT:\nenter string one:vicky\nenter string two:rao\nfinal string is:vickyrao\n\n\nstrrev():\n/*program to illustrate strrev() function*/\n#include<stdio.h>\n#include<conio.h>\n#include<string.h>\n");
    printf("main()\n{\nchar a[30];\nprintf(''enter string'':);\nscanf(''%s'',a);\nstrrev(a);\nprintf(''reversed string is:%s'',a);\ngetch();\n}\n\nOUTPUT:\nenter string:vicky\nrversed string is:ykciv\n\n\nstrlwr():\n/*program to illustrate strlwr() function*/\n#include<stdio.h>\n#include<string.h>\nmain()\n{\nchar a[30];\n");
    printf("printf(''enter a string in upper case:'');\nscanf(''%s'',a);\nprintf(''final string is:%s'',strlwr(a));\n}\n\nOUTPUT:\nenter string in uppercase:VICKY\nfinal string is:vicky\n\n\nstrupr():\n/*program to illustrate strupr() function*/\n#include<stdio.h>\n#include<conio.h>\n#include<string,h>\nmain()\n{\nchar a[30];\n");
    printf("printf(''enter the string in lowercase:'');\nscanf(''%s'',a);\nprintf(''final string is:%s'',strupr(a));\ngetch();\n}\n\nOUTPUT:enter a string in lowercase:vicky\nfinal string is:VICKY\n\n\n");
    delay_loop(20);
}

int learn8() //functions
{
    system("clear");
    printf("\n************     FUNCTIONS     ***************\n");
    printf("\n\n Function is a group of statements that perform a specific task. the main objective is to avoid the repetition of codes in a program.\n It provides modularity code re-usability.\n");
    printf("\n• A C program is a collection of one or more functions where one of the function must be main().\n");
    printf("• Execution of program always starts and ends with main.\n");
    printf("•  main can call other functions to do some part of the task.\n");
    printf("     Advantages of Functions :\n");
    printf("• Problems can be divided into understandable steps.\n");
    printf("• They help in code reuse.\n");
    printf(" ->for eg if average of numbers needs to be calculated 5 times in a program, with different data, instead of writing the same codes  5times in program, the cod can be called 5 times.\n");
    printf("• C library provides standard functions that make programming easier.\n");
    printf("• Functions can also be protected data by defining data as local data. This ensures that the data is available only to the function and cannot be manipulated outside the function.\n");
    printf("\n Types of function :\n");
    printf("Functions can be broadly classified into two types\n");
    printf("• Built in function\n");
    printf("• User defined function\n");
    printf(" Built in function\n");
    printf("         c language provides many built in functions few of them are listed below:\n");
    printf("• Strings manipulation function(discussed in the section 2 of module).\n");
    printf("• Character manipulation functions.\n");
    printf("• Memory management functions(discussed in the section of the module 5).\n");
    printf("• Mathematical function.\n");
    printf("character management functions: This header file includes character manipulation functions is ctype.h(#include\"type.h\")");
    printf("\n  ___________________________________________________________\n");
    printf("  | functions       | Return true if ch is                  |\n");
    printf("  |_________________|_______________________________________|\n");
    printf("  | isalnum(ch)     |A letter of alphabet(upr or lwr)or num |\n");
    printf("  | isalpha(ch)     |An upr or lwr case letter of alphabet  |\n");
    printf("  | isascii(ch)     |An ASCII value in the range of 0 to 127|\n");
    printf("  | isblanck(ch)    |A tab, space or another blank character|\n");
    printf("  | islower(ch)     |A lowercase letter of alphabet,a to z  |\n");
    printf("  | isupper(ch)     |A uppercase letter of alphabet,a to z  |\n");
    printf("  |  Function       |         Return                        |\n");
    printf("  | toascii(ch)     |An ASCII value in the range of 0 to 127|\n");
    printf("  | tolower(ch)     |A lowercase of character ch            |\n");
    printf("  | toupper(ch)     |A uppercase of character ch            |\n");
    printf("  |_________________|_______________________________________|\n");
    printf("\n\n Mathematical Functions :\n   The header file that includes mathematical functions is math .h (#include<math.h>)\n\n");
    delay_loop(20);
    printf("\n  ___________________________________________________________\n");
    printf("  | functions       | Return                                |\n");
    printf("  |_________________|_______________________________________|\n");
    printf("  | fabs(n)         |absolute value of floating point number|\n");
    printf("  | ceil(n)         |smallest integer value is >= n         |\n");
    printf("  | floor(n)        |largest integer value is <= n          |\n");
    printf("  | exp(n)          |e raised to given power n              |\n");
    printf("  | log(n)          |natural logarithm to base e            |\n");
    printf("  | log10(n)        | common logarithm to base e            |\n");
    printf("  | pow(x,n)        | x raised to the given power n         |\n");
    printf("  | sqrt(n)         |square root of n                       |\n");
    printf("  | cbrt(n)         |  cube root of n                       |\n");
    printf("  |  sin(n)         | sine value of n                       |\n");
    printf("  |  cos(n)         | cosine value of n                     |\n");
    printf("  |  sinh(n)        | hyperbolic sine value of n            |\n");
    printf("  |  cosh(n)        | hyperbolic cosine value of n          |\n");
    printf("  |_________________|_______________________________________|\n");
    printf(" The built function available in c are defined under the header files.\n\n");
    printf(" Header file:\n  A header file containing c declaration and macro definitions to be to be shared between several source .We use header in program by including it, with c preprocessing directive '#include'\n\n\n");
    printf("     stdio.h         input /output functions                                     \n");
    printf("     math.h          mathematical  functions                                     \n");
    printf("     string.h        string manipulation                                         \n");
    printf("     stdlib.h        standard library functions                                  \n");
    printf("     malloc.h        memory allocation/deal location function                    \n");
    printf("     time.h          computing time  functions                                   \n");
    printf("     stddef.h        common macro functions                                      \n");
    printf("     float.h         allow to use constant related to floating point             \n");
    printf("     ctype.h         allow to use functions of testing and mapping characters    \n");
    printf("     conio.h         library function for performing console input and output    \n");
    printf("     User defined functions :\n");
    printf(" The built in functions provided by c are not sufficient for performing customized functions, hence c allows user to create their own functions to perform specific task these are called as user defined functions\n");
    printf("In the below example without using functions ,addition  performed directly after reading inputs ,but in the example using functions,add(a,b) function is called which makes the control to move to the example function add(int a, int b) which computes sum and then returns. the remainder value in the variable sum and then displayed.\n");
    printf(" Example : C program to add two numbers\n");
    printf("/* without functions*/                           |   /*with user defined function*/                    \n");
    printf("     #include<stdio.h>                           |       #include stdio.h                              \n");
    printf("     #include<conio.h>                           |       #include conio.h                              \n");
    printf("     void main()                                 |       int add(int a,int b);                         \n");
    printf("     {                                           |       {                                             \n");
    printf("     int sum a,b;                                |       int sum a,b;                                  \n");
    printf("     printf(\"enter a and b\");                    |       printf(\"enter a and b\");                    \n");
    printf("     scanf(\"%%d%%d\",&a,&b);                        |       scanf(\"%%d%%d\",&a,&b);                      \n");
    printf("     sum=a+b;                                    |       sum=add(a,b);                                 \n");
    printf("     printf(\"sum is %d\",sum);                    |       printf(\"sum is %d\",sum);                    \n");
    printf("     getch();                                    |       getch();                                      \n");
    printf("     }                                           |       }                                             \n");
    printf("                                                 |       int add(int a,int b)                          \n");
    printf("                                                 |       {                                             \n");
    printf("                                                 |       int sum;                                      \n");
    printf("                                                 |       sum=a+b;                                      \n");
    printf("                                                 |       return sum;                                   \n");
    printf("                                                 |       }                                             \n");
    printf(" Advantages of user defined functions \n");
    delay_loop(20);
    printf(" •can be used in number of places without restrictions as compared to store procedures.\n");
    printf(" •code can be made less complicated and made easier.\n");
    printf(" •parameters can be made passed to the function.\n");
    printf(" •reduction in size of the program code of function can be used again and again by calling it.\n");
    printf(" •program becomes easy to understand and debug.\n");
    printf(" •a function can be shared by other programs by compiling this separately and loading and linking them together.\n");
    printf(" •in C recursive function can call itself. Many calculations can be done easily by using recursive functions such as calculation of factorial of number etc.\n");
    printf("\n Location of functions in a program \n");
    printf("\n____________________________________________________________________________________________________");
    printf("\n|types     |pictorial representation                   |Example                                    |");
    printf("\n|__________|___________________________________________|___________________________________________|");
    printf("\n|          |       ____________________                | #include<stdio.h>                         |");
    printf("\n|          |       |#include and funct|                | int add(int a,int b);    (optional)       |");
    printf("\n|          |       | declational(opt) |                | int add(int a,int b)                      |");
    printf("\n|          |       |__________________|                | {                                         |");
    printf("\n|   1      |                |                          |  int sum ;                                |");
    printf("\n|          |       _________|__________                |  sum=a+b;                                 |");
    printf("\n|          |       | function of body |                |  return sum;                              |");
    printf("\n|          |       |__________________|                | }                                         |");
    printf("\n|          |                |                          |  void main()                              |");
    printf("\n|          |          ______|_________                 |  {                                        |");
    printf("\n|          |          | main program |                 |  int sum a,b;                             |");
    printf("\n|          |          |______________|                 |  a=10,b=20;                               |");
    printf("\n|          |                                           |  sum=add(a,b);                            |");
    printf("\n|          |                                           |  printf(\"sum is %%d\",sum);                 |");
    printf("\n|          |                                           |  }                                        |");
    printf("\n|__________|___________________________________________|___________________________________________|");
    printf("\n|          |       ____________________                | #include<stdio.h>                         |");
    printf("\n|          |       |#include and funct|                | int add(int a,int b);    (mandatory)      |");
    printf("\n|          |       | declational(mand)|                | void main()                               |");
    printf("\n|          |       |__________________|                | {                                         |");
    printf("\n|   2      |                |                          |  int sum a,b;                             |");
    printf("\n|          |          ______|_________                 |  a=10,b=20;                               |");
    printf("\n|          |          | main program |                 |  sum=add(a,b);                            |");
    printf("\n|          |          |______________|                 |  printf(\"sum is %%d\",sum);                 |");
    printf("\n|          |                |                          | }                                         |");
    printf("\n|          |        ________|___________               | int add(int a,int b)                      |");
    printf("\n|          |        | function of body |               | {                                         |");
    printf("\n|          |        |__________________|               |  int sum ;                                |");
    printf("\n|          |                                           |  sum=a+b;                                 |");
    printf("\n|          |                                           |  return sum;                              |");
    printf("\n|          |                                           |  }                                        |");
    printf("\n|__________|___________________________________________|___________________________________________|");
    printf("\n Location of function refers to the placement of the function definition in relation to the main program .There are mainly two ways to place a program:\n");
    printf(" •type 1:placing a function first followed by placing the entire program.\n");
    printf(" •type 2:placing function declaration before main program followed by main program and the followed by function body.\n");
    printf("\n\n Structure of a function :\n");
    printf("\n Function is a group of statements that together to perform a specific task.\n Structure of a function is explained by taking an example of a program to display in element of array using functions.\n");
    printf("\n\n /*program to display  'n' elements of array*/\n");
    printf("#include<stdio.h>\nvoid display(int b[10]);\nint n;\nvoid main()\n{\n int i,a[10];\n printff(\"enter the number of elements\"); \n scanf(\"%%d \",&n);\n printf(\"enter elements \\n\");for(i=0;i<n;i++)\n scanf(\"%%d\",&a[i]);\n printf(\"element are\");\n display(a);\n getch();\n}\nvoid display(int b[10])\n{\n int i;\n for(i=0;i<n;i++)\n  print(\"%%d\",&b[i]);\n}\n");
    printf(" \n\n Program to compute the factorial of a given number n using recursion*/\n");
    printf(" #include\"stdio.h\" \n int fact(int);\n void main()\n {\n  int n ,ans;\n  printf(\"enter the value of n\");\n  scanf(\"%%d\",&n);\n  ans=fact(n);\n  printf(\"ans=%%d\",ans);\n  getch();\n }\n");
    printf(" int fact(int n )\n {\n  if(n==0)\n  {\n   return 1;\n  }\n  else\n  {\n   return n*fact(n-1);\n  }\n }\n");
    printf("\n METHOD:\n factorial(5)=5*factorial(4)\n 5*4*factorial(3)\n 5*4*3*factorial(2)\n 5*4*3*2*factorial(1)\n 5*4*3*2*1*factorial(0)\n 5*4*3*2*1*1\n");
    printf("\n Output :\n  enter the value of n\n  5\n  ans=120");
    printf("\n\n------------------*----------------------\n");
    printf("\n\n /* Example for string passing by reference or call by reference*/\n");
    printf(" #include<stdio.h>\n void display(char ch[]);\n void main()\n {\n  char c[20];\n  printf(\"enter the string\");\n  gets(c);\n  display(c); /*passing entire string c to function */\n }\n");
    printf(" void display(char ch[])\n {\n  printf(\"string is:\");\n  puts(ch); /*display enter string at a time*/\n\n");
    printf(" Recursive Function :\n");
    printf(" •Recursive function are there function that call themselves during than execution until certain conditions are satisfied.\n");
    printf(" •note while using recursion.programs need to be careful to define an exit condition from the recursion function ,otherwise it will go in infinite loop'\n");
    printf("                 __________________\n");
    printf("          ------>||rec_function()||\n");
    printf("          |      ||______________||\n");
    printf("     _____|_____         |         \n");
    printf("     | body    |        /\\  \n");
    printf("     |_________| no    /is\\ \n");
    printf("          |___________/exit\\\n");
    printf("                      \\cond/ \n");
    printf("                       \\  /  \n");
    printf("                        \\/ yes\n");
    printf("                   _____|_____\n");
    printf("                   | stop    |\n");
    printf("                   |_________|\n");
    printf("\n\n Passing Array in a Function :\n");
    delay_loop(20);
    printf(" •Array elements or an entire array can be passed to a function.\n");
    printf(" •If we pass the values stored in an array ,single element at a time ,then it is called array passing by values or call by values.\n");
    printf("\n /*example for array passing by value or call by value*/\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n void display(int p);\n void main()\n {\n  int n,i,a[10];\n  printf(\"enter the number of elements \\n\");\n  scanf(\"%%d\",&n);\n  printf(\"enter the elemnts\");\n  for(i=0;i<n;i++)\n   display(a[i]);\n  }\n  setch(); }\n");
    printf(" void display(int p)\n {\n  printf(\"%%d\\t\" ,p);\n }\n/* display the element it recieves */\n");
    printf("\n /* in call by value we pass the value of single value at a time not an entire array. For every elements display() function is called*/\n\n");
    printf(" Output :\n enter the number of elements\n 5\n enter the elements\n 1 2 3 4 5\n the elements are\n 1 2 3 4 5\n\n");
    printf("\n Call By Reference Or Parameter Passing By Reference:\n");
    printf(" •When an address of the variable is passed to the function during its invocation, then function is called is call by reference or parameter passing by reference.");
    printf("/* call by reference*/\n");
    printf("\n #include<stdio.h>\n int add(int *i,int *j);\n void main()\n {                       /*call function invokes function add()\n");
    printf(" int sum ,a=10 b=20;     and passes the address of variables a and b as parameters.\n sum=add(&a,&b);         Here the address of a and b are the actual parameters*/\n");
    printf(" printf(\"sum is %%d \",sum);\n getch()\n }\n");
    printf(" int add(int *i,int *j){     /* here *i and *j are the address of a and b as the actual parameters which are holding the respective\n   int sum;                  values stored in which address are passed as actual parameters.\n");
    printf("   sum= *i+*j;               using which user defined function add() computers sum and returns a value\n   return sum;               sum to calling a function*/\n }\n\n");
    printf(" •Instead of values of a and b ,address of a and b are passed and reference *i,*j recieves the values of a and b and preform addition operation .This concept is called call by reference or parameter passing by reference.\n");
    printf("\n\n Passing strings in Functions:\n");
    printf(" •Strings are declared in c in similar manner as arrays.\n Only difference is that,strings are char type.\n Strings can be passed to function or similar manner as arrays as, string is also an array.\n");
    printf("\n /* example for String passing by value or call by value*/\n");
    printf(" #include<stdio.h>\n void main()\n {\n  char c[50];  printf(\"enter the string \");\n  scanf(\"%%s\",c);\n for(i=0;c[i]!='\\0';i++)\n  {\n   display(c[i]);   /*passing single character of string at a time to function */\n  }\n getch();\n }\n");
    printf(" void display(char ch)\n {\n  putchar(ch);   /*display single character at a time*/\n }\n");
    printf("\n\n Function with arguments but no return value :\n");
    printf(" •Parameter are passed from calling to the called function.\n");
    printf(" •Called function does not return a value it jut performs the specified action.\n");
    printf(" /* Program to illustrate functions with parameter but no return*/\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n int addition(int ,int ,int)\n void main()\n {\n int a,b,c;\n clrscr();\n printf(\"enter the value of a,b,c\");\n scanf(\"%%d%%d%%d\",&a,&b,&c);\n addition(a,b,c);\n getch()\n }\n");
    printf(" void  addition(int x,int y,int z)\n {\n int s;\n s=x+y+z;\n printf(\"sum of three no.s=%%d\",s);\n }\n\n\n");
    printf(" output: \n enter the value of a,b and c\n 10 20 30\n sum of three no.s=60\n\n\n");
    printf(" Parameter Passing Mechanism :\n");
    printf(" C supports two techniques for passing parameter from one function to another, namely\n");
    printf(" i)  Pass by value also know as call by value.\n");
    printf(" ii) pass by reference also known as call by reference\n\n\n");
    printf(" Call By Value Or Parameter During By value\n\n");
    printf(" •When a variable as a value is passed to the function during its execution,the function execution is called as call by value or pass by value\n\n");
    printf(" /* call by value*/\n");
    printf(" #include<stdio.h>\n int add(int i,int j);\n void main()\n {\n  int sum,a=10,b=20;\n  sum=add(a,b);\n  printf(\"sumis %%d\",sum);\n  getch()\n }\n int add(int i,int j)\n {\n int sum;\n sum=i+j;\n return sum;\n }\n");
    printf(" •that is a and to the actual parameter,when the function add(s,b) is called the value of actual parameter is except is formed parameter is function definition i and j, this method is without call by value or parameter passed by value\n");
    printf("\n\n Functions with No Arguments and No return Value :\n");
    printf(" •No parameter is passed from calling function to the called function.\n");
    printf(" •called function dose not return any value.\n");
    printf(" /* Program illustrate function with no return no parameter no return value*/\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n void addition()\n void main()\n {\n  clrscr();\n  addition()\n  getch()\n }\n");
    printf(" void addition()\n {\n  int a,b,c,s;\n  printf(\"enter the value of a,b,c\");\n  scanf(\"%%d%%d%%d\",&a,&b,&c);\n  s=a+b+c;\n  printf(\"the sum of three no.s=%%d\",s);\n }\n");
    printf("\n\n /*program to illustrate static variable*/\n\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n void display();\n void main()\n {\n  display();\n  display();\n  display();\n  display();\n  display();\n }\n void display()\n {\n static int i=0;\n i++\n printf(\"%%d\\n\",i);\n }\n\n\n");
    printf(" Category of Function :\n");
    delay_loop(20);
    printf("                                                     _______________________                           \n");
    printf("                                                     |category of function |                           \n");
    printf("                                                     |_____________________|                           \n");
    printf("             __________________________________________________|_______________________________________\n");
    printf("    _________|_________        ___________|____________         ___________|__________       _________|_________\n");
    printf("    |function with no |        |function with argument|         |function with argume|       |function with no |\n");
    printf("    |argument and no  |        |but no return value   |         |nts and with return |       |argument but with|\n");
    printf("    |return value     |        |                      |         |value               |       |return value     |\n");
    printf("    |_________________|        |______________________|         |____________________|       |_________________|\n");
    printf(" Function with No Arguments But Return A value :\n");
    printf(" •No parameter is passed from calling function to the called function, but function returns a value.\n\n\n");
    printf(" /* program to illustrate functions without parameter with returning value*/\n\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n int addition(); void main()\n {\n  int r;\n  clrscr();\n  r=addition();\n  printf(\"sum of three no.s=%%d\",r);\n  getch();\n }\n");
    printf(" int addition()\n {\n  int a,b,c,s;\n  printf(\" enter the value of a,b and c\");\n  scanf(\"%%d%%d%%d\",&a,&b,&c);\n  s=a+b+c;\n  return s;\n }\n\n\n");
    printf(" Function with argument and with return value :\n");
    printf(" •Parameter are passed from calling function to the called function and based on the received parameter values called function performs required action and return a value.\n");
    printf(" /* program to illustrate functions with parameter and with return value */\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n int addition(int,int,int);\n void main() {\n  int a,b,c,r;\n  clrscr();\n  printf(\"enter the value of a,b and c\");\n  scanf(\"%%d%%d%%d\",&a,&b,&c);\n  r=addition(a,b,c);\n  printf(\"sum of three no.s=%%d\",r);\n  getch();\n }\n");
    printf(" int addition(int x,int y,int z)\n {\n int s; s=x+y+z;\n return s;\n }\n\n\n output:\n enter the value of a,b,c\n 10 20 30\n sum of three no.s=60\n\n\n");
    printf(" Actual and Formal parameters :\n");
    printf(" •Actual parameters are parameters which are found in signature(call) of a given function. These are the parameter transfered from the calling function to the called function\n");
    printf(" •formal parameter are parameter which are found in the definition(body) of a given function.\n\n");
    printf(" Local and Global Variables :\n");
    delay_loop(20);
    printf("_____________________________________________________________________\n");
    printf("|        | Global variable               |  Local variable          |\n");
    printf("|________|_______________________________|__________________________|\n");
    printf("|   1)   | global variables are created  |local variables are create|\n");
    printf("|        |outside all functions at the   |d inside a function       |\n");
    printf("|        | begining of a program.        |                          |\n");
    printf("|   2)   |Global variable are accessible |Local variable are accessi|\n");
    printf("|        |to all the functions present in|ble to only that respectiv|\n");
    printf("|        |in the program.                |e function inside which   |\n");
    printf("|        |                               |they have been created    |\n");
    printf("|   3)   |if no value is given to a globl|if no value is given to a |\n");
    printf("|        |variable by the programmer then|local variable then it hol|\n");
    printf("|        |automatically it is assigned a |d a junk value.           |\n");
    printf("|        |value O.                       |                          |\n");
    printf("|   4)   |global variable are alive for  |local variable are alive  |\n");
    printf("|        |the entire duration of exceutio|only for the duration of  |\n");
    printf("|        |n of the program.              |execution of the function |\n");
    printf("|        |                               |inside which they are     |\n");
    printf("|        |                               |present                   |\n");
    printf("|________|_______________________________|__________________________|\n");
    printf("\n\n Register Variable :\n");
    printf(" •Register variable are such variable which are allotted space not in the main memory but in one of the cpu's register. For a compiler to allocate space for variable in a cpu register the variable has to be declared as\n");
    printf("     register int i;\n");
    printf(" •The Advantage of storing a variable in cpu register is that the variable can be accessed much faster. Hence the speed of execution of program increases.\n");
    printf(" •note :The declaration register int i is just a request by the programmer to the compiler to allocate a cpu register for i\n");
    printf(" if no cpu register are free available to the compiler, then the compiler would ignore that request and allocate space to the variable i as any other normal local variable\n");
    printf("\n\n Static Variables :\n");
    printf(" •Static variables are declared using the keyword static they can be declared outside the function or inside the function\n");
    printf(" •Memory is allocated to these variables once\n");
    printf(" •If static variables are defined inside the function, they cannot be accessed outside the function.\n");
    printf(" •A function cannot use static variable which are declared in any other function.\n");
    printf("         static int i=0;    \n");
    printf(" •Multiple actual parameter are separated by comma.\n\n\n /*program to illustrate adding two no.s*/\n\n");
    printf(" ______________________________________________________________________\n");
    printf(" |/*without user defined function */ | /*with user defined function */|\n");
    printf(" | #include<stdio.h>                 | #include<stdio.h>              |\n");
    printf(" | #include<conio.h>                 | #include<conio.h>              |\n");
    printf(" | void main()                       | int add(int a,int b);          |\n");
    printf(" | {                                 | void main()                    |\n");
    printf(" | int a,b,sum;                      | {                              |\n");
    printf(" | printf(\"enter a and b\");          | int sum,a,b;                   |\n");
    printf(" | scanf(\"%%d%%d\",&a,&b);              | printf(\"enter a and b\");       |\n");
    printf(" | sum=a+b;                          | scanf(\"%%d%%d\",&a,&b);           |\n");
    printf(" | printf(\"sum is %%d\",sum);          | sum=add(a,b);                  |\n");
    printf(" | getch();                          | printf(\"sum is %%d\",sum);       |\n");
    printf(" | }                                 | getch();                       |\n");
    printf(" |                                   | }                              |\n");
    printf(" |                                   | int add(int a,int b)           |\n");
    printf(" |                                   | {                              |\n");
    printf(" |                                   | int sum;                       |\n");
    printf(" |                                   | sum = a + b;                   |\n");
    printf(" |                                   | return sum;                    |\n");
    printf(" |                                   | }                              |\n");
    printf(" |___________________________________|________________________________|\n\n\n");
    printf(" •Formal parameter list gives the input for the operation to be performed by function.\n");
    delay_loop(20);
    printf(" •local variables one variables used only within a function.\n");
    printf(" •Return statements returns result of function.\n");
    printf(" •Statements one to perform specific operation.\n");
    printf("\n\n\n Function Declaration:\n");
    printf("\n\n •It consist of only the function header with\n 1)return_type 2)function_name 3)formal_parameter\n");
    printf(" •function declaration is terminated with a semicolon.\n");
    printf(" •If the function has multiple patterns, separate each of them with commas.\n");
    printf(" •Identifiers name are not required, but can be used for better readability.\n");
    printf(" •These identifier names also need not to match with the ones.\n");
    printf(" •Function declaration  is placed in global declaration section before main.\n");
    printf("\n\n\n Function Call :\n");
    printf("\n •It consist of function_name,parenthesis ie() ,and actual parameters\n");
    printf(" The actual parameter must match the formal parameter in type and order in the parameter list.\n");
    printf("\n\n User-defined Functions :\n");
    printf(" •The function written or defined by programmer are called as user-defined function.\n");
    printf(" •A function name is used 3 times ;\n");
    printf("  1)during function declaration\n  2)in the function call\n  3)in function definition\n\n");
    printf(" Function Definition :\n");
    printf(" •It contains the code for a function  and consist of\n 1)function header 2)function body\n");
    printf(" syntax\n   return_type function_name(formal_parameter list)\n   {\n    local declaration;\n    statements;\n    return(expression);\n   }\n");
    printf("\n\n where,\n   •return_type is the data type of value that function returns, it may be int ,char ,float,etc. If it dose not return anything then return_type is void.\n");
    printf("  •function_name is the actual name of the function\n");
    delay_loop(20);
}

int learn9() //pointers
{
    system("clear");
    printf("\n ********** pointer **********\n\n");
    printf(" Pointer Definition: Pointer is a variable that holds the address of another variable.\n");
    printf("\n Declaration and Initialization of Pointer\n\n");
    printf(" The operators used to represent pointer are :\n • Address operator(&)\n • Indirection operator(*)\n");
    printf(" syntax :\n ptr_data_type *ptr_variable_name\n ptr_variable_name =& variable_name \n");
    printf(" where variable_name is variable whose address has to be stored in pointer.\n");
    printf(" example :\n int a=10;\n int *ptr;\n then   ptr =&a;\n      *ptr =a;\n that is ptr is a pointer holding address of variable 'a' and *ptr holds the value of a.\n");
    printf("\n example program:\n #include<stdio.h>\n #include<conio.h>\n void main()\n {\n  int a=10;\n  int *ptr;\n  ptr=&a;\n  printf(\"%%d\\n\",a);\n  printf(\"%%d\\n\",&a);\n  printf(\"%%d\\n\",ptr);\n  printf(\"%%d\\n\",*ptr);\n  getch();\n }\n");
    printf(" output :\n 10\n  2056\n 2056\n 10\n\n");
    printf(" Pointers and Function ( call by reference):\n\n");
    printf(" Call by reference method involves use of address of variables as actual parameter in calling function and pointer variable with (*) indirection operator is used at called function to perform required operation that is formal parameters\n\n");
    printf(" /* consider an example of swapping two numbers using call by reference or using pointers*/\n\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n void main()\n {\n  int x=10, y=20;\n  swap( &x,&y);\n  printf(\"after swapping :\\n=%%d\\ny=%%d\",x,y);\n  getch();\n }\n");
    printf(" void swap(int *a,int *b)\n {\n  int temp;\n  temp= *a;\n  *a=*b;  *b=temp;\n }\n\n output :\n  after swapping :\n  x=20\n  y=10\n\n");
    printf("\n Pointers and Array :\n\n");
    printf(" The operations performed using array concept can also be done using pointers.\n");
    printf(" Syntax:\n  data_type *ptr_name;\n  ptr_name = &array_name or ptr_name =array_name;\n\n");
    printf(" Here pointers dose not point to all the element of array,instead initially it points to the first example of an array later which is increment to get other elements\n\n");
    printf("example\n int a[10]={11,12,13,14};\n int *ptr;\n ptr =&a or ptr=a; here ptr is a pointer pointing to 11 initially.\n it can be explained using program below.\n\n");
    printf(" /*program to demonstrate pointers to arrays concept */\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n void main()\n {\n  int a[10]={11,12,13,14};\n  int *ptr;\n  ptr=a;  /* initially pointing to first element 11 */\n");
    printf("  for(i=0;i<4 ;i++)  /*four elements */\n  {\n   printf(\"%%d\\t\",a[i]);\n   printf(\"%%d\\n\",&a[i]);\n   printf(\"%%d\\t\",*ptr);\n   printf(\"%%d\\t\",ptr);\n   ptr++;\n   /*making ptr to point next value by doing ptr=ptr+1*/\n  }\n getch();\n }\n");
    printf("output:\n 11 2056 /*value a[0] pointed by ptr at first iteration and address where that value is stored */\n");
    printf(" 11 2056 /*value *ptr pointed by ptr at first iteration and address where that value is stored */\n");
    printf(" 12 2058 /*value a[1] pointed by ptr at second iteration and address where that value is stored */\n");
    printf(" 12 2058 /*value *ptr pointed by ptr at first iteration and address where that value is stored */\n");
    printf(" 13 2060 /*value a[2] pointed by ptr at third iteration and address where that value is stored */\n");
    printf(" 13 2060 /*value *ptr pointed by ptr at first iteration and address where that value is stored */\n");
    printf(" 14 2062 /*value a[3] pointed by ptr at fourth iteration and address where that value is stored */\n");
    printf(" 15 2062 /*value *ptr pointed by ptr at first iteration and address where that value is stored */\n");
    delay_loop(20);
    printf(" _____________________\n");
    printf(" |11  |12  |13  |14  |      since integer type occupies 2 bytes for each element\n");
    printf(" |____|____|____|____|      If it reserves 2056 for first element as starting address 2056+2 =2058 as\n");
    printf(" |2056|2058|2060|2062|      second element's starting address 2058+2=2060 for third elements and so on.\n");
    printf(" |____|____|____|____|\n\n");
    printf("position    0   1     2    3\n");
    printf("         _____________________\n");
    printf("values   |11  |12  |13  |14  |\n");
    printf("         |____|____|____|____|\n");
    printf("address  |2056|2058|2060|2062|\n");
    printf("         |____|____|____|____|\n");
    printf("            |ptr\n");
    printf(" at i=0 a[0]=11,&a[0]=2056\n  *ptr=11,ptr=2056\n  i++,ptr++\n  i=1,ptr=2058\n\n");
    printf("position    0   1     2    3\n");
    printf("         _____________________\n");
    printf("values   |11  |12  |13  |14  |\n");
    printf("         |____|____|____|____|\n");
    printf("address  |2056|2058|2060|2062|\n");
    printf("         |____|____|____|____|\n");
    printf("                |ptr\n");
    printf(" at i=1 a[1]=12,&a[1]=2058\n  *ptr=12,ptr=2058\n  i++,ptr++\n  i=2,ptr=2060\n\n");
    printf("position    0   1     2    3\n");
    printf("         _____________________\n");
    printf("values   |11  |12  |13  |14  |\n");
    printf("         |____|____|____|____|\n");
    printf("address  |2056|2058|2060|2062|\n");
    printf("         |____|____|____|____|\n");
    printf("                      |ptr\n");
    printf(" at i=2 a[2]=13,&a[2]=2060\n  *ptr=13,ptr=2060\n  i++,ptr++\n  i=3,ptr=2062\n\n");
    printf("position    0   1     2    3\n");
    printf("         _____________________\n");
    printf("values   |11  |12  |13  |14  |\n");
    printf("         |____|____|____|____|\n");
    printf("address  |2056|2058|2060|2062|\n");
    printf("         |____|____|____|____|\n");
    printf("                          |ptr\n");
    printf(" at i=3 a[3]=14,&a[3]=2056\n  *ptr=14,ptr=2062\n  i++,ptr++\n  i=4,ptr=2064\n\n");
    delay_loop(20);
    printf("\n\n  Character Pointer and Function or Pointer To Strings\n\n");
    printf(" Strings are array of characters instead of integer values of array, here pointer pointers to the character present in string represented as an array.\n");
    printf(" Syntax :\n Data_type &ptr_name ;\n ptr_name = string_name;\n example\n char str[20]=\"america\";\n char *ptr;\n ptr=str;\n\n");
    printf(" Here pointer dose not point to all the character of string, instead of initially it points to all first elements or first character of a string later which is incremented to get other elements it can be explained using below program\n");
    printf("\n /* string copy using pointer to string concept (using single pointer)\n*/\n\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n void main()\n {\n  int i;\n  int str1[10]=\"sanju\";\n  int str2[10];\n  int *ptr;\n  ptr=str1;\n  for(i=0;str1[i]!='\\0';i++)\n  {\n   str2[i]=*ptr;\n   ptr++;\n  }\n  str2[i]='\\0';\n  printf(\"strings2 after coping is %%s\",str2);\n  getch();\n }\n");
    printf("output:\n strings after coping is nanju\n");
    printf("position    0   1     2    3\n");
    printf("         _______________________________\n");
    printf("character|s   |a   |n   |j   |u   |\\0  |    since integer type occupies 1 bytes for each element\n");
    printf("         |____|____|____|____|____|____|    If it reserves 2051 for first element as starting address 2051+1 =2052 as\n");
    printf("address  |2051|2052|2053|2054|2055|2056|    second element's starting address 2052+1=2053 for third elements and so on.\n");
    printf("         |____|____|____|____|____|____|\n");
    printf("            |ptr\n\n\n");
    printf("         _______________________________\n");
    printf("character|s   |a   |n   |j   |u   |\\0  |\n");
    printf("         |____|____|____|____|____|____|\n");
    printf("address  |2051|2052|2053|2054|2055|2056|\n");
    printf("         |____|____|____|____|____|____|\n");
    printf("            |ptr\n");
    printf(" at i=0 str1[0]!='\\0'\n str2[0]=*ptr=s\n i++=1,ptr++=2052\n\n");
    printf("         _______________________________\n");
    printf("character|s   |a   |n   |j   |u   |\\0  |\n");
    printf("         |____|____|____|____|____|____|\n");
    printf("address  |2051|2052|2053|2054|2055|2056|\n");
    printf("         |____|____|____|____|____|____|\n");
    printf("                |ptr\n");
    printf(" at i=1 str1[1]!='\\0'\n str2[1]=*ptr=a\n i++=2,ptr++=2053\n\n");
    printf("         _______________________________\n");
    printf("character|s   |a   |n   |j   |u   |\\0  |\n");
    printf("         |____|____|____|____|____|____|\n");
    printf("address  |2051|2052|2053|2054|2055|2056|\n");
    printf("         |____|____|____|____|____|____|\n");
    printf("                     |ptr\n");
    printf(" at i=2 str1[2]!='\\0'\n str2[2]=*ptr=n\n i++=3,ptr++=2054\n\n");
    printf("         _______________________________\n");
    printf("character|s   |a   |n   |j   |u   |\\0  |\n");
    printf("         |____|____|____|____|____|____|\n");
    printf("address  |2051|2052|2053|2054|2055|2056|\n");
    printf("         |____|____|____|____|____|____|\n");
    printf("                           |ptr\n");
    printf(" at i=3 str1[3]!='\\0'\n str2[3]=*ptr=j\n i++=4,ptr++=2055\n\n");
    printf("         _______________________________\n");
    printf("character|s   |a   |n   |j   |u   |\\0  |\n");
    printf("         |____|____|____|____|____|____|\n");
    printf("address  |2051|2052|2053|2054|2055|2056|\n");
    printf("         |____|____|____|____|____|____|\n");
    printf("                                |ptr\n");
    printf(" at i=4 str1[4]!='\\0'\n str2[4]=*ptr=u\n i++=5,ptr++=2056\n\n");
    printf("         _______________________________\n");
    printf("character|s   |a   |n   |j   |u   |\\0  |\n");
    printf("         |____|____|____|____|____|____|\n");
    printf("address  |2051|2052|2053|2054|2055|2056|\n");
    printf("         |____|____|____|____|____|____|\n");
    printf("                                    |ptr\n");
    delay_loop(20);
    printf(" at i=5 str1[5]=='\\0'\n  so here iterations stops since while (str1[i]=='\\0'\n\n");
    printf("\n Pointer To Pointer \n");
    printf(" Pointer is a variable that stores the address of another variable.pointer storing the address of another pointer, that is pointer pointing to another pointer is called as pointer to pointer.\n declaration ;\n data_type **pointer_name;\n\n");
    printf(" Initialization :\n  pointer_name = &another_pointer_name\n The below example demonstrate pointer to pointer concept\n");
    printf(" int a=10;\n int *ptr1,**ptr2;\n ptr1=&a;\n ptr2=&ptr1; /*ptr2 is the pointer to the another pointer ptr1*/\n\n");
    printf("                                  ptr2           ptr1            a\n");
    printf("                                 ______         ______           ______\n");
    printf("value stored in pointer          |1283|-------->|2056|---------->|10  |\n");
    printf("                                 |____|         |____|           |____|\n");
    printf("address where pointer             356           1283              2056\n");
    printf(" value is stored        address of ptr2    address of ptr2    address of a\n\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n void main()\n {\n  int a=10;\n  int *ptr1,**ptr2;\n  ptr1=&a;\n  ptr2=&ptr1;\n  printf(\"%%d\\n\",a);------->10\n  printf(\"%%d\\n\",&a);------->2056\n  printf(\"%%d\\n\",ptr1);------->2056\n  printf(\"%%d\\n\",&ptr1);------->1283\n  printf(\"%%d\\n\",*ptr1);------->10\n  printf(\"%%d\\n\",ptr2);------->1283\n  printf(\"%%d\\n\",*ptr2);------->2056\n  printf(\"%%d\\n\",**ptr2);------->10\n  getch();\n }\n");
    printf(" Address Arithmetic :\n 1.An integer value can be added or subtracted from a pointer. It can be incremented or incremented \n array\n");
    printf("         _____________________\n");
    printf("         |11  |12  |13  |14  |\n");
    printf("         |____|____|____|____|\n");
    printf("         |2050|2052|2064|2056|\n");
    printf("         |____|____|____|____|\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n void main()\n {\n  int a[4]={11,9,8,14};\n  int *ptr;\n  ptr=&a;------->output\n  printf(\"%%d\\n\",ptr);------->2050\n  printf(\"%%d\\n\",*ptr);------->11\n  ptr++;/*incrementing*/\n  printf(\"%%d\\n\",ptr);------->2052\n  printf(\"%%d\\n\",* ptr);------->9\n  ptr--;/*decrementing*/\n  printf(\"%%d\\n\",ptr);------->2050\n  printf(\"%%d\\n\",*ptr);------->11\n  getch();\n }\n");
    printf("\n\n Advantages and Disadvantage of pointer \n\n advantages\n • Pointer provide direct access to memory\n • pointer provide a way to return more than one value to the function\n • Reduces the storage space and complexity of program\n • Reduces the execution time of program\n");
    printf(" • Provides an alternate way to access array elements\n • pointers can be used to pass information back and fourth between the calling function and called function.\n ");
    printf("\n disadvantages\n • Uninitialized pointers might cause segmentation fault\n • Dynamically allocated block needs to be freed explicitly, Otherwise it would lead to memory leak\n • pointers are slower than normal variables\n");
    printf(" • if pointer are updated with incorrect values, it might lead to memory corruption\n\n\n");
    printf(" write a c program to read n elements to an array and print those elements using pointer to array\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n void main()\n {\n  int a[100],*ptr,i;\n  printf(\"enter number of elements\");\n  scanf(\"%%d\",&n);\n  ptr=a;\n  for(i=0;i<n;i++)\n  {\n   scanf(\"%%d\",ptr);\n   ptr++;\n  }\n  ptr=a;\n  printf(\"array elements are\");\n  for(i=0;i<n;i++)\n  {\n   printf(\"%%d\",ptr);\n   ptr++;\n  }\n  getch();\n }\n");
    printf(" output :\n  enter the nu. of elements\n  5\n  11 12 13 14 15\n  array elements are\n  11 12 13 14 15\n\n\n");
    printf(" Dynamic Memory Allocation\n\n");
    printf(" The processor of allocation of memory size at is called as dynamic memory allocation.\n");
    printf(" mainly there are four functions for memory management,namely:\n  • malloc()\n  • calloc()\n  • free()\n  • realloc()\n\n\n");
    printf(" malloc() : It allocates memory from a freely available memory and returns a pointer to a block of contiguous memory of specific size.\n");
    printf(" syntax : pointer_name =(data_type *)malloc(byte_size);\n example \n int *a;\n a=(int *)malloc(20);\n\n");
    printf(" calloc() : It allocates memory for array elements and initialize them to zero and also returns a pointer to memory.\n");
    printf(" syntax : pointer_name =(data_type *)calloc(n,size); where n is no. of memory blocks,size is the size of blocks to be allocated in bytes\n example \n int *a;\n a=(int *)calloc(5,2);\n\n");
    printf(" free() :  free function is used to free the memory blocks allocated by malloc and calloc.\n");
    printf(" syntax : free(pointer_name);\n example \n int *ptr;\n free(ptr);\n\n");
    printf(" realloc() : It is used to modify the size of already allocated memory block.\n");
    printf(" syntax : pointer_name =realloc(pointer_name,new_size);\n example \n int *ptr;\n a=(int *)realloc(ptr,4);\n\n");
    printf(" Program to demonstrate allocating memory at runtime using malloc()\n");
    printf(" here array of elements are stored in dynamically allocated memory without any static allocation of size.\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n void main()\n {\n  int *ptr,n,i;  printf(\"enter number of elements\");\n  scanf(\"%%d\",&n);\n  ptr= (int *)malloc(n*sizeof(int));\n  for(i=0;i<n;i++)\n  {\n   scanf(\"%%d\",ptr+i);\n  }\n  printf(\"array elements are\");\n  for(i=0;i<n;i++)\n  {\n   printf(\"%%d\",ptr);\n   ptr++;\n  }\n  getch();\n }\n\n");
    printf(" output\n if we give n=2\n ptr=(int *)malloc(2*sizeof(int));/*allocate 4 bytes memory block */\n");
    printf("        i=     0             1    \n");
    printf("         ____________________________________\n");
    printf("         |                  |               |\n");
    printf("    |--> |__________________|_______________|\n");
    printf("   ptr    2bytes(2056)       2bytes(2058)\n");
    printf(" at i=0\n scanf(\"%%d\",ptr+i)\n stores now elements to ptr+i=2056+0=2056 location\n\n at i=1 scanf(\"%%d\",ptr+i)\n stores now elements to ptr+i=2056+1=2058 location\n similarly printing is done using *(ptr+1)\n\n\n");
    delay_loop(20);
}

int learn10() //structure
{
    system("clear");
    printf("\n\n ********** STRUCTURE ************\n\n");
    printf(" • Structure is a collection of one or more variable or different data types grouped together under a single easy handling.\n");
    printf(" • Structure is a user different data type that can related information about an entity. Structure is nothing regards about particular entity\n");
    printf(" Structure Declaration :\n");
    printf(" syntax:\n struct structure_name\n {\n  data_type member1\n  data_type member2\n  data_type member3\n  .\n  .\n  .\n  data_type member n\n\n");
    printf(" example :\n  struct employee\n  {\n   int empnumber;\n    char empnames[25];\n   int empage;\n   float empsalary;\n  };\n");
    printf("\n\n Declaring Structure Variables :\n\n");
    printf(" • Structure variables are the variables using which members of structure accessed with the help of dot operator.\n");
    printf(" • C allocates memory for structure variables.\n\n syntax\n   struct structure_name structure_variable_name;\n");
    printf("\n example\n consider the structure employee defined earlier the variables for employee structure can be declared as,\n");
    printf(" struct employee emp1;\n");
    printf("                           ________ _______________\n");
    printf("          memory to    <-- |      0 |_____________|\n");
    printf("        stack operation<----_____ 1 |_____________|\n");
    printf("                           |      2 |_____________|\n");
    printf("                           |        |             |\n");
    printf("                          /         |             |\n");
    printf("    memory to store  <---/          |             |\n");
    printf("                                    |             |\n");
    printf("           empname   <---\\          |             |\n");
    printf("                          \\         |             |\n");
    printf("                           \\        |_____________|\n");
    printf("                        ____\\___ 26 |_____________|\n");
    printf("   memory to store ___ /         27 |_____________|\n");
    printf("       empage          \\_________28 |_____________|\n");
    printf("                       /         29 |_____________|\n");
    printf("  memory to store ____/          30 |_____________|\n");
    printf("  empsalary           \\          31 |_____________|\n");
    printf("                       \\_________32 |_____________|\n\n\n");
    printf(" /* Write a C program to read on employee number, name, age, salary and print details using structure */\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n struct employee\n {\n  int empnumber\n  char empname[25];\n  int empage;\n  float empsalary;\n };\n");
    printf(" void main()\n {\n  struct employee emp1;\n  clrscr();\n  printf(\"enter the details\");\n  printf(\"enter the number\\n\");\n  scanf(\"%%d\",&emp.empnumber);\n  printf(\"enter the name\");\n");
    printf("  scanf(\"%%s\",emp1.empname);\n  printf(\"enter the employee age\");\n  scanf(\"%%d\",&emp1.empage);\n  printf(\"enter the employee salary\");\n  scanf(\"%%f\",&emp1.empsalary);\n  printf(\"enter the details\");\n  printf(\"employee number is %%d\\n\",emp.empnumber);\n  printf(\"employee name is %%s\\n\",emp.empname);\n  printf(\"employee age is %%d\\n\",emp.empage);\n  printf(\"employee salary is %%d\\n\",emp.empsalary);\n }\n");
    printf("\n\n\n Array of Structure :\n\n");
    printf(" Considering the employee structure,\n • If we want to read more that one employee details using same structure, then structure variable name has to be declared as an array.\n");
    printf(" i.e\n struct employee emp[25];\n now,\n  ->emp[0].empnumber ,emp[0].empname ,emp[0].empage ,emp[0].empsalary stores details of first employee.\n");
    printf("  ->emp[1].empnumber ,emp[1].empname ,emp[1].empage ,emp[1].empsalary stores details of second employee.\n");
    printf("  ->This reading and displaying details of each employee is done using for loop and generalized as emp[i];\n");
    printf(" /* Write a C program to read n employee details and display using structure concept. */\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n struct employee\n {\n  int empnumber\n  char empname[25];\n  int empage;\n  float empsalary;\n };\n");
    printf(" void main()\n {\n  struct employee emp[19];\n  int n,i;\n  printf(\"enter number of employees\");\n  scanf(\"%%d\",&n);\n  printf(\"enter %%d employee details\\n\",n);\n  for(i=0;i<n;i++)\n  {\n   printf(\"enter %%d employee details\\n\",i+1);\n   printf(\"enter the number\\n\");\n");
    printf("   scanf(\"%%d\",&emp[i].empnumber);\n   printf(\"enter the name\");\n   scanf(\"%%s\",emp[i].empname);\n   printf(\"enter the employee age\");\n   scanf(\"%%d\",&emp[i].empage);\n   printf(\"enter the employee salary\");\n   scanf(\"%%f\",&emp[i].empsalary);\n  }\n");
    printf("  printf(\"employee details are\\n\");\n  for(i=0;i<n;i++)\n  {\n  printf(\"details of employee %%d are \\n\",i+1);\n  printf(\"employee number is %%d\\n\",emp.empnumber);\n  printf(\"employee name is %%s\\n\",emp.empname);\n  printf(\"employee age is %%d\\n\",emp.empage);\n  printf(\"employee salary is %%d\\n\",emp.empsalary);\n  }\n");
    printf("  printf(\"enter the date of birth \\n\");\n  scanf(\"%%d%%d%%d%%s\",&empdob.dd,&empdob.mm,&empdob.yy,empdob.dy);\n  printf(\"employee details are\\n\");\n  printf(\"employee number is %%d\\n\",emp.empnumber);\n  printf(\"employee name is %%s\\n\",emp.empname);\n  printf(\"employee age is %%d\\n\",emp.empage);\n  printf(\"employee salary is %%d\\n\",emp.empsalary);\n  getch();\n }\n");
    printf("\n Output :\n  enter employee number\n  19\n  enter employee name\n  vikhayth\n  enter employee age\n  24\n  enter employee salary\n  39700.700\n  enter date of birth\n  9 9 1991 monday\n\n  employee details are\n  employee number is 19\n  employee name is vikhyath\n  employee age is 24\n  employee salary is 39700.700\n  employee date of birth is  is 9/9/1991 monday\n\n");
    printf("\n /* program to illustrate nested structures there are two ways*/\n");
    printf("\n1)\n #include<stdio.h>\n #include<conio.h>\n struct dob\n {\n  int dd,mm,yy;\n  char dy[25];\n };\n struct employee\n  {\n  int empnum;\n  char empname[25];\n  int empage;  float salary;  struct dob dob;\n };\n");
    printf(" void main()\n {\n  struct employee emp;\n  printf(\"enter the details\");\n  printf(\"enter the number\\n\");\n  scanf(\"%%d\",&emp.empnumber);\n  printf(\"enter the name\");\n");
    printf("  scanf(\"%%s\",emp1.empname);\n  printf(\"enter the employee age\");\n  scanf(\"%%d\",&emp1.empage);\n  printf(\"enter the employee salary\");\n  scanf(\"%%f\",&emp1.empsalary);\n }\n");
    printf("\n\n2)\n #include<stdio.h>\n #include<conio.h>\n struct employee\n {\n  int empnum;\n  char empname[25];\n  int empage;  float empsalary;\n  struct dob\n  {\n   int dd,mm,yy;\n   char dy[25];\n  }dob;\n };\n");
    printf(" void main()\n {\n  struct employee emp;\n  printf(\"enter the details\");\n  printf(\"enter the number\\n\");\n  scanf(\"%%d\",&emp.empnumber);\n  printf(\"enter the name\");\n");
    printf("  scanf(\"%%s\",emp1.empname);\n  printf(\"enter the employee age\");\n  scanf(\"%%d\",&emp1.empage);\n  printf(\"enter the employee salary\");\n  scanf(\"%%f\",&emp1.empsalary);\n }\n");
    printf(" Two ways of creating nested structures\n\n");
    printf("  1) Declaring structure variable as data member in another structure here the object of date of birth structure is defined in employee structure.\n\n");
    printf("  2) Defining structure inside another structure here the child structure dob is defined inside employee structure.\n\n");
    printf("struct structure1\n{\n data_type structure1_member_name;\n .\n .\n .\n};\n\n\nstruct structure2\n{\n data_type structure2_member_name;\n .\n .\n .\n};");
    printf("\n\n Structure and Functions :\n");
    printf(" • Structure can be passed to function and returned from it. Function can access members of structure in three ways, that is, passing structure to function can be done in following three ways,\n");
    printf(" -> Passing individual members.\n -> Passing entire structure or structure variable.\n -> passing address of structure.\n\n");
    printf(" Passing Individual Members :\n • While calling a function from main,in the place of actual parameters we can use or pass structure member as\n structure_variable_name.structure_member_name\n\n");
    printf(" /* program to illustrate structure with functions (by passing individual members)*/\n\n");
    printf(" #include<stdio.h>\n void display(char n[],int en);\n struct employee\n {\n  char empname[25];\n  int empnumber;\n };\n void main()\n {\n  struct employee e;\n  printf(\"enter employee name and number\");\n  scanf(\"%%s%%d\",e.empname,&e.empnumber);\n  display(e.empname,e.empnumber);\n }\n\n void display(char n[21],int en)\n {\n  printf(\"employee details are\\n\");\n  printf(\"employee name is %%s\\t employee number is %%d\\n\",n,en);\n }\n");
    printf(" output\n enter employee name and number\n vikhyath 19\n employee details are\n employee name is vikhyath  employee number is 19\n\n\n");
    printf(" Passing the entire structure Or structure variable : \n");
    printf(" • Instead of passing individual members of structure, entire structure is passed as actual parameter while calling a function. Here the variable of structure is passed to the function.\n");
    printf("\n /* program to illustrate structure with(passing the structure variable)*/\n\n");
    printf(" #include<stdio.h>\n struct employee\n {\n  char empname[25];\n  int empnumber;\n };\n void main()\n {\n  struct employee e;\n  printf(\"enter employee name and number\");\n  scanf(\"%%s%%d\",e.empname,&e.empnumber);\n  display(e);\n }\n void display(struct employee e)\n {\n  printf(\"employee details are\\n\");\n  printf(\"employee name is %%s\\t employee number is %%d\\n\",n,en);\n }\n");
    printf(" output\n enter employee name and number\n vikhyath 19\n employee details are\n employee name is vikhyath  employee number is 19\n\n\n");
    printf("\n Type definition\n\n • The C programming language provides typedef keyword which allows the user to create a new data type. typedef dose not occupy memory\n");
    printf(" syntax :\n typedef existing_data_type new_data_type;\n");
    printf("\n -> Now instead of int a=10; we can declare as integer a=10; which is perform same as int.\n\n\n similarly we can apply for structure as shown below\n\n");
    printf(" ____________________________________________________________\n");
    printf(" |/* without typedef */         | /*with typedef */         |\n");
    printf(" | struct employee              | typedef struct employee   |\n");
    printf(" | {                            | {                         |\n");
    printf(" |  char empname[10];           |  char empname[10];        |\n");
    printf(" |  int empnumber;              |  int empnumber;           |\n");
    printf(" |  int empage;                 |  int empage;              |\n");
    printf(" |  float empsalary;            |  float empsalary;         |\n");
    printf(" |  };                          |  };                       |\n");
    printf(" |  struct employee emp;        |  employee emp;            |\n");
    printf(" |                              |/*here employee itself act |\n");
    printf(" |                              |as data_type which is the  |\n");
    printf(" |                              |structure  type declare usi|\n");
    printf(" |                              |ng typedef. Hence, no need |\n");
    printf(" |                              |of writing struct while    |\n");
    printf(" |                              | structure variable emp */ |\n");
    printf(" |______________________________|___________________________|\n\n\n");
    printf(" Passing Structure through Pointers :\n");
    printf(" • Structure can be passed to function using pointers.\n");
    printf("   syntax :\n       struct structure_name structure_variable, *structure_pointer_name;\n        structure_pointer_name = &structure_variable;\n");
    printf("\n /* program illustrate passing of structures through pointers */\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n struct employee\n {\n  int empnumber;\n  char empname[25];\n  int empage;\n  float empsalary;\n };\n void display(struct employee *eptr);\n");
    printf(" void main()\n {\n  struct employee emp;\n  printf(\"enter employee name\");\n  scanf(\"%%s\",emp.empname);\n  printf(\"enter employee number\");\n  scanf(\"%%d\",emp.empnumber);\n  printf(\"enter employee age\");\n  scanf(\"%%d\",emp.empage);\n  printf(\"enter employee salary\");\n  scanf(\"%%f\",emp.empsalary);\n  display(&emp);  getch();\n }\n");
    printf(" void display(struct employee *eptr)\n {\n  printf(\"employee details are\");\n  printf(\"employee name is %%s\\n\",eptr->empname);\n  printf(\"employee number is %%d\\n\",eptr->empnumber);\n  printf(\"employee age is %%d\\n\",eptr->empage);\n  printf(\"employee salary is %%f\\n\",eptr->empsalary);\n }\n\n");
    delay_loop(20);
}

int learn11() //preprocessor directives
{
    system("clear");
    printf("\n*********** Preprocessor Directive *************\n\n\n");
    printf(" Preprocessor is a program which in invoked by compiler before the compilation of user written program. The declaration of processors statements always begin with (#),usually these are placed before the main() function.\n\n");
    printf(" #include :Specifies the files to be included\n");
    printf(" #define :defines a macro substitution\n");
    printf(" #undef :undefining a macro\n");
    printf(" #ifdef :verifies whether macro is define or not\n");
    printf(" #ifndef :verifies whether macro is defined or not, if it is not defined, it assumes condition to be true\n");
    printf(" #if :used to write generalized condition using relation operator\n");
    printf(" #else :used as an alternative to #if\n");
    printf(" #error :prints error message on stdrr\n");
    printf(" #pragma :give special commands to compiler using standardized method\n");
    printf(" #endif :ends the #if statements\n\n\n");
    printf(" #include\n\n #include loads specified file before compilation of user written program.\n");
    printf(" syntax:\n  #include<header_file_name.h> or  #include\"header_file_name.h\"\n example:\n #include<stdio.h> or #include\"stdio.h\"\n\n");
    printf(" example program\n #include<stdio.h>\n #include<conio.h>\n void main()\n {\n  printf(\" hello world\");\n  getch();\n }\n\n\n");
    printf(" #define\n\n #define defines a macro substitution.\n\n Macro definition : It allows to replace an identifier (variables,function names) in a program by a predefined string.\n\n");
    printf(" syntax:\n  #define identifier string\n example:\n #define pi 3.142\n\n");
    printf(" 1)simple example program\n #include<stdio.h>\n #define pi 3.142\n void main()\n {\n  float r=11.2,area;\n  area=pi*r*r;\n  printf(\" area is %%f\",area);\n  getch();\n }\n\n\n");
    printf(" 2)calculation itself can be defined as macro\n #include<stdio.h>\n #define area(r) (r*r*3.142)\n void main()\n {\n  float x,r=11.2;\n  x=area(r)\n  printf(\" area is %%d\",x);\n  getch();\n }\n\n\n");
    printf(" 3)looping and conditional statements\n #include<stdio.h>\n #define check(x) (if(x%2==0))\\n printf(\"even\");\\nelse\\n printf(\"odd\");\n void main()\n {\n  int x;\n  printf(\"enter the number\");\n  scanf(\"%%d\",&x);\n  check(x);\n  getch();\n }\n\n\n");
    printf(" 4)nested macro can defined with another macro\n #include<stdio.h>\n #define square(a) (a*a)\n #define cube(a) (square(a)*a)\n void main()\n {\n  int a,z;\n  printf(\"enter the number\");\n  scanf(\"%%d\",&x);\n  z=cube(a);\n  printf(\" cube is %%d\",z);\n  getch();\n }\n\n\n");
    printf(" #undef\n\n it undefines macro which is defines using #define.\n");
    printf(" syntax:\n  #undef identifier (macro name)\n example:\n #undef pi\n\n");
    printf(" example program\n #include<stdio.h>\n #define pi 3.142\n void main()\n {\n  float r=11.2,area;\n  #undef pi\n  area=pi*r*r;\n  printf(\" area is %%f\",area);\n  getch();\n }\n\n\n");
    printf(" output :\n it gives an error as pi undefined symbol as it is undefined using #undef after its defination #define\n\n\n");
    printf(" Compiler control directives \n\n");
    printf(" #ifdef, #ifndef, #if,#else are the preprocessor directives which allows the programmer to include macro definition or header files based on condition specified. These are called as Compiler control directives\n");
    printf(" #ifdef\n\n  #ifdef checks whether macro is defined or not.\n syntax: #ifdef identifier /*macro name*/\n ex : #ifdef pi\n\n");
    printf(" example\n #include<stdio.h>\n #define pi 3.142\n void main()\n {\n  #ifdef pi\n    printf(\"area of circle can be calculated\");  #else\n   printf(\"area cannot be calculated as pi undefined\\n\");  #endif\n  getch();\n }\n output:area of circle can be calculated\n\n");
    printf(" #include<stdio.h>\n void main()\n {\n  #ifdef pi\n    printf(\"area of circle can be calculated\");  #else\n   printf(\"area cannot be calculated as pi undefined\\n\");  #endif\n  getch();\n }\n output:area of circle cannot be calculated as pi is undefined\n\n");
    printf(" In the first perform pi is defined hence it shows area of circle can be calculated,but in second program pi is undeclared so it shows are cannot be calculated\n\n\n");
    printf(" #ifndef\n  #ifndef check whether macro is defined or not if it is not defined it assume it is true\n  syntax: #ifndef identifier\n #ifndef pi\n");
    printf(" example\n #include<stdio.h>\n #define pi 3.142\n void main()\n {\n  #ifdef pi\n    printf(\"area of circle can be calculated\");  #else\n   printf(\"area cannot be calculated as pi undefined\\n\");  #endif\n  getch();\n }\n output:area of circle can be calculated\n\n");
    printf(" #include<stdio.h>\n void main()\n {\n  #ifdef pi\n    printf(\"area of circle can be calculated\");  #else\n   printf(\"area cannot be calculated as pi undefined\\n\");  #endif\n  getch();\n }\n output:area of circle cannot be calculated as pi is undefined\n\n\n");
    printf(" #error\n\n #error prints error message on std output display user defined error message\nsyntax : #error \"user error message.\n\"\n ex #error pi not defined\n\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n void main()\n {\n  #ifdef pi\n    printf(\"area of circle can be calculated\");  #else\n   #error \"pi not defined.\"  #endif\n  getch();\n }\n output:area of circle cannot be calculated as pi is undefined. error message stating pi is undefined\n\n");
    printf(" #pragma\n\n #pragma gives special commands to compiler using standardized method. It is mainly used to on or off the warnings\n\n");
    printf(" syntax :\n #pragma war +warning message notation\n #pragma warn -warning message notation.\n  +turns on warning\n  -turns off warning\n");
    printf(" stu                :       undefined structure\n");
    printf(" eff                :       code has no effect\n");
    printf(" rch                :       unreachable code\n");
    printf(" rvl                :       function should return a value\n");
    printf(" voi                :       void function cannot return a value\n\n");
    printf(" example :\n   #pragma warn +rch turns on unreachable code warning.\n   #pragma warn -rch turns off unreachable code warning.\n\n");

    delay_loop(20);
}

/*Quiz answers*/

quiz q1 = {4, 2, 2, 4, 3, 3, 4, 2, 4, 1};  //c-tokens
quiz q2 = {4, 4, 4, 3, 2, 3, 4, 4, 3, 4};  //variables
quiz q3 = {3, 3, 2, 3, 2, 4, 1, 1, 2, 3};  //constants
quiz q4 = {2, 3, 2, 1, 3, 1, 2, 1, 2, 1};  //operators
quiz q5 = {1, 1, 2, 3, 1, 3, 2, 3, 3, 2};  //string
quiz q6 = {1, 3, 3, 4, 2, 4, 4, 4, 3, 4};  //branching and looping
quiz q7 = {3, 1, 3, 3, 3, 1, 1, 2, 1, 4};  //array and string
quiz q8 = {2, 4, 2, 1, 2, 1, 4, 3, 1, 4};  //Functions
quiz q9 = {3, 1, 1, 1, 2, 1, 3, 2, 2, 4};  //pointers
quiz q10 = {2, 4, 3, 4, 2, 2, 2, 4, 4, 4}; //structure
quiz q11 = {4, 1, 2, 3, 3, 1, 4, 3, 1, 2}; //preprocessor directives

/*Quiz*/

int quiz1() //c-tokens
{
    system("clear");
    int x;
l1_1:
    printf("\n1.Which of the following is not a valid declaration in C? \n");
    printf("a.short int x;\nb.short int x;\nc.short x;\nd.unsigned short x;\n");
    printf("Options\n");
    printf("  1.c & d\n  2.b\n  3.a\n  4.all are valid\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q1.q[0])
    {
        printf("Correct\n");
        goto l1_2;
    }
    else
    {
        printf("Wrong\n");
        goto l1_1;
    }
l1_2:
    printf("2. The format identifier '%i' is also used for _____ data type.\n  1. char\n  2. int\n  3. float\n  4. double\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q1.q[1])
    {
        printf("Correct\n");
        goto l1_3;
    }
    else
    {
        printf("wrong\n");
        goto l1_2;
    }
l1_3:
    printf("3. Which data type is most suitable for storing a number 65000 in a 32-bit system?\n 1. signed short\n  2. unsigned short\n  3. long\n  4. int\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q1.q[2])
    {
        printf("Correct\n");
        goto l1_4;
    }
    else
    {
        printf("wrong\n");
        goto l1_3;
    }
l1_4:
    printf("4. Which of the following is a User-defined data type?\n  1. typedef int Boolean;\n  2. typedef enum {Mon, Tue, Wed, Thu, Fri} Workdays;\n  3. struct {char name[10], int age};\n  4. all of the mentioned\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q1.q[3])
    {
        printf("Correct\n");
        goto l1_5;
    }
    else
    {
        printf("wrong\n");
        goto l1_4;
    }
l1_5:
    printf("5. What is the size of an int data type?\n  1. 4 Bytes\n  2. 8 Bytes\n  3. Depends on the system/compiler\n  4. Cannot be determined\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q1.q[4])
    {
        printf("Correct\n");
        goto l1_6;
    }
    else
    {
        printf("wrong\n");
        goto l1_5;
    }
l1_6:
    printf("6. What is short int in C programming?\n 1. The basic data type of C\n  2. Qualifier\n  3. Short is the qualifier and int is the basic data type\n  4. All of the mentioned\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q1.q[5])
    {
        printf("Correct\n");
        goto l1_7;
    }
    else
    {
        printf("wrong\n");
        goto l1_6;
    }
l1_7:
    printf("7.What is C Tokens?\n  1. The smallest individual units of c program\n  2. The basic element recognized by the compiler\n  3. The largest individual units of program\n  4. A & B Both\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q1.q[6])
    {
        printf("Correct\n");
        goto l1_8;
    }
    else
    {
        printf("wrong\n");
        goto l1_7;
    }
l1_8:
    printf("8. If 'a' is an integer variable, then a=5/2 will return a value\n  1. 2.5\n  2. 2\n  3. 2.000000\n  4. 2.500000\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q1.q[7])
    {
        printf("Correct\n");
        goto l1_9;
    }
    else
    {
        printf("wrong\n");
        goto l1_8;
    }
l1_9:
    printf("9. The words if, else, auto, float etc. have predefined meaning and users cannot use them as variables. These words are called\n  1. constant\n  2. identifier\n  3. data types\n  4. keywords\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q1.q[8])
    {
        printf("Correct\n");
        goto l1_10;
    }
    else
    {
        printf("wrong\n");
        goto l1_9;
    }
l1_10:
    printf("10 .By default a real number is treated as a\n  1. float\n  2. double\n  3. long double\n  4. integer\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q1.q[9])
    {
        printf("Correct\n");
        variables();
    }
    else
    {
        printf("wrong\n");
        goto l1_10;
    }
}

int quiz2() // variables
{
    system("clear");
    int x;

l2_1:
    printf("\n1. A C variable cannot start with ?\n  1. An alphabet\n  2. A number\n  3. A special symbol other that underscore\n  4. Both B and C\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q2.q[0])
    {
        printf("Correct\n");
        goto l2_2;
    }
    else
    {
        printf("Wrong\n");
        goto l2_1;
    }
l2_2:
    printf("2. A name having a few letters, numbers and special character _(underscore) is called\n   1. keywords\n   2. reserved keyword\n   3. tokens\n   4. identifiers\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q2.q[1])
    {
        printf("Correct\n");
        goto l2_3;
    }
    else
    {
        printf("wrong\n");
        goto l2_2;
    }
l2_3:
    printf("3. What is the scope of an external variable?\n   1. Whole source file in which it is defined\n   2. From the point of declaration to the end of the file in which it is defined\n   3. Any source file in a program\n   4. From the point of declaration to the end of the file being compiled\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q2.q[2])
    {
        printf("Correct\n");
        goto l2_4;
    }
    else
    {
        printf("wrong\n");
        goto l2_3;
    }
l2_4:
    printf("4. Variable names beginning with underscore is not encouraged. Why?\n   1. It is not standardized\n   2. To avoid conflicts since assemblers and loaders use such names\n   3. To avoid conflicts since library routines use such names\n   4. To avoid conflicts with environment variables of an operating system\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q2.q[3])
    {
        printf("Correct\n");
        goto l2_5;
    }
    else
    {
        printf("wrong\n");
        goto l2_4;
    }
l2_5:
    printf("5. In an assignment statement a=b; which of the following statement is true ?\n   1. The variable a and the variable b are same.\n   2. The value of b is assigned to variable a but if b changes later, it will not effect the value of variable a.\n   3. The value of b is assigned to variable a but if b changes later, it will effect the value of variable\n   4. The value of variable a is assigned to variable b, and the value of variable b is asssigned to variable a.\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q2.q[4])
    {
        printf("Correct\n");
        goto l2_6;
    }
    else
    {
        printf("wrong\n");
        goto l2_5;
    }
l2_6:
    printf("6. Which is an incorrect variable name?\n   1. Id_No\n   2. ID_NO\n   3. IdNo\n   4. Id No\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q2.q[5])
    {
        printf("Correct\n");
        goto l2_7;
    }
    else
    {
        printf("wrong\n");
        goto l2_6;
    }
l2_7:
    printf("7.Which of the following is not valid variable names in 'C'?\n1. float_int, keyword, A1\n2. ANSI, ascii, cpu\n3. valid, variable, name\n4 None of these\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q2.q[6])
    {
        printf("Correct\n");
        goto l2_8;
    }
    else
    {
        printf("wrong\n");
        goto l2_7;
    }
l2_8:
    printf("8. Which of the following cannot be used as identifiers?\n1. Letters\n2. Digits\n3. Underscores\n4. Spaces\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q2.q[7])
    {
        printf("Correct\n");
        goto l2_9;
    }
    else
    {
        printf("wrong\n");
        goto l2_8;
    }
l2_9:
    printf("9. Variable names beginning with underscore is not encouraged. Why?\n   1. It is not standard form\n   2. To avoid conflicts since assemblers and loaders use such names\n   3. To avoid conflicts since library routines use such names\n   4. To avoid conflicts with environment variables of an operating system\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q2.q[8])
    {
        printf("Correct\n");
        goto l2_10;
    }
    else
    {
        printf("wrong\n");
        goto l2_9;
    }
l2_10:
    printf("10 Which of the following is not a valid variable name declaration?\n   1. float PI = 3.14;\n   2. double PI = 3.14;\n   3. int PI = 3.14;\n   4. #define PI 3.14\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q2.q[9])
    {
        printf("Correct\n");
        variables();
    }
    else
    {
        printf("wrong\n");
        goto l2_10;
    }
}

int quiz3() //constants
{
    system("clear");
    int x;

l3_1:
    printf("\n\n1. What is the output of this C code?\n1. #include\n2. int main()\n3. {\n4. enum {ORANGE = 5, MANGO, BANANA = 4, PEACH};\n5. printf(\"PEACH=%d\",PEACH);\n6. }\n");
    printf("options\n   1. PEACH = 3\n   2. PEACH = 4\n   3. PEACH = 5\n   4. PEACH = 6 \n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q3.q[0])
    {
        printf("Correct\n");
        goto l3_2;
    }
    else
    {
        printf("Wrong\n");
        goto l3_1;
    }
l3_2:
    printf("\n\n2. What is the output of this C code?\n   1. #include\n   2. int main() \n   3. { \n   4. printf(\"C programming %%s\", \"Class by %%s Sanfoundry\",\"WOW\");\n5. }  \n\nOptions\n   1. C programming Class by WOW Sanfoundry \n   2. C programming Class by %%s Sanfoundry\n    3. C programming Class by %%s Sanfoundry\n   4. Compilation error \n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q3.q[1])
    {
        printf("Correct\n");
        goto l3_3;
    }
    else
    {
        printf("wrong\n");
        goto l3_2;
    }
l3_3:
    printf("\n\n3. For the following code snippet:\nchar *str = \“Sanfoundry.com0\” \“training classes\”; \nThe character pointer str holds reference to string: \n");
    printf("options \n   1. Sanfoundry.com\n   2. Sanfoundry.com\0training classes\n   3. Sanfoundry.comtraining classes\n   4. Invalid declaration\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q3.q[2])
    {
        printf("Correct\n");
        goto l3_4;
    }
    else
    {
        printf("wrong\n");
        goto l3_3;
    }
l3_4:
    printf("\n\n4. What is the output of this C code?\n1. #include\n2. #define a 10\n3. int main()\n4. {\n5. const int a = 5;\n6. printf(\"a = %d\", a)\;\n7. }\n ");
    printf("options\n   1. a = 5\n   2. a = 10\n   3. Compilation error\n   4. Runtime error\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q3.q[3])
    {
        printf("Correct\n");
        goto l3_5;
    }
    else
    {
        printf("wrong\n");
        goto l3_4;
    }
l3_5:
    printf("\n\n5. What is the output of this C code?\n1. #include\n2. int main()\n3. {\n4. int var = 010;\n5. printf(\"%d\", var)\;\n6. }\n");
    printf("options\n   1. 2\n   2. 8\n   3. 9 \n   4. 10\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q3.q[4])
    {
        printf("Correct\n");
        goto l3_6;
    }
    else
    {
        printf("wrong\n");
        goto l3_5;
    }
l3_6:
    printf("\n\n6. What is the output of this C code?\n1. #include\n2. enum birds {SPARROW, PEACOCK, PARROT};\n3. enum animals {TIGER = 8, LION, RABBIT, ZEBRA};\n4. int main()\n5. {\n6. enum birds m = TIGER;\n7. int k;\n8. k = m;\n9. printf(\"%d\", k)\;\n10. return 0;\n11. }\n ");
    printf("options\n   1. 0\n   2. Compile time error\n   3. 1 \n   4. 8\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q3.q[5])
    {
        printf("Correct\n");
        goto l3_7;
    }
    else
    {
        printf("wrong\n");
        goto l3_6;
    }
l3_7:
    printf("\n\n7. enum types are processed by\n   1. Compiler\n   2. Preprocessor\n   3. Linker\n   4. Assembler\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q3.q[6])
    {
        printf("Correct\n");
        goto l3_8;
    }
    else
    {
        printf("wrong\n");
        goto l3_7;
    }
l3_8:
    printf("\n\n8. Which is false?\n");
    printf("options\n   1. Constant variables need not be defined as they are declared and can be defined later\n   2. Global constant variables are initialised to zero\n   3. const keyword is used to define constant values\n   4. You cannot reassign a value to a constant variable\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q3.q[7])
    {
        printf("Correct\n");
        goto l3_9;
    }
    else
    {
        printf("wrong\n");
        goto l3_8;
    }
l3_9:
    printf("\n\n9. Comment on the output of this C code?\n1. #include\n2. int const print()\n3. {\n4. printf(\"Sanfoundry.com\")\;\n5. return 0;\n6. }\n7. void main()\n8. {\n9. print();\n10. }\n");
    printf("options\n   1. Error because function name cannot be preceded by const \n   2. Sanfoundry.com  \n   3. Sanfoundry.com is printed infinite times \n   4. Blank screen, no output\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q3.q[8])
    {
        printf("Correct\n");
        goto l3_10;
    }
    else
    {
        printf("wrong\n");
        goto l3_9;
    }
l3_10:
    printf("\n\n10. Comment on the output of this C code?\n1. #include\n2. void main()\n3. {\n4. int const k = 5;\n5. k++;\n6. printf(\"k is %d\", k)\;\n7. }\n");
    printf("options\n   1. k is 6\n   2. Error due to const succeeding int \n   3. Error, because a constant variable can be changed only twice \n   4. Error, because a constant variable cannot be changed\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q3.q[9])
    {
        printf("Correct\n");
        operators();
    }
    else
    {
        printf("wrong\n");
        goto l3_10;
    }
}

int quiz4() // operators
{
    system("clear");

    int x;

l4_1:
    printf("\n\n1. #include \"stdio.h\"\nint main()\n{\nint x, y = 5, z = 5;\nx = y == z;\nprintf(\"%d\", x)\;\ngetchar();\nreturn 0;\n}\n\noptions\n   1.0\n   2.1 \n   3.5\n   4. error\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q4.q[0])
    {
        printf("Correct\n");
        goto l4_2;
    }
    else
    {
        printf("Wrong\n");
        goto l4_1;
    }
l4_2:
    printf("\n\n2. #include <stdio.h>\nint main()\n{\nint i = 1, 2, 3;\nprintf(\"%d\", i)\;\nreturn 0;\n}\n\noptions\n   1.1\n   2. 3\n   3.compiler error \n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q4.q[1])
    {
        printf("Correct\n");
        goto l4_3;
    }
    else
    {
        printf("wrong\n");
        goto l4_2;
    }
l4_3:
    printf("\n\n3. #include <stdio.h>\nint main()\n{\nint i = (1, 2, 3);\nprintf(\"%d\", i)\;\nreturn 0;\n}\n\nOptions\n   1. 1\n   2. 3\n   3. Garbage value\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q4.q[2])
    {
        printf("Correct\n");
        goto l4_4;
    }
    else
    {
        printf("wrong\n");
        goto l4_3;
    }
l4_4:
    printf("\n\n4. #include <stdio.h>\nint main()\n{\nint i;\ni = 1, 2, 3;\nprintf(\"%d\", i)\;\nreturn 0;\n}\n\noptions\n   1. 1\n   2. 3\n   3. garbage value\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q4.q[3])
    {
        printf("Correct\n");
        goto l4_5;
    }
    else
    {
        printf("wrong\n");
        goto l4_4;
    }
l4_5:
    printf("\n\n5. #include <stdio.h>\nint main()\n{\nint i = 3;\nprintf(\"%d\", (++i)++);\nreturn 0;\n}\n\noptions\n   1.1  \n   2. 4 \n   3. compiler error\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q4.q[4])
    {
        printf("Correct\n");
        goto l4_6;
    }
    else
    {
        printf("wrong\n");
        goto l4_5;
    }
l4_6:
    printf("\n\n6. #include <stdio.h>\nint foo(int* a, int* b)\n{\nint sum = *a + *b;\n*b = *a;\nreturn *a = sum - *b;\n}\nint main()\n{\nint i = 0, j = 1, k = 2, l;\nl = i++ || foo(&j, &k);\nprintf(\"%d %d %d %d\", i, j, k, l);\nreturn 0;\n}\n\noptions\n   1. 1 2 1 1 \n   2. 1 1 2 1\n   3. 1 2 2 2\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q4.q[5])
    {
        printf("Correct\n");
        goto l4_7;
    }
    else
    {
        printf("wrong\n");
        goto l4_6;
    }
l4_7:
    printf("\n\n7. #include <stdio.h>\nint main()\n{\nint i = 5, j = 10, k = 15;\nprintf(\"%d \", sizeof(k /= i + j))\;\nprintf(\"%d\", k);\nreturn 0;\n}\n\noptions\n   1. 4 1\n   2. 4 15\n   3. 2 1\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q4.q[6])
    {
        printf("Correct\n");
        goto l4_8;
    }
    else
    {
        printf("wrong\n");
        goto l4_7;
    }
l4_8:
    printf("\n\n8. #include <stdio.h>\nint main()\n{\n//Assume sizeof character is 1 byte and sizeof integer is 4 bytes\nprintf(\"%d\", sizeof(printf(\"GeeksQuiz\")));\nreturn 0;\n}\n\noptions\n1. 4\n2. GeeksQuiz4\n3. compiler time error\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q4.q[7])
    {
        printf("Correct\n");
        goto l4_9;
    }
    else
    {
        printf("wrong\n");
        goto l4_8;
    }
l4_9:
    printf("\n\n9. #include <stdio.h>\nint f1() { printf (\"Geeks\")\; return 1\;}\nint f2() { printf (\"Quiz\")\; return 1;}\n\nint main()\n{\nint p = f1() + f2();\nreturn 0;\n}\n\noptions\n   1. compiler error\n   2. compiler dependent \n   3. GeeksQuiz\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q4.q[8])
    {
        printf("Correct\n");
        goto l4_10;
    }
    else
    {
        printf("wrong\n");
        goto l4_9;
    }
l4_10:
    printf("\n\n10 #include <stdio.h>\nint main()\n{\nprintf(\"%d\", 1 << 2 + 3 << 4);\nreturn 0;\n}\n\noptions\n   1. 512\n   2. 0\n   3. 52\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q4.q[9])
    {
        printf("Correct\n");
        strings();
    }
    else
    {
        printf("wrong\n");
        goto l4_10;
    }
}

int quiz5() // string
{
    system("clear");
    int x;

l5_1:
    printf("\n\n1.include <stdio.h>\n#include <stdlib.h>\nint main()\n{\nchar str1[] = \"GeeksQuiz\";\nchar str2[] = {'G', 'e', 'e', 'k', 's', 'Q', 'u', 'i', 'z'};\nint n1 = sizeof(str1)/sizeof(str1[0]);\nint n2 = sizeof(str2)/sizeof(str2[0]);\nprintf(\"n1 = %d, n2 = %d\", n1, n2);\nreturn 0;\n}\nOptions\n   1. n1=10,n2=9 \n   2. n1=10,n2=10\n   3. n1=9,n2=10\n   4. n1=9,n2=9\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q5.q[0])
    {
        printf("Correct\n");
        goto l5_2;
    }
    else
    {
        printf("Wrong\n");
        goto l5_1;
    }
l5_2:
    printf("\n\n2. #include<stdio.h> \nvoid swap(char *str1, char *str2) \n{\nchar *temp = str1;\nstr1 = str2;\nstr2 = temp;\n} \n \nint main() \n{ \nchar *str1 = \"Geeks\";\nchar *str2 = \"Quiz\";\n  swap(str1, str2);\nprintf(\"str1 is %%s, str2 is %%s\", str1, str2)\;\nreturn 0;\n} \n");
    printf("Options\n   1.srt1 is Geeks, str2 is Quiz\n   2.srt1 is quiz, str2 is Geeks \n   3.str1 is Geeks,str2 is Geeks \n   4.str1 is quiz,str2 is quiz\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q5.q[1])
    {
        printf("Correct\n");
        goto l5_3;
    }
    else
    {
        printf("wrong\n");
        goto l5_2;
    }
l5_3:
    printf("\n\n3. #include <stdio.h>\nint fun(char *str1)\n{\nchar *str2 = str1;\nwhile(*++str1);\nreturn (str1-str2);\n}\nint main()\n{\nchar *str = \"GeeksQuiz\";\nprintf(\"%d\", fun(str));\nreturn 0;\n}\noptions\n   1.10\n   2.9 \n   3.8\n   4.random numbers\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q5.q[2])
    {
        printf("Correct\n");
        goto l5_4;
    }
    else
    {
        printf("wrong\n");
        goto l5_3;
    }
l5_4:
    printf("\n\n4. Number of string built-in function \noptions\n   1. 4\n   2. 5\n  3. 6\n  4. 7\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q5.q[3])
    {
        printf("Correct\n");
        goto l5_5;
    }
    else
    {
        printf("wrong\n");
        goto l5_4;
    }
l5_5:
    printf("\n\n5. To compare string ,which following function is used:\n   1. strcmp\n   2. strcom\n   3. strcomp\n   4.strcompare \n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q5.q[4])
    {
        printf("Correct\n");
        goto l5_6;
    }
    else
    {
        printf("wrong\n");
        goto l5_5;
    }
l5_6:
    printf("\n\n6. Which built-in string function used to find the string length\n   1. strln\n   2. strle\n   3. strlen\n   4. strlength\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q5.q[5])
    {
        printf("Correct\n");
        goto l5_7;
    }
    else
    {
        printf("wrong\n");
        goto l5_6;
    }
l5_7:
    printf("\n\n7. #include<stdio.h>\nint main()\n{\nchar a[2][3][3] = {'g','e','e','k','s','q','u','i','z'}\;\nprintf(\"%%s \", **a)\;\nreturn 0;\n}\noptions\n   1.compiler error_category\n   2.geeksquiz \n   3.runtime error\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q5.q[6])
    {
        printf("Correct\n");
        goto l5_8;
    }
    else
    {
        printf("wrong\n");
        goto l5_7;
    }
l5_8:
    printf("\n\n8. #include <stdio.h>\nvoid my_toUpper(char* str, int index)\n{\n*(str + index) &= ~32;\n}\nint main()\n{\nchar* arr = \"geeksquiz\";\nmy_toUpper(arr, 0);\nmy_toUpper(arr, 5)\;\nprintf(\"%%s\", arr);\nreturn 0\s;\n}\noptions\n   1.Geeksquiz\n  2.geeksquiz\n   3.compiler dependent \n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q5.q[7])
    {
        printf("Correct\n");
        goto l5_9;
    }
    else
    {
        printf("wrong\n");
        goto l5_8;
    }
l5_9:
    printf("\n\n9. #include <stdio.h>\nint main()\n{\nchar str[] = \"%d %c\", arr[] = \"GeeksQuiz\";\nprintf(str, 0[arr], 2[arr + 3]);\nreturn 0;\n}\noptions\n   1. G Q\n   2.71 81\n   3.71 Q \n   4.compiler time error\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q5.q[8])
    {
        printf("Correct\n");
        goto l5_10;
    }
    else
    {
        printf("wrong\n");
        goto l5_9;
    }
l5_10:
    printf("\n\n10. #include<stdio.h>\nint main()\n{\nchar str[20] = \"GeeksQuiz\";\nprintf (\"%d\", sizeof(str));\nreturn 0;\n}\noptions\n   1.10\n   2.20 \n   3.Garbage value\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q5.q[9])
    {
        printf("Correct\n");
        module_1();
    }
    else
    {
        printf("wrong\n");
        goto l5_10;
    }
}

int quiz6() // Branching and looping
{
    system("clear");
    int x;

l6_1:
    printf("\n1. Assume that i,j and k are integer variables and their values are 8, 5 and 0 respectively. What will be the values of variables i and k after executing the following expression? \n");
    printf("k=(j>5)?(i<5)?i-j:j-i:k-j;\n i-=(k)?(i)?(j)?:(i):(k);\nWhat will be the result of execution?");
    printf("   1. -3 and 3\n   2. 3 and -5\n   3. 3 and -3\n   4. -5 and 3\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q6.q[0])
    {
        printf("Correct\n");
        goto l6_2;
    }
    else
    {
        printf("Wrong\n");
        goto l6_1;
    }
l6_2:
    printf("2. A name having a few letters, numbers and special character _(underscore) is called\n1. keywords\n2. reserved keyword\n3. tokens\n4. identifiers\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q6.q[1])
    {
        printf("Correct\n");
        goto l6_3;
    }
    else
    {
        printf("wrong\n");
        goto l6_2;
    }
l6_3:
    printf("3. What is the scope of an external variable?\n   1. Whole source file in which it is defined\n   2. From the point of declaration to the end of the file in which it is defined\n   3. Any source file in a program\n   4. From the point of declaration to the end of the file being compiled\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q6.q[2])
    {
        printf("Correct\n");
        goto l6_4;
    }
    else
    {
        printf("wrong\n");
        goto l6_3;
    }
l6_4:
    printf("4. Variable names beginning with underscore is not encouraged. Why?\n   1. It is not standardized\n   2. To avoid conflicts since assemblers and loaders use such names\n   3. To avoid conflicts since library routines use such names\n   4. To avoid conflicts with environment variables of an operating system\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q6.q[3])
    {
        printf("Correct\n");
        goto l6_5;
    }
    else
    {
        printf("wrong\n");
        goto l6_4;
    }
l6_5:
    printf("5. In an assignment statement a=b; which of the following statement is true ?\n   1. The variable a and the variable b are same.\n   2. The value of b is assigned to variable a but if b changes later, it will not effect the value of variable a.\n   3. The value of b is assigned to variable a but if b changes later, it will effect the value of variable\n   4. The value of variable a is assigned to variable b, and the value of variable b is asssigned to variable a.\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q6.q[4])
    {
        printf("Correct\n");
        goto l6_6;
    }
    else
    {
        printf("wrong\n");
        goto l6_5;
    }
l6_6:
    printf("6. Which is an incorrect variable name?\n   1. Id_No\n   2. ID_NO\n   3. IdNo\n   4. Id No\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q6.q[5])
    {
        printf("Correct\n");
        goto l6_7;
    }
    else
    {
        printf("wrong\n");
        goto l6_6;
    }
l6_7:
    printf("7.Which of the following is not valid variable names in 'C'?\n   1. float_int, keyword, A1\n   2. ANSI, ascii, cpu\n   3. valid, variable, name\n   4 None of these\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q6.q[6])
    {
        printf("Correct\n");
        goto l6_8;
    }
    else
    {
        printf("wrong\n");
        goto l6_7;
    }
l6_8:
    printf("8. Which of the following cannot be used as identifiers?\n   1. Letters\n   2. Digits\n   3. Underscores\n   4. Spaces\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q6.q[7])
    {
        printf("Correct\n");
        goto l6_9;
    }
    else
    {
        printf("wrong\n");
        goto l6_8;
    }
l6_9:
    printf("9. Variable names beginning with underscore is not encouraged. Why?\n   1. It is not standard form\n   2. To avoid conflicts since assemblers and loaders use such names\n   3. To avoid conflicts since library routines use such names\n   4. To avoid conflicts with environment variables of an operating system\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q6.q[8])
    {
        printf("Correct\n");
        goto l6_10;
    }
    else
    {
        printf("wrong\n");
        goto l6_9;
    }
l6_10:
    printf("10 Which of the following is not a valid variable name declaration?\n   1. float PI = 3.14;\n   2. double PI = 3.14;\n   3. int PI = 3.14;\n   4. #define PI 3.14\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q6.q[9])
    {
        printf("Correct\n");
        module_2();
    }
    else
    {
        printf("wrong\n");
        goto l6_10;
    }
}

int quiz7() //arrays
{

    int x;

l7_1:
    printf("\n1. What does the following function check for? (all necessary headers to be included and function is called from main) \n");
    printf("#define MAX 10\ntypedef struct stack\n{\n        int top;\n	int item[MAX];\n   }stack;\n   int function(stack *s)\n   {\n   if(s->top == -1)\n	    return 1;\n	 else return 0;\n   }\n");
    printf("   1. full stack\n   2. invalid index\n   3.  empty stack\n   4.infinite stack\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q7.q[0])
    {
        printf("Correct\n");
        goto l7_2;
    }
    else
    {
        printf("Wrong\n");
        goto l7_1;
    }
l7_2:
    printf("\n2. Arrays are best data structures");
    printf("   1. for relatively permanent collections of data\n   2. for the size of the structure and the data in the structure are constantly changing\n   3. for both of above situation\n   4. for non of above situation\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q7.q[1])
    {
        printf("Correct\n");
        goto l7_3;
    }
    else
    {
        printf("wrong\n");
        goto l7_2;
    }
l7_3:
    printf("\n3. A …………………… does not keep track of address of every element in the list.");
    printf("   1. Stack\n   2. String\n   3. Linear array\n   4.Queue\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q7.q[2])
    {
        printf("Correct\n");
        goto l7_4;
    }
    else
    {
        printf("wrong\n");
        goto l7_3;
    }
l7_4:
    printf("4. Each array declaration need not give, implicitly or explicitly, the information about");
    printf("   1. the name of array\n   2. the data type of array\n   3. the first data from the set to be stored\n   4.the index set of the array\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q7.q[3])
    {
        printf("Correct\n");
        goto l7_5;
    }
    else
    {
        printf("wrong\n");
        goto l7_4;
    }
l7_5:
    printf("5. What does ‘stack underflow’ refer to?\n   1. accessing item from an undefined stack\n   2. adding items to a full stack\n   3. removing items from an empty stack\n   4. index out of bounds exception\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q7.q[4])
    {
        printf("Correct\n");
        goto l7_6;
    }
    else
    {
        printf("wrong\n");
        goto l7_5;
    }
l7_6:
    printf("6. Which of the following real world scenarios would you associate with a stack data structure?\n   1. piling up of chairs one above the other\n   2. people standing in a line to be serviced at a counter\n   3. offer services based on the priority of the customer\n   4. tatkal Ticket Booking in IRCTC\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q7.q[5])
    {
        printf("Correct\n");
        goto l7_7;
    }
    else
    {
        printf("wrong\n");
        goto l7_6;
    }
l7_7:
    printf("7. What is the time complexity of pop() operation when the stack is implemented using an array?\n   1. O(1)\n   2. O(n)\n   3. (logn)\n   4. O(nlogn)\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q7.q[6])
    {
        printf("Correct\n");
        goto l7_8;
    }
    else
    {
        printf("wrong\n");
        goto l7_7;
    }
l7_8:
    printf("8. Which of the following array position will be occupied by a new element being pushed for a stack of size N elements(capacity of stack > N).\n   1. S[N-1]\n   2.  S[N]\n   3. S[1]\n   4. S[0]\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q7.q[7])
    {
        printf("Correct\n");
        goto l7_9;
    }
    else
    {
        printf("wrong\n");
        goto l7_8;
    }
l7_9:
    printf("9. Which of the following data structure can’t store the non-homogeneous data elements?\n   1. Arrays\n   2.	Records\n   3. Pointers\n   4. Stacks\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q7.q[8])
    {
        printf("Correct\n");
        goto l7_10;
    }
    else
    {
        printf("wrong\n");
        goto l7_9;
    }
l7_10:
    printf("10. The memory address of the first element of an array is called\n   1. floor address\n   2. foundation address\n   3. first address\n   4. base address\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q7.q[9])
    {
        printf("Correct\n");
        module_2();
    }
    else
    {
        printf("wrong\n");
        goto l7_10;
    }
}

int quiz8() //Functions
{
    system("clear");
    int x;

l8_1:
    printf("\n1. What is the output of this C code? \n");
    printf("int main()\n{\nvoid foo(), f();\nf();\n}\nvoid foo()\n{\nprintf(\"2 \");\n}\nvoid f()\n{\nprintf(\"1 \");\nfoo();\n}\n");
    printf("   1. Compile time error as foo is local to main\n   2. 1   2\n   3.  2   1\n   4.Compile time error due to declaration of functions inside main\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q8.q[0])
    {
        printf("Correct\n");
        goto l8_2;
    }
    else

    {
        printf("Wrong\n");
        goto l8_1;
    }
l8_2:
    printf("What is the output of this C code");
    printf("int main()\n{\nvoid foo();\nvoid f(){\nfoo();\n}\nf();\n}\nvoid foo()\n{\nprintf(\"2 \");\n}\n");
    printf("   1. 2   2\n   2. 2\n   3.   Compile time error\n   4.Depends on the compiler\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q8.q[1])
    {
        printf("Correct\n");
        goto l8_3;
    }
    else

    {
        printf("Wrong\n");
        goto l8_2;
    }
l8_3:
    printf("What is the output of this C code");
    printf("void foo();\nint main()\n{\nvoid foo();\nfoo();return 0;\n}\nvoid foo()\n{\nprintf(\"2 \");\n}\n");
    printf("   1. Compile time error\n   2. 2\n   3. Depends on the compiler\n   4.Depends on the standard\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q8.q[2])
    {
        printf("Correct\n");
        goto l8_4;
    }
    else

    {
        printf("Wrong\n");
        goto l8_3;
    }
l8_4:
    printf("4. #include <stdio.h>\nint main()\n{\nprintf(\"%%d\", main);\nreturn 0;\n}");
    printf("   1. Address of main function\n   2. conilation error\n   3. Runtime Error\n   4.some random value\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q8.q[3])
    {
        printf("Correct\n");
        goto l8_5;
    }
    else

    {
        printf("Wrong\n");
        goto l8_4;
    }
l8_5:
    printf("5. In C, what is the meaning of following function prototype with empty parameter list\nvoid fun()\n{\n/*.... */\n}\n   1. Function can only be called without any parameter\n   2. Function can be called with any number of parameters of any types\n   3. Function can be called with any number of integer parameters.\n   4. Function can be called with one integer parameter\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q8.q[4])
    {
        printf("Correct\n");
        goto l8_6;
    }
    else

    {
        printf("Wrong\n");
        goto l8_5;
    }
l8_6:
    printf("6. How many values can a C Function return at a time.?\n   1. Only One Value\n   2. Maximum of two values\n   3. Maximum of three values\n   4. Maximum of 8 values\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q8.q[5])
    {
        printf("Correct\n");
        goto l8_7;
    }
    else

    {
        printf("Wrong\n");
        goto l8_6;
    }
l8_7:
    printf("7. Choose a correct statement about C Language Functions.?\n   1. A function name can not be same as a predefined C Keyword.\n   2. A function name can start with an Underscore( _ ) or A to Z or a to z.\n   3. Default return type of any function is an Integer.\n   4. All the above.\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q8.q[6])
    {
        printf("Correct\n");
        goto l8_8;
    }
    else

    {
        printf("Wrong\n");
        goto l8_9;
    }
l8_8:
    printf("8. A function which calls itself is called a _ function.\n   1. Self Function\n   2. Auto Function\n   3. Recursive Function\n   4. Static Function\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q8.q[7])
    {
        printf("Correct\n");
        goto l8_9;
    }
    else

    {
        printf("Wrong\n");
        goto l8_8;
    }
l8_9:
    printf("9.What is the output of C Program with functions.?\nvoid main()\n{\n    int a;\n    printf(\"TIGER COUNT=\");\n    a=show();\n    printf(\"%%d\", a);\n}\nint show()\n{\n    return 15;\n    return 35;\n}\n");
    printf("   1. TIGER COUNT=15\n   2. TIGER COUNT=35\n   3. TIGER COUNT=0\n   4. Compiler error\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q8.q[8])
    {
        printf("Correct\n");
        goto l8_10;
    }
    else

    {
        printf("Wrong\n");
        goto l8_9;
    }
l8_10:
    printf("10. Choose correct statements about C Language Pass By Value.\n   1. Pass By Value copies the variable value in one more memory location.\n   2. Pass By Value does not use Pointers.\n   3. Pass By Value protects your source or original variables from changes in outside functions or called functions.\n   4. All the above\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q8.q[9])
    {
        printf("Correct\n");
        module_3();
    }
    else
    {
        printf("wrong\n");
        goto l8_10;
    }
}

int quiz9() //c-tokens
{
    int x;

l9_1:
    printf("1. What will be the output of the following C code?\n #include <stdio.h>\n void foo(int*); int main()\n {\n  int i = 9;\n  foo((&i)++);\n }\n void foo(int *p)\n {\n  printf(\"%d\n\", *p);\n }\n");
    printf("   1.10 \n   2.Some garbage value \n   3.Compile time error \n   4.Segmentation fault/code crash \n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q9.q[0])
    {
        printf("Correct\n");
        goto l9_2;
    }
    else
    {
        printf("Wrong\n");
        goto l9_1;
    }
l9_2:
    printf("2. What will be the output of the following C code?\n #include <stdio.h>\n void foo(int*); int main()\n {\n  int i = 10, *p=&i;\n  foo(p++);\n }\n void foo(int *p)\n {\n  printf(\"%d\n\", *p);\n }\n");
    printf("   1.10 \n   2.Some garbage value \n   3.Compile time error \n   4.Segmentation fault \n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q9.q[1])
    {
        printf("Correct\n");
        goto l9_3;
    }
    else
    {
        printf("wrong\n");
        goto l9_2;
    }
l9_3:
    printf("1. What will be the output of the following C code?\n #include <stdio.h>\n int main()\n {\n  int i = 97, *p=&i;\n  foo(&i);\n  printf(\"%d\",*pi);\n }\n void foo(int *p)\n {\n  int j=2;\n  p=&j;\n  printf(\"%d\n\", *p);\n }\n");
    printf("   1.2 97 \n   2.2 2 \n   3.Compile time error \n   4.Segmentation fault/code crash \n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q9.q[2])
    {
        printf("Correct\n");
        goto l9_4;
    }
    else
    {
        printf("wrong\n");
        goto l9_3;
    }
l9_4:
    printf("4.Which of the following is the correct syntax to send an array as a parameter to function?\n   1.  func(&array);\n   2. func(#array);\n   3.  func(*array);\n   4. func(array[size]);");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q9.q[3])
    {
        printf("Correct\n");
        goto l9_5;
    }
    else
    {
        printf("wrong\n");
        goto l9_4;
    }
l9_5:
    printf("5.Which is an indirection operator among the following?\n   1. &\n   2. *\n   3. ->\n   4. .\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q9.q[4])
    {
        printf("Correct\n");
        goto l9_6;
    }
    else
    {
        printf("wrong\n");
        goto l9_5;
    }
l9_6:
    printf("6. Comment on the following C statement.\nconst int *ptr;\n   1. You cannot change the value pointed by ptr\n   2. You cannot change the pointer ptr itself\n   3. You May or may not change the value pointed by ptr\n   4. You can change the pointer as well as the value pointed by it\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q9.q[5])
    {
        printf("Correct\n");
        goto l9_7;
    }
    else
    {
        printf("wrong\n");
        goto l9_6;
    }
l9_7:
    printf("7.What will be the output of the following C code?\n    #include <stdio.h>\n2.    void main()\n    {\n        int x = 0;\n        int *ptr = &x;\n        printf(\"%d\n\", *ptr);\n    }\n");
    printf("   1. Address of x\n   2. Junk value\n   3. 0\n   4. Run time error\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q9.q[6])
    {
        printf("Correct\n");
        goto l9_8;
    }
    else
    {
        printf("wrong\n");
        goto l9_7;
    }
l9_8:
    printf("8. Which of the following can never be sent by call-by-value?\n   1. Variable\n   2. Array\n   3. Structures\n   4. Both array and structures\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q9.q[7])
    {
        printf("Correct\n");
        goto l9_9;
    }
    else
    {
        printf("wrong\n");
        goto l9_8;
    }
l9_9:
    printf("9. What is the maximum number of arguments that can be passed in a single function?\n   1.  127\n   2. 253\n   3. 361\n   4. No limits in number of arguments\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q9.q[8])
    {
        printf("Correct\n");
        goto l9_10;
    }
    else
    {
        printf("wrong\n");
        goto l9_9;
    }
l9_10:
    printf("10. Which type of variables can have the same name in a different function?\n   1. Global variables\n   2. Static variables\n   3. Function arguments   4. Both static variables and function arguments\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q9.q[9])
    {
        printf("Correct\n");
        pointers();
    }
    else
    {
        printf("wrong\n");
        goto l9_10;
    }
}

int quiz10() //structure
{
    int x;

l10_1:
    printf("1. Which of the following are themselves a collection of different data types?\n");
    printf("   1.string \n   2.structures \n   3.char \n   4.all of the mentioned \n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q10.q[0])
    {
        printf("Correct\n");
        goto l10_2;
    }
    else
    {
        printf("Wrong\n");
        goto l10_1;
    }
l10_2:
    printf("2. User-defined data type can be derived by___________\n");
    printf("   1.struct \n   2.enum \n   3.typedef \n   4.all of the mentioned \n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q10.q[1])
    {
        printf("Correct\n");
        goto l10_3;
    }
    else
    {
        printf("wrong\n");
        goto l10_2;
    }
l10_3:
    printf("3. Which operator connects the structure name to its member name?\n   1. -\n   2. <-\n   3. .\n   4. Both <- and .\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q10.q[2])
    {
        printf("Correct\n");
        goto l10_4;
    }
    else
    {
        printf("wrong\n");
        goto l10_3;
    }
l10_4:
    printf("4.Which of the following structure declaration will throw an error?\n   1. struct temp{}s;\n main(){}\n   2. struct temp{};\n struct temp s;\n main(){}\n   3. struct temp s;\n struct temp{};\n main(){}\n   4. None of the mentioned\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q10.q[3])
    {
        printf("Correct\n");
        goto l10_5;
    }
    else
    {
        printf("wrong\n");
        goto l10_4;
    }
l10_5:
    printf("5.  What will be the output of the following C code?\n#include <stdio.h>\nstruct student\n{ int no; char name[20];\n}\nvoid main()\n{\n struct student s;\n s.no = 8;\n printf(\"hello\");\n}\n   1. Compile time error\n   2. Nothing\n   3. hello\n   4. Varies\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q10.q[4])
    {
        printf("Correct\n");
        goto l10_6;
    }
    else
    {
        printf("wrong\n");
        goto l10_5;
    }
l10_6:
    printf("6. Read the following expression?\nvoid (*ptr)(int);\n   1. ptr is pointer to int that converts its type to void\n   2. ptr is pointer to function passing int returning void\n   3. ptr is pointer to void that converts its type to int\n   4. ptr is pointer to function passing void returning int\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q10.q[5])
    {
        printf("Correct\n");
        goto l10_7;
    }
    else
    {
        printf("wrong\n");
        goto l10_6;
    }
l10_7:
    printf("7. What makes the following declaration denote?\nint **ptr;\n   1. ptr is a function pointer that returns pointer to int type\n   2. ptr is a pointer to an int pointer\n   3.ptr is a pointer to an int pointer\n   4. none of the mentioned\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q10.q[6])
    {
        printf("Correct\n");
        goto l10_8;
    }
    else
    {
        printf("wrong\n");
        goto l10_7;
    }
l10_8:
    printf("8. One of the uses for function pointers in C is __________\n   1. Nothing\n   2. There are no function pointers in c\n   3. To invoke a function\n   4. To call a function defined at run-time\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q10.q[7])
    {
        printf("Correct\n");
        goto l10_9;
    }
    else
    {
        printf("wrong\n");
        goto l10_8;
    }
l10_9:
    printf("9. Which of the following is not possible in C?\n   1.  Array of function pointer\n   2. Returning a function pointer\n   3. Comparison of function pointer\n   4. None of the mentioned\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q10.q[8])
    {
        printf("Correct\n");
        goto l10_10;
    }
    else
    {
        printf("wrong\n");
        goto l10_9;
    }
l10_10:
    printf("10 .Comment on the following declaration.\nint (*ptr)(); // i)\nchar *ptr[]; // ii)\n   1. Both i) and ii) and cannot exist due to same name\n   2. i) is legal, ii) is illegal\n   3. i) is illegal, ii) is legal\n   4. Both i) and ii) will work legal and flawlessly\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q10.q[9])
    {
        printf("Correct\n");
        structure();
    }
    else
    {
        printf("wrong\n");
        goto l10_10;
    }
}

int quiz11() //preprocessor directives
{
    int x;

l11_1:
    printf("1. What does #include stdio.h does in c language.?\n");
    printf("   1. It includes stdio.h into existing C program.\n   2. #include increases the size of C program by including the specified file contents like functions, constants etc.\n   3. #include includes specified file before compilation.\n   4. All the above\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q11.q[0])
    {
        printf("Correct\n");
        goto l11_2;
    }
    else
    {
        printf("Wrong\n");
        goto l11_1;
    }
l11_2:
    printf("2. What is the abbreviation of C STDIO in stdio.h.?\n");
    printf("   1. Standard Input Output\n   2. String Terminating Operations Input Output\n   3. Store Input Output\n   4. None of the above\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q11.q[1])
    {
        printf("Correct\n");
        goto l11_3;
    }
    else
    {
        printf("wrong\n");
        goto l11_2;
    }
l11_3:
    printf("3. Choose a correct statement about #include<stdio.h>.?\n");
    printf("   1. A file named stdio.h will be searched in all directories and included if found\n   2. A file named stdio.h will be searched in current directory and included if found\n   3. A file named stdio.h will be searched in current directory and pre configured list of directories in search path and included if found\n   4.None of the above\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q11.q[2])
    {
        printf("Correct\n");
        goto l11_4;
    }
    else
    {
        printf("wrong\n");
        goto l11_3;
    }
l11_4:
    printf("4 Choose a correct C statement about #include\n");
    printf("1. A file named stdio.h will be searched in all directories and\n included if found\n2. A file named stdio.h will be searched in current directory and\n included if found\n3. A file named stdio.h will be searched in current\n directory and pre configured list of directories in search path and included if found\n4. None of the above\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q11.q[3])
    {
        printf("Correct\n");
        goto l11_5;
    }
    else
    {
        printf("wrong\n");
        goto l11_4;
    }
l11_5:
    printf(" What is the out put of c program with conditional compilation commands. ?\n#define CVV 156\nint main()\n{\n #if def CVV\n      printf(\"CVV YES\");\n #else        printf(\"CVV MO\");\n #endif return 0;\n}\n");
    printf("   1. printf(\"CVV YES\");\n   2. CVV YES\n   3. CVV NO\n   4. Compiler error\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q11.q[4])
    {
        printf("Correct\n");
        goto l11_6;
    }
    else
    {
        printf("wrong\n");
        goto l11_5;
    }
l11_6:
    printf("6. In Turbo C, Search Path of Directories for #Include is mentioned under the option.?\n");
    printf("   1. Include Directories\n   2. Exclude Directories\n   3.Add Directories\n   4. Extra Directories\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q11.q[5])
    {
        printf("Correct\n");
        goto l11_7;
    }
    else
    {
        printf("wrong\n");
        goto l11_6;
    }
l11_7:
    printf("7. In Turbo C, Search Path of Directories for #Include is mentioned under the option.?\nint main()\n{\n #if def CVV\n      printf(\"CVV YES\");\n #else        printf(\"CVV199\");\n #endif  printf(\"New CVV=%d\",CVV);\nreturn 0;\n}\n");
    printf("   1. CVV 199\n   2. printf(\"CVV YES\");\n   3. CVV YES\n   4. NEW CVV=199\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q11.q[6])
    {
        printf("Correct\n");
        goto l11_8;
    }
    else
    {
        printf("wrong\n");
        goto l11_7;
    }
l11_8:
    printf("8. what is the output of this program. ?\nint main()\n{\n #ifndef CVV\n     #define CVV 199\n      printf(\"CVV =%%d\",CVV);\n #else        printf(\"CVV=%%d\",188);\n #endif\nreturn 0;\n}\n");
    printf("   1. CVV=188\n   2. CVV=0\n   3. CVV=199\n   4. Compiler error\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q11.q[7])
    {
        printf("Correct\n");
        goto l11_9;
    }
    else
    {
        printf("wrong\n");
        goto l11_8;
    }
l11_9:
    printf("9. What is the output of c program with #undef.?\n");
    printf(" int main()\n {\n  #undef BIRD\n  printf(\"OKAY\");\n  return 0;\n }\n");
    printf("   1. OKAY\n   2. Compiler error\n   3. BIRDOKAY\n   4. None of the above\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q11.q[8])
    {
        printf("Correct\n");
        goto l11_10;
    }
    else
    {
        printf("wrong\n");
        goto l11_9;
    }
l11_10:
    printf("10. What is the C Pragma directive or command to execute a particular function at startup of program.?\n");
    printf("   1. #pragma start function1\n   2. #pragma startup function1\n   3. #pragma startnow function1\n   4. #prama startup function1\n");
    printf("Enter the choice : ");
    scanf("%d", &x);
    if (x == q11.q[9])
    {
        printf("Correct\n");
        preprocessor_directives();
    }
    else
    {
        printf("wrong\n");
        goto l11_10;
    }
}

/* Topics*/

int c_tokens()
{
    system("clear");
    int o;
    if (automat("C-TOKENS") == 1)
    {
        learn1();
        delay_loop(25); //delay in sec

        quiz1();
    }
    else
    {
        while (1)
        {
            printf("\n----------C-TOKENS----------\n");
            printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu\n4.Exit\n");
            printf("Enter the option : ");
            scanf("%d", &o);
            switch (o)
            {
            case 1:
                learn1();
                break;
            case 2:
                quiz1();
                break;
            case 3:
                return 0;
            case 4:
                exit(0);
            default:
                printf("Invalid option\n");
            }
        }
    }
    return 0;
}
int variables()
{
    system("clear");
    int o;
    int j;
    if (automat("VARIABLES") == 1)
    {
        learn2();
        delay_loop(40); //delay in sec

        quiz2();
    }
    else
    {
        while (1)
        {
            printf("\n----------VARIABLES----------\n");
            printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu\n4.Exit\n");
            printf("Enter the option : ");
            scanf("%d", &o);
            switch (o)
            {
            case 1:
                learn2();
                break;
            case 2:
                quiz2();
                break;
            case 3:
                return 0;
            case 4:
                exit(0);
            default:
                printf("Invalid option\n");
            }
        }
    }
    return 0;
}
int constants()
{
    system("clear");
    int o;
    int j;
    if (automat("CONSTANTS") == 1)
    {
        learn3();
        delay_loop(40); //delay  in sec
        quiz3();
    }
    else
    {
        while (1)
        {
            printf("\n----------CONSTANTS----------\n");
            printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu\n4.exit\n");
            printf("Enter the option : ");
            scanf("%d", &o);
            switch (o)
            {
            case 1:
                learn3();
                break;
            case 2:
                quiz3();
                break;
            case 3:
                return 0;
            case 4:
                exit(0);
            default:
                printf("Invalid option\n");
            }
        }
    }
    return 0;
}
int operators()
{
    system("clear");
    int o;
    int j;
    if (automat("OPERATORE") == 1)
    {
        learn4();
        delay_loop(200);
        quiz4();
    }
    else
    {
        while (1)
        {
            printf("\n----------OPERATORS----------\n");
            printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu\n4.Exit\n");
            printf("Enter the option : ");
            scanf("%d", &o);
            switch (o)
            {
            case 1:
                learn4();
                break;
            case 2:
                quiz4();
                break;
            case 3:
                return 0;
            case 4:
                exit(0);
            default:
                printf("Invalid option\n");
            }
        }
    }
    return 0;
}
int strings()
{
    system("clear");
    int o;
    int j;
    if (automat("STRINGS") == 1)
    {
        learn5();
        delay_loop(130);
        quiz5();
    }
    else
    {
        while (1)
        {
            printf("\n----------STRINGS-----------\n");
            printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu4.exit\n");
            printf("Enter the option\n");
            scanf("%d", &o);
            switch (o)
            {
            case 1:
                learn5();
                break;
            case 2:
                quiz5();
                break;
            case 3:
                return 0;
            case 4:
                exit(0);
            default:
                printf("Invalid option\n");
            }
        }
    }
    return 0;
}
/*module-2*/
int branching_and_looping()
{
    system("clear");
    int o;
    int j;
    if (automat("BRANCHING AND LOOPING") == 1)
    {
        learn6();
        delay_loop(150);
        quiz6();
    }
    else
    {
        while (1)
        {
            printf("\n----------BRANCHING & LOOPING-----------\n");
            printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu4.exit\n");
            printf("Enter the option\n");
            scanf("%d", &o);
            switch (o)
            {
            case 1:
                learn6();
                break;
            case 2:
                quiz6();
                break;
            case 3:
                return 0;
            case 4:
                exit(0);
            default:
                printf("Invalid option\n");
            }
        }
    }
    return 0;
}
/*module-3*/
int array_and_string()
{
    system("clear");
    int o;
    int j;
    if (automat("ARRAY AND STRINGS") == 1)
    {
        learn7();
        delay_loop(150);
        quiz7();
    }
    else
    {
        while (1)
        {
            printf("\n----------ARRAY AND STRING-----------\n");
            printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu4.exit\n");
            printf("Enter the option\n");
            scanf("%d", &o);
            switch (o)
            {
            case 1:
                learn7();
                break;
            case 2:
                quiz7();
                break;
            case 3:
                return 0;
            case 4:
                exit(0);
            default:
                printf("Invalid option\n");
            }
        }
    }
    return 0;
}
/*module-4*/
int functions()
{
    system("clear");
    int o;
    int j;
    if (automat("FUNCTIONS") == 1)
    {
        learn8();
        delay_loop(150);
        quiz8();
    }
    else
    {
        while (1)
        {
            printf("\n----------FUNCTIONS-----------\n");
            printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu4.exit\n");
            printf("Enter the option\n");
            scanf("%d", &o);
            switch (o)
            {
            case 1:
                learn8();
                break;
            case 2:
                quiz8();
                break;
            case 3:
                return 0;
            case 4:
                exit(0);
            default:
                printf("Invalid option\n");
            }
        }
    }
    return 0;
}
//MODULE-5
int pointers()
{
    system("clear");
    int o;
    int j;
    if (automat("POINTERS") == 1)
    {
        learn9();
        delay_loop(150);
        quiz9();
    }
    else
    {
        while (1)
        {
            printf("\n----------POINTERS-----------\n");
            printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu4.exit\n");
            printf("Enter the option\n");
            scanf("%d", &o);
            switch (o)
            {
            case 1:
                learn9();
                break;
            case 2:
                quiz9();
                break;
            case 3:
                return 0;
            case 4:
                exit(0);
            default:
                printf("Invalid option\n");
            }
        }
    }
    return 0;
}
int structure()
{
    system("clear");
    int o;
    int j;
    if (automat("STRUCTURE") == 1)
    {
        learn10();
        delay_loop(150);
        quiz10();
    }
    else
    {
        while (1)
        {
            printf("\n----------STRUCTURE-----------\n");
            printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu4.exit\n");
            printf("Enter the option\n");
            scanf("%d", &o);
            switch (o)
            {
            case 1:
                learn10();
                break;
            case 2:
                quiz10();
                break;
            case 3:
                return 0;
            case 4:
                exit(0);
            default:
                printf("Invalid option\n");
            }
        }
    }
    return 0;
}
int preprocessor_directives()
{
    system("clear");
    int o;
    int j;
    if (automat("PROPROCESSOR DIRECTIVES") == 1)
    {
        learn11();
        delay_loop(150);
        quiz11();
    }
    else
    {
        while (1)
        {
            printf("\n----------PREPROCESSOR DIRECTIVES-----------\n");
            printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu4.exit\n");
            printf("Enter the option\n");
            scanf("%d", &o);
            switch (o)
            {
            case 1:
                learn11();
                break;
            case 2:
                quiz11();
                break;
            case 3:
                return 0;
            case 4:
                exit(0);
            default:
                printf("Invalid option\n");
            }
        }
    }
    return 0;
}

/* Modules*/

int module_1()
{
    int o;
    while (1)
    {
        printf("\n----------MODULE-1----------\n");
        printf("1.C TOKENS\n2.VARIABLES\n3.CONSTANTS\n4.OPERATORS\n5.STRING\n6.BACK TO MAIN MENU\n7.EXIT\n");
        printf("Enter the option : ");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
            c_tokens();
            break;
        case 2:
            variables();
            break;
        case 3:
            constants();
            break;
        case 4:
            operators();
            break;
        case 5:
            strings();
            break;
        case 6:
            return 0;
        case 7:
            exit(0);
        default:
            printf("Sorry!! It's an invalid option\n");
        }
    }
    return 0;
}

int module_2()
{
    int o;
    while (1)
    {
        printf("\n----------MODULE-2----------\n");
        printf("1. BRANCHING AND LOOPING\n2.BACK TO MAIN MENU\n3.EXIT\n");
        printf("Enter the option : ");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
            branching_and_looping();
            break;
        case 2:
            return 0;
        case 3:
            exit(0);

        default:
            printf("Sorry!! It's an invalid option\n");
        }
    }
    return 0;
}
int module_3()
{
    int o;
    while (1)
    {
        printf("\n----------MODULE-3----------\n");
        printf("1.ARRAY AND STRINGS\n2.BACK TO MAIN MENU\n3.EXIT\n");
        printf("Enter the option : ");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
            array_and_string();
            break;
        case 2:
            return 0;
        case 3:
            exit(0);
        default:
            printf("Sorry!! It's an invalid option\n");
        }
    }
    return 0;
}
int module_4()
{
    int o;
    while (1)
    {
        printf("\n----------MODULE-4----------\n");
        printf("1. FUNCTIONS\n2. BACK TO MAIN MENU\n3.EXIT\n");
        printf("Enter the option : ");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
            functions();
            break;
        case 2:
            return 0;
        case 3:
            exit(0);
        default:
            printf("Sorry!! It's an invalid option\n");
        }
    }
    return 0;
}

int module_5()
{
    int o;
    while (1)
    {
        printf("\n----------MODULE-5----------\n");
        printf("1. POINTERS\n2. STRUCTURE\n3. PREPROCESSOR DIRECTIVES\n4.BACK TO MAIN MENU\n5.EXIT\n");
        printf("Enter the option : ");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
            pointers();
            break;
        case 2:
            structure();
            break;
        case 3:
            preprocessor_directives();
            break;
        case 4:
            return 0;
        case 5:
            exit(0);

        default:
            printf("Sorry!! It's an invalid option\n");
        }
    }
    return 0;
}

void main()
{
    int o;
    system("clear");
    heading();
    while (1)
    {
        printf("\n----------WELCOME----------\n");
        printf("1.Module-1\n2.Module-2\n3.Module-3\n4.Module-4\n5.Module-5\n6.Exit\n");
        printf("Enter the option : ");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
            module_1();
            break;
        case 2:
            module_2();
            break;
        case 3:
            module_3();
            break;
        case 4:
            module_4();
            break;
        case 5:
            module_5();
            break;
        case 6:
            exit(0);
        default:
            printf("OPss!!! You entered Invalid option\n");
        }
    }
    
}
