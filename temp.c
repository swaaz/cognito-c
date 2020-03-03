#include<stdio.h>
//#include<conio.h>
//#include<ctype.h>
#include<stdlib.h>
//#include<string.h>
//#include<conio.h>
//#include<module-1.h>
//#include<c-tokens.h>
//#include<constant.h>
//#include<variables.h>
//#include<learn1.h>
//#include<learn2.h>
//#include<learn3.h>

typedef struct
{
    int q[10];
}quiz;

int automat()
{
    int c;
    printf("\nDo you want this module to be automatic?\n");
    printf("1. YES\n2. NO\n");
    printf("Enter the choice\n");
    scanf("%d",&c);
    if(c==1) return 1;
    else if(c==2) return 2;
    else return 0;
}

int delay()
{
    long int i;

    for(i=0;i<999999999;i++);
    return 0;

}

int learn1() //c-tokens
{
    printf("\n----------Learn----------\n");
    printf("C-Tokens and the smallesT individual Hits of a C-program. These are the basic building blocks in a C program that cannot be further broken down into elements\n");
    printf("There are mainly five C tokens namely\nKeywords\nIdentifiers (Variables)\nConstants\nStrings\nOperators\n");
    printf("Keywords\nKeywords are the predefined words in a C compiler which are meant to perform specific function in C program Keywords cannot be used for naming variables, identifiers and functions. C Language supports 32 keywords namely int, float, double, long, short, char, if,else switch, case, for, while, goto, do, break, continue, struct, enum, extern, typedef, const,auto, register, default, volatile, sizeof, static, signed, return, union, void, unsigned\n");
}

int learn2() //variables
{
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
    printf(" Operators :\n");
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
    printf("\n General usage :\n");
    printf("Relational expression connector relational expression.\nexample:((a>b)||(a>c))");
    printf("\nExample: program to illustrate logical operators\n");
    printf("/*program to illustrate logical operators*/\n");
    printf("#include<stdio.h>\nvoid main()\n{\n int a=9,b=6,c=3;\n if((a>b)&&(a>c))\n {\n   printf(\"a is greater than b and c\");\n }\n}\n" );
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
    return 0;
}
int learn5() //strings
{
    printf("\n**********  STRING  **********                       \n");
    printf("\n•String is an array of character or a pointer to a portion of memory containing ASCII character\n ");
    printf("\n•String can also be defined as sequence of zero or more character followed by a NULL '\0'character. ");
    printf("\n•character type of value are enclosed in single quotes.\n\n     •string type values are enclosed by double quotes.\nexample: \"a\" is a string value\n");
    printf("\nDeclaring a variable\n");
    printf("syntax: char string_name[string_size]\nwhere ,\n     •char is a data type of string.\n     •string_name is name for string variable.\n     •string_size is length of string which is to be stored.\n    ->string_size is the length of string i.e no. of characters stored in the string (excluding NULL character)\n ");
    printf("example: char name[21];\n->here 20 character are stored by character and 1 space is filled by the NULL making the end of the string\n");
    printf("string initialization of string :\nchar name [11]={'p','r','a','k','h','y','a','t','h','\0'};\n");
    printf("char name[11]=\"prakayath\";\n");
    printf("     •Both are same, if we specify characters separately we should'' for each character and finally enclosing all the character within the braces {} and if we directly specify the entire string at one time we use ""\n ");
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
}

quiz q1={4,2,2,4,3,3,4,2,4,1}; //c-tokens
quiz q2={4,4,4,3,2,3,4,4,3,4}; //variables
quiz q3={3,3,2,3,2,4,1,1,2,3}; //constants
quiz q4={2,3,2,1,3,1,2,1,2,1}; //operators
quiz q5={1,1,2,3,1,3,2,3,3,2}; //stringh

