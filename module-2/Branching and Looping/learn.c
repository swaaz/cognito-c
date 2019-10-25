int learn6() //Branching and looping
{
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
  printf("                      ______|_______    | \n" );
  printf("                     /printf\"even\"/   |  \n");
  printf("                    /__number______/    |\n");
  printf("                            |<----------|\n ");
  printf("                     _______|_____\n ");
  printf("                    (______stop___)\n\n");
  printf("/* program to check even number */ \n");
  printf("#include<stdio.h>\nvoid main()\n{\n int n;\n clrscr();\n printf(\"enter the number\");\n scanf(\"%%d\",&n);\n if(n%2==0)\n {\n printf(\"even number\");\n }\ngetch();\n}\n\n");
  printf("the output1 :\t\t\tthe output2:\nenter the number:10\t\tenter the number\neven number\n\n");
  printf(" Program to find biggest of three numbers\nAlgorithm : To find the largest number\n");
  printf("step1:[read 3 different number as input]\n    input a,b,c\nstep2:[find the largest of 3 numbers]\n    if(a>b)\n   {\n\n     if(a>c)\n     {\n     printf \"a largest\"\n      }\n     else\n      {\n     if(b>c)\n       }\n     else\n      printf\"c largest\"\n     }\nstep3:[finished]\n       stop\n" );
  printf("\nProgram to find the largest of three numbers\n");
  printf("\n #include<stdio.h>\nvoid main()\n{\n int a,b,c; clrscr(); printf(\"enter 3 different numbers\"\n scanf(\"%d%d%d\",&a,&b,&c);\n if(a>b&&a>c)  {\n   printf(\"a number is largest\");\n else if(b>a&&b>c)\n  {\n   printf(\"b is largest\");\n  else\n  {\n  printf(\"cis largest\");\n  }\ngetch();\n}\n");
  printf("\nnested if else control construct:\n");
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
  printf("                           |                              |\n");
   printf("                           |                             |\n");
  printf("                           /\\                            |\n");
  printf("                          /  \\                           |\n");
  printf("                         / if \\ false    ____________    |\n");
  printf("                        /cond:2\\-------->|statement b|-->o\n");
  printf("                        \\  ?   /         |___________|   |\n");
  printf("                         \\    /                          |\n");
  printf("                          \\  /                           |\n");
  printf("                           \\/                            |\n");
  printf("                           |                              |\n");
  printf("                           *                              *\n") ;
  printf("                           *                              *\n");
  printf("                           *                              *\n");
   printf("                           |                             |\n");
  printf("                           /\\                            |\n");
  printf("                          /  \\                           |\n");
  printf("                         / if \\ false    ____________    |\n");
  printf("                        /cond:n\\-------->|statement b|-->o\n");
  printf("                        \\  ?   /         |___________|   |\n");
  printf("                         \\    /                          |\n");
  printf("                          \\  /                           |\n");
  printf("                           \\/                            |\n");
  printf("                    _______|_______                       |\n");
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
  printf("                                                                         |-------| \n");
  printf("                                                                       | \n");
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
  printf("                                                           | statement.a |    |  statement.b |\n ");
  printf("                                                           |_____________|    |______________|\n");
  printf("                                                             |_____________________|\n ");
  printf("                                                                        |\n ");
  printf("                                                                        O \n");
  printf("\nSwitch pictorial representation :\n");
    printf("                  ____________      \n   ");
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
  printf("                    (______stop_____)\n\n");


    return 0;
}
