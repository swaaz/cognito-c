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
    printf("  | %               |   modulo division( returns remainder  |\n");
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
    printf("|  %=      | x%=y      |x=x%y      |x%y is first completed and that result is assigned to x   |\n");
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
    printf("  |arithmetic       |   +,/,*,/,%                   |left to right |\n");
    printf("  | shift operators |   <<,>>                       |left to right |\n");
    printf("  |relational       |   <,>,<=,>=                   |left to right |\n");
    printf("  |equal to !equal  |   =,!=                        |left to right |\n");
    printf("  | bitwise AND     |   &                           |left to right |\n");
    printf("  | bitwise OR      |   |                           |left to right |\n");
    printf("  | bitwise XOR     |   ^                           |left to right |\n");
    printf("  | logical AND, OR |   ||,&&                       |left to right |\n");
    printf("  | conditional     |   ?                           |left to right |\n");
    printf("  |assignment       | =,+=,-=,*=,/=,%=,&=,|=,<<=,>>=|left to right |\n");
    printf("  |_________________|_______________________________|______________|\n");
    return 0;
}