int quiz1() //c-tokens
{   
    system("clear");
    int x;

   l1_1:printf("\n1. Which of the following is not a valid declaration in C? \n");
        printf("a.short int x;\nb.short int x;\nc.short x;\nd.unsigned short x;\n");
        printf("Options\n");
        printf("1.c & d\n2.b\n3.a\n4.all are valid\n");
        printf("Enter the choice : ");
        scanf("%d",&x);

        if(x==q1.q[0])
        {
            printf("Correct\n");
            goto l1_2;
        }
        else
        {
            printf("Wrong\n");
            goto l1_1;
        }
    l1_2:  printf("\n\n2. The format identifier ‘%i’ is also used for _____ data type.\n1) char\n2) int\n3) float\n4) double\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.q[1])
        {
            printf("Correct\n");
            goto l1_3;
        }
        else
        {
            printf("wrong\n");
            goto l1_2;
        }
    l1_3:  printf("\n\n3. Which data type is most suitable for storing a number 65000 in a 32-bit system?\n1) signed short\n2) unsigned short\n3) long\n4) int\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.q[2])
        {
            printf("Correct\n");
            goto l1_4;
        }
        else
        {
            printf("wrong\n");
            goto l1_3;
        }
    l1_4:  printf("\n\n4. Which of the following is a User-defined data type?\n1) typedef int Boolean;\n2) typedef enum {Mon, Tue, Wed, Thu, Fri} Workdays;\n3) struct {char name[10], int age};\n4) all of the mentioned\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.q[3])
        {
            printf("Correct\n");
            goto l1_5;
        }
        else
        {
            printf("wrong\n");
            goto l1_4;
        }
    l1_5:  printf("\n\n5. What is the size of an int data type?\n1) 4 Bytes\n2) 8 Bytes\n3) Depends on the system/compiler\n4) Cannot be determined\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.q[4])
        {
            printf("Correct\n");
            goto l1_6;
        }
        else
        {
            printf("wrong\n");
            goto l1_5;
        }
    l1_6:  printf("\n\n6. What is short int in C programming?\n1) The basic data type of C\n2) Qualifier\n3) Short is the qualifier and int is the basic data type\n4) All of the mentioned\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.q[5])
        {
            printf("Correct\n");
            goto l1_7;
        }
        else
        {
            printf("wrong\n");
            goto l1_6;
        }
    l1_7: printf("\n\n7. What is C Tokens?\n1. The smallest individual units of c program\n2. The basic element recognized by the compiler\n3. The largest individual units of program\n4. A & B Both\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.q[6])
        {
            printf("Correct\n");
            goto l1_8;
        }
        else
        {
            printf("wrong\n");
            goto l1_7;
        }
    l1_8: printf("\n\n8. If 'a' is an integer variable, then a=5/2 will return a value\n1. 2.5\n2. 2\n3. 2.000000\n4. 2.500000\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.q[7])
        {
            printf("Correct\n");
            goto l1_9;
        }
        else
        {
            printf("wrong\n");
            goto l1_8;
        }
    l1_9:  printf("\n\n9. The words if, else, auto, float etc. hasve predefined meaning and users cannot use them as variables. These words are called\n1. constant\n2. identifier\n3. data types\n4. keywords\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.q[8])
        {
            printf("Correct\n");
            goto l1_10;
        }
        else
        {
            printf("wrong\n");
            goto l1_9;
        }
    l1_10: printf("\n\n10. By default a real number is treated as a\n1. float\n2. double\n3. long double\n4. integer\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.q[9])
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
{   system("clear");
     int x;
     l2_1:   printf("\n\n1. A C variable cannot start with ? \n1. An alphabet\n2.. A number\n3. A special symbol other that underscore\n4. Both B and C\n");
         printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.q[0])
        {
            printf("Correct\n");
            goto l2_2;
        }
        else
        {
            printf("Wrong\n");
            goto l2_1;
        }
    l2_2:  printf("\n\n2. A name having a few letters, numbers and special character _(underscore) is called\n1. keywords\n2. reserved keyword\n3. tokens\n4. identifiers\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.q[1])
        {
            printf("Correct\n");
            goto l2_3;
        }
        else
        {
            printf("wrong\n");
            goto l2_2;
        }
    l2_3:  printf("\n\n3. What is the scope of an external variable?\n1. Whole source file in which it is defined\n2. From the point of declaration to the end of the file in which it is defined\n3. Any source file in a program\n4. From the point of declaration to the end of the file being compiled\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.q[2])
        {
            printf("Correct\n");
            goto l2_4;
        }
        else
        {
            printf("wrong\n");
            goto l2_3;
        }
    l2_4:  printf("\n\n4. Variable names beginning with underscore is not encouraged. Why? \n1. It is not standardized\n2. To avoid conflicts since assemblers and loaders use such names\n3. To avoid conflicts since library routines use such names\n4. To avoid conflicts with environment variables of an operating system\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.q[3])
        {
            printf("Correct\n");
            goto l2_5;
        }
        else
        {
            printf("wrong\n");
            goto l2_4;
        }
    l2_5:  printf("\n\n5. In an assignment statement a=b; which of the following statement is true ?\n1. The variable a and the variable b are same.\n2. The value of b is assigned to variable a but if b changes later, it will not effect the value of variable a.\n3. The value of b is assigned to variable a but if b changes later, it will effect the value of variable\n4. The value of variable a is assigned to variable b, and the value of variable b is asssigned to variable a.\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.q[4])
        {
            printf("Correct\n");
            goto l2_6;
        }
        else
        {
            printf("wrong\n");
            goto l2_5;
        }
    l2_6:  printf("\n\n6. Which is an incorrect variable name?\n1. Id_No\n2. ID_NO\n3. IdNo\n4. Id No\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.q[5])
        {
            printf("Correct\n");
            goto l2_7;
        }
        else
        {
            printf("wrong\n");
            goto l2_6;
        }
    l2_7: printf("\n\n7. Which of the following is not valid variable names in 'C'?\n1. float_int, keyword, A1\n2. ANSI, ascii, cpu\n3. valid, variable, name\n4 None of these\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.q[6])
        {
            printf("Correct\n");
            goto l2_8;
        }
        else
        {
            printf("wrong\n");
            goto l2_7;
        }
    l2_8: printf("\n\n8. Which of the following cannot be used as identifiers?\n1. Letters\n2. Digits\n3. Underscores\n4. Spaces\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.q[7] )
        {
            printf("Correct\n");
            goto l2_9;
        }
        else
        {
            printf("wrong\n");
            goto l2_8;
       }
    l2_9:  printf("\n\n9. Variable names beginning with underscore is not encouraged. Why?\n1. It is not standard form\n2. To avoid conflicts since assemblers and loaders use such names\n3. To avoid conflicts since library routines use such names\n4. To avoid conflicts with environment variables of an operating system\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.q[8])
        {
            printf("Correct\n");
            goto l2_10;
        }
        else
        {
            printf("wrong\n");
            goto l2_9;
        }
    l2_10: printf("\n\n10 Which of the following is not a valid variable name declaration?\n1. float PI = 3.14;\n2. double PI = 3.14;\n3. int PI = 3.14;\n4. #define PI 3.14\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.q[9])
        {
            printf("Correct\n");
            constants();
        }
        else
        {
            printf("wrong\n");
            goto l2_10;
        }
}



int quiz3() //constants
{   system("clear");
        int x;

   l3_1: printf("\n\n1. What is the output of this C code?\n1. #include\n2. int main()\n3. {\n4. enum {ORANGE = 5, MANGO, BANANA = 4, PEACH};\n5. printf(\"PEACH=%d\",PEACH)\;\n6. }\n");
        printf("options\n1. PEACH = 3\n2. PEACH = 4\n3. PEACH = 5\n4. PEACH = 6 \n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q3.q[0])
        {
            printf("Correct\n");
            goto l3_2;
        }
        else
        {
            printf("Wrong\n");
            goto l3_1;
        }
    l3_2:  printf("\n\n2. What is the output of this C code?\n1. #include\n2. int main() \n3. { \n4. printf(\"C programming %%s\", \"Class by %%s Sanfoundry\",\"WOW\")\;\n5. }  \n\nOptions\n1. C programming Class by WOW Sanfoundry \n2. C programming Class by %%s Sanfoundry\n3. C programming Class by %%s Sanfoundry\n4. Compilation error \n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q3.q[1])
        {
            printf("Correct\n");
            goto l3_3;
        }
        else
        {
            printf("wrong\n");
            goto l3_2;
        }
    l3_3:  printf("\n\n3. For the following code snippet:\nchar *str = \“Sanfoundry.com\\0\” \“training classes\”\; \nThe character pointer str holds reference to string: \n");
           printf("options \n1. Sanfoundry.com\n2. Sanfoundry.com\0training classes\n3. Sanfoundry.comtraining classes\n4. Invalid declaration\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q3.q[2])
        {
            printf("Correct\n");
            goto l3_4;
        }
        else
        {
            printf("wrong\n");
            goto l3_3;
        }
    l3_4:  printf("\n\n4. What is the output of this C code?\n1. #include\n2. #define a 10\n3. int main()\n4. {\n5. const int a = 5;\n6. printf(\"a = %d\", a)\;\n7. }\n ");
            printf("options\n1. a = 5\n2. a = 10\n3. Compilation error\n4. Runtime error\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q3.q[3])
        {
            printf("Correct\n");
            goto l3_5;
        }
        else
        {
            printf("wrong\n");
            goto l3_4;
        }
    l3_5:  printf("\n\n5. What is the output of this C code?\n1. #include\n2. int main()\n3. {\n4. int var = 010;\n5. printf(\"%d\", var)\;\n6. }\n");
            printf("options\n1. 2\n2. 8\n3. 9 \n4. 10\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q3.q[4])
        {
            printf("Correct\n");
            goto l3_6;
        }
        else
        {
            printf("wrong\n");
            goto l3_5;
        }
    l3_6:  printf("\n\n6. What is the output of this C code?\n1. #include\n2. enum birds {SPARROW, PEACOCK, PARROT};\n3. enum animals {TIGER = 8, LION, RABBIT, ZEBRA};\n4. int main()\n5. {\n6. enum birds m = TIGER;\n7. int k;\n8. k = m;\n9. printf(\"%d\", k)\;\n10. return 0;\n11. }\n ");
            printf("options\n1. 0\n2. Compile time error\n3. 1 \n4. 8\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q3.q[5])
        {
            printf("Correct\n");
            goto l3_7;
        }
        else
        {
            printf("wrong\n");
            goto l3_6;
        }
    l3_7: printf("\n\n7. enum types are processed by\n1. Compiler\n2. Preprocessor\n3. Linker\n4. Assembler\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q3.q[6])
        {
            printf("Correct\n");
            goto l3_8;
        }
        else
        {
            printf("wrong\n");
            goto l3_7;
        }
    l3_8: printf("\n\n8. Which is false?\n");
            printf("options\n1. Constant variables need not be defined as they are declared and can be defined later\n2. Global constant variables are initialised to zero\n3. const keyword is used to define constant values\n4. You cannot reassign a value to a constant variable\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q3.q[7])
        {
            printf("Correct\n");
            goto l3_9;
        }
        else
        {
            printf("wrong\n");
            goto l3_8;
        }
    l3_9:  printf("\n\n9. Comment on the output of this C code?\n1. #include\n2. int const print()\n3. {\n4. printf(\"Sanfoundry.com\")\;\n5. return 0;\n6. }\n7. void main()\n8. {\n9. print();\n10. }\n");
            printf("options\n1. Error because function name cannot be preceded by const \n2. Sanfoundry.com  \n3. Sanfoundry.com is printed infinite times \n4. Blank screen, no output\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q3.q[8])
        {
            printf("Correct\n");
            goto l3_10;
        }
        else
        {
            printf("wrong\n");
            goto l3_9;
        }
    l3_10: printf("\n\n10. Comment on the output of this C code?\n1. #include\n2. void main()\n3. {\n4. int const k = 5;\n5. k++;\n6. printf(\"k is %d\", k)\;\n7. }\n");
            printf("options\n1. k is 6\n2. Error due to const succeeding int \n3. Error, because a constant variable can be changed only twice \n4. Error, because a constant variable cannot be changed\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q3.q[9])
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
{   system("clear");

    int x;

   l4_1: printf("\n\n1. #include \"stdio.h\"\nint main()\n{\nint x, y = 5, z = 5;\nx = y == z;\nprintf(\"%d\", x)\;\ngetchar();\nreturn 0;\n}\n\noptions\n1.0\n2.1 \n3.5\n4. error\n");
         printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q4.q[0])
        {
            printf("Correct\n");
            goto l4_2;
        }
        else
        {
            printf("Wrong\n");
            goto l4_1;
        }
    l4_2:  printf("\n\n2. #include <stdio.h>\nint main()\n{\nint i = 1, 2, 3;\nprintf(\"%d\", i)\;\nreturn 0;\n}\n\noptions\n1.1\n2. 3\n3.compiler error \n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q4.q[1])
            {
                printf("Correct\n");
                goto l4_3;
            }
            else
            {
                printf("wrong\n");
                goto l4_2;
            }
    l4_3:  printf("\n\n3. #include <stdio.h>\nint main()\n{\nint i = (1, 2, 3);\nprintf(\"%d\", i)\;\nreturn 0;\n}\n\nOptions\n1. 1\n2. 3\n3. Garbage value\n");
                printf("Enter the choice : ");
                scanf("%d",&x);
                if(x==q4.q[2])
                {
                    printf("Correct\n");
                    goto l4_4;
                }
                else
                {
                    printf("wrong\n");
                    goto l4_3;
                }
    l4_4:  printf("\n\n4. #include <stdio.h>\nint main()\n{\nint i;\ni = 1, 2, 3;\nprintf(\"%d\", i)\;\nreturn 0;\n}\n\noptions\n1. 1\n2. 3\n3. garbage value\n");
                printf("Enter the choice : ");
                scanf("%d",&x);
                if(x==q4.q[3])
                {
                    printf("Correct\n");
                    goto l4_5;
                }
                else
                {
                    printf("wrong\n");
                    goto l4_4;
                }
    l4_5:  printf("\n\n5. #include <stdio.h>\nint main()\n{\nint i = 3;\nprintf(\"%d\", (++i)++)\;\nreturn 0;\n}\n\noptions\n2. 4\n3. compiler error\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q4.q[4])
            {
                printf("Correct\n");
                goto l4_6;
            }
            else
            {
                printf("wrong\n");
                goto l4_5;
            }
    l4_6:  printf("\n\n6. #include <stdio.h>\nint foo(int* a, int* b)\n{\nint sum = *a + *b;\n*b = *a;\nreturn *a = sum - *b;\n}\nint main()\n{\nint i = 0, j = 1, k = 2, l;\nl = i++ || foo(&j, &k);\nprintf(\"%d %d %d %d\", i, j, k, l)\;\nreturn 0;\n}\n\noptions\n1. 1 2 1 1 \n2. 1 1 2 1\n3. 1 2 2 2\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q4.q[5])
            {
                printf("Correct\n");
                goto l4_7;
            }
            else
            {
                printf("wrong\n");
                goto l4_6;
            }
    l4_7: printf("\n\n7. #include <stdio.h>\nint main()\n{\nint i = 5, j = 10, k = 15;\nprintf(\"%d \", sizeof(k /= i + j))\;\nprintf(\"%d\", k)\;\nreturn 0;\n}\n\noptions\n1. 4 1\n2. 4 15\n3. 2 1\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q4.q[6])
            {
                printf("Correct\n");
                goto l4_8;
            }
            else
            {
                printf("wrong\n");
                goto l4_7;
            }
    l4_8: printf("\n\n8. #include <stdio.h>\nint main()\n{\n//Assume sizeof character is 1 byte and sizeof integer is 4 bytes\nprintf(\"%d\", sizeof(printf(\"GeeksQuiz\")))\;\nreturn 0;\n}\n\noptions\n1. 4\n2. GeeksQuiz4\n3. compiler time error\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q4.q[7])
            {
                printf("Correct\n");
                goto l4_9;
            }
            else
            {
                printf("wrong\n");
                goto l4_8;
            }
    l4_9:  printf("\n\n9. #include <stdio.h>\nint f1() { printf (\"Geeks\")\; return 1\;}\nint f2() { printf (\"Quiz\")\; return 1\;}\n\nint main()\n{\nint p = f1() + f2();\nreturn 0;\n}\n\noptions\n1. compiler error\n2. compiler dependent \n3. GeeksQuiz\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q4.q[8])
            {
                printf("Correct\n");
                goto l4_10;
            }
            else
            {
                printf("wrong\n");
                goto l4_9;
            }
    l4_10: printf("\n\n10 #include <stdio.h>\nint main()\n{\nprintf(\"%d\", 1 << 2 + 3 << 4)\;\nreturn 0;\n}\n\noptions\n1. 512\n2. 0\n3. 52\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q4.q[9])
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


int quiz5() // stringh
{   system("clear");
    int x;

   l5_1:   printf("\n\n1.include <stdio.h>\n#include <stdlib.h>\nint main()\n{\nchar str1[] = \"GeeksQuiz\";\nchar str2[] = {'G', 'e', 'e', 'k', 's', 'Q', 'u', 'i', 'z'};\nint n1 = sizeof(str1)/sizeof(str1[0]);\nint n2 = sizeof(str2)/sizeof(str2[0]);\nprintf(\"n1 = %d, n2 = %d\", n1, n2)\;\nreturn 0;\n}\nOptions\n1. n1=10,n2=9 \n2. n1=10,n2=10\n3. n1=9,n2=10\n4. n1=9,n2=9\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[0])
            {
                printf("Correct\n");
                goto l5_2;
            }
            else
            {
                printf("Wrong\n");
                goto l5_1;
            }
    l5_2:  printf("\n\n2. #include<stdio.h> \nvoid swap(char *str1, char *str2) \n{\nchar *temp = str1;\nstr1 = str2;\nstr2 = temp;\n} \n \nint main() \n{ \nchar *str1 = \"Geeks\";\nchar *str2 = \"Quiz\";\n  swap(str1, str2);\nprintf(\"str1 is %%s, str2 is %%s\", str1, str2)\;\nreturn 0;\n} \n");
            printf("Options\n1.srt1 is Geeks, str2 is Quiz\n2.srt1 is quiz, str2 is Geeks \n3.str1 is Geeks,str2 is Geeks \n4.str1 is quiz,str2 is quiz\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[1])
            {
                printf("Correct\n");
                goto l5_3;
            }
            else
            {
                printf("wrong\n");
                goto l5_2;
            }
    l5_3:  printf("\n\n3. #include <stdio.h>\nint fun(char *str1)\n{\nchar *str2 = str1;\nwhile(*++str1);\nreturn (str1-str2);\n}\nint main()\n{\nchar *str = \"GeeksQuiz\";\nprintf(\"%d\", fun(str));\nreturn 0;\n}\noptions\n1.10\n2.9 \n3.8\n4.random numbers\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[2])
            {
                printf("Correct\n");
                goto l5_4;
            }
            else
            {
                printf("wrong\n");
                goto l5_3;
            }
    l5_4:  printf("\n\n4. Number of string built-in function \noptions\n1. 4\n2. 5\n3. 6\n4. 7\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[3])
            {
                printf("Correct\n");
                goto l5_5;
            }
            else
            {
                printf("wrong\n");
                goto l5_4;
            }
    l5_5:  printf("\n\n5. To compare string ,which following function is used:\n1. strcmp\n2. strcom\n3. strcomp\n4.strcompare \n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[4])
            {
                printf("Correct\n");
                goto l5_6;
            }
            else
            {
                printf("wrong\n");
                goto l5_5;
            }
    l5_6:  printf("\n\n6. Which built-in string function used to find the string length\n1. strln\n2. strle\n3. strlen\n4. strlength\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[5])
            {
                printf("Correct\n");
                goto l5_7;
            }
            else
            {
                printf("wrong\n");
                goto l5_6;
            }
    l5_7: printf("\n\n7. #include<stdio.h>\nint main()\n{\nchar a[2][3][3] = {'g','e','e','k','s','q','u','i','z'}\;\nprintf(\"%%s \", **a)\;\nreturn 0\;\n}\noptions\n1.compiler error_category\n2.geeksquiz \n3.runtime error\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[6])
            {
                printf("Correct\n");
                goto l5_8;
            }
            else
            {
                printf("wrong\n");
                goto l5_7;
            }
    l5_8: printf("\n\n8. #include <stdio.h>\nvoid my_toUpper(char* str, int index)\n{\n*(str + index) &= ~32\;\n}\nint main()\n{\nchar* arr = \"geeksquiz\"\;\nmy_toUpper(arr, 0)\;\nmy_toUpper(arr, 5)\;\nprintf(\"%%s\", arr)\;\nreturn 0\s;\n}\noptions\n1.Geeksquiz\n2.geeksquiz\n3.compiler dependent \n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[7])
            {
                printf("Correct\n");
                goto l5_9;
            }
            else
            {
                printf("wrong\n");
                goto l5_8;
            }
    l5_9:  printf("\n\n9. #include <stdio.h>\nint main()\n{\nchar str[] = \"%d %c\", arr[] = \"GeeksQuiz\";\nprintf(str, 0[arr], 2[arr + 3]);\nreturn 0;\n}\noptions\n1. G Q\n2.71 81\n3.71 Q \n4.compiler time error\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[8])
            {
                printf("Correct\n");
                goto l5_10;
            }
            else
            {
                printf("wrong\n");
                goto l5_9;
            }
    l5_10: printf("\n\n10. #include<stdio.h>\nint main()\n{\nchar str[20] = \"GeeksQuiz\";\nprintf (\"%d\", sizeof(str));\nreturn 0;\n}\noptions\n1.10\n2.20 \n3.Garbage value\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q5.q[9])
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


int c_tokens()
{   system("clear");
    int o;
    int j;
    if(automat()==1)
    {
        learn1();
        for(j=0;j<25;j++)  //delay in sec
        delay();
        quiz1();
    }
    else
    {
    while (1)
    {
        printf("\n----------C-TOKENS----------\n");
        printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu\n4.Exit\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn1();break;
            case 2:quiz1(); break;
            case 3:return 0;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }
    }
    return 0;
}
int variables()
{   system("clear");
    int o;
    int j;
    if(automat()==1)
    {
        learn2();
        for(j=0;j<40;j++)         //delay in sec
            delay();
        quiz2();
    }
    else
    {
    while (1)
    {
        printf("\n----------VARIABLES----------\n");
        printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu\n4.Exit\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn2();break;
            case 2:quiz2(); break;
            case 3:return 0;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }
    }
    return 0;
}
int constants()
{   system("clear");
    int o;
    int j;
    if(automat()==1)
    {
        learn3();
        for(j=0;j<40;j++)  //delay  in sec
        delay();
        quiz3();
    }
    else
    {
    while (1)
    {
        printf("\n----------CONSTANTS----------\n");
        printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu\n4.exit\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn3();break;
            case 2:quiz3(); break;
            case 3:return 0;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }
    }
    return 0;
}
int operators()
{   system("clear");
    int o;
    int j;
    if(automat()==1)
    {
        learn4();
        for(j=0;j<200;j++)  //delay  in sec
        delay();
        quiz4();
    }
    else
    {
    while (1)
    {
        printf("\n----------OPERATORS----------\n");
        printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu\n4.Exit\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn4();break;
            case 2:quiz4(); break;
            case 3:return 0;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }
    }
    return 0;
}
int strings()
{   system("clear");
    int o;
    int j;
    if(automat()==1)
    {
        learn5();
        for(j=0;j<150;j++)  //delay  in sec
        delay();
        quiz5();
    }
    else
    {
    while (1)
    {
        printf("\n----------STRINGS-----------\n");
        printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu4.exit\n");
        printf("Enter the option\n");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn5();break;
            case 2:quiz5(); break;
            case 3:return 0;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }
    return 0;
}
}



int module_1()
{
    int o;
    while(1)
    {
        printf("\n----------MODULE-1----------\n");
        printf("1.C TOKENS\n2.VARIABLES\n3.CONSTANTS\n4.OPERATORS\n5.STRING\n6.BACK TO MAIN MENU\n7.EXIT\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:c_tokens(); break;
            case 2:variables(); break;
            case 3:constants(); break;
            case 4:operators(); break;
            case 5:strings(); break;
            case 6:return 0;
            case 7:exit(0);
            default:printf("Sorry!! It's an invalid option\n");

        }
    }
    return 0;
}

void main()
{
    int o;
    while(1)
    {
        printf("\n----------WELCOME----------\n");
        printf("1.Module-1\n2.Module-2\n3.Module-3\n4.Module-4\n5.Module-5\n6.Exit\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:module_1(); break;
            //case 2:module-2(); break;
            //case 3:module-3(); break;
            //case 4:module-4(); break;
           // case 5:module-5(); break;
            case 6:exit(0);
            default:printf("OPss!!! You entered Invalid option\n");
        }
    }
}
