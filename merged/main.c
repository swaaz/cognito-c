
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

int module_1()
{system("clear");
    int o;
 //   clrscr();
    while(1)
    {
        printf("\n----------MODULE-1----------\n");
        printf("1.C TOKENS\n2.VARIABLES\n3.CONSTANTS\n4.OPERATORS\n5.BACK TO MAIN MENU\n6.EXIT\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:c_tokens(); break;
            case 2:variables(); break;
            case 3:constants(); break;
            case 4:operators(); break;
            case 5:return 0;
            case 6:exit(0);


            default:printf("Sorry!! It's an invalid option\n");

        }
    }
    return 0;
}

int c_tokens()
{system("clear");
    int o;
    while (1)
    {
        printf("\n----------C-TOKENS----------\n");
        printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu\n4.Exit\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn1();break;
            //case 2:quiz(); break;
            case 3:return 0;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }
    return 0;
}
int variables()
{system("clear");
    int o;
    while (1)
    {
        printf("\n----------VARIABLES----------\n");
        printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu\n4.Exit\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn2();break;
            //case 2:quiz(); break;
            case 3:return 0;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }
    return 0;
}

int constants()
{system("clear");
    int o;
    while (1)
    {
        printf("\n----------CONSTANTS----------\n");
        printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu\n4.Exit\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn3();break;
           // case 2:quiz(); break;
            case 3:return 0;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }
    return 0;
}
int operators()
{system("clear");
    int o;
    while (1)
    {
        printf("\n----------OPERATORS----------\n");
        printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu\n4.Exit\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn4();break;
            //case 2:quiz(); break;
            case 3:return 0;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }
    return 0;
}

int learn1() //c-tokens
{system("clear");
    printf("\n----------Learn----------\n");
    printf("C-Tokens and the smallesT individual Hits of a C-program. These are the basic building blocks in a C program that cannot be further broken down into elements\n");
    printf("There are mainly five C tokens namely\nKeywords\nIdentifiers (Variables)\nConstants\nStrings\nOperators\n");
    printf("Keywords\nKeywords are the predefined words in a C compiler which are meant to perform specific function in C program Keywords cannot be used for naming variables, identifiers and functions. C Language supports 32 keywords namely int, float, double, long, short, char, if,else switch, case, for, while, goto, do, break, continue, struct, enum, extern, typedef, const,auto, register, default, volatile, sizeof, static, signed, return, union, void, unsigned\n");
}


int learn2() //variables
{system("clear");
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
{system("clear");
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
{system("clear");
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
    printf(" #include<stdio.h>\nvoid main()\n{\n  int a=9, b=4, c;\n  c=a+b;\n  printf(\"a+b=\%d\\n\",c);\n  c=a+b;\n  printf(\"a-b=\%\d\\n\",c);\n  c=a*b;\n  printf(\"a*b=\%\d\\n\",c);\n  c=a/b;\n  printf(\"a/b=\%\d\\n\",c);\n  c=a%b;\n  printf(\"Remainder when a divided by b=\%d\\n\",c);\n}\n");
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
    return 0;
}

void main()
{system("clear");
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
