quiz q8[10]={2,4,2,1,2,1,4,3,1,4};
int quiz8()//Functions
{

   int x;

    l8_1:   printf("\n1. What is the output of this C code? \n");
            printf("int main()\n{\nvoid foo(), f();\nf();\n}\nvoid foo()\n{\nprintf("2 ");\n}\nvoid f()\n{\nprintf("1 ");\nfoo();\n}\n");
            printf("1. Compile time error as foo is local to main\n2. 1   2\n 3.  2   1\n 4.Compile time error due to declaration of functions inside main\n");
         printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q8.1)
        {
            printf("Correct\n");
            goto l8_2;
        }
        else
        {
            printf("Wrong\n");
            goto l8_1;
        }
    l8_2:  printf("What is the output of this C code")
        printf("int main()\n{\nvoid foo();\nvoid f(){\nfoo();\n}\nf();\n}\nvoid foo()\n{\nprintf("2 ");\n}\n");
        printf("1. 2   2\n2. 2\n 3.   Compile time error\n 4.Depends on the compiler\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q8.2)
        {
            printf("Correct\n");
            goto l8_3;
        }
        else
        {
            printf("wrong\n");
            goto l8_2;
        }
    l8_3:  printf("What is the output of this C code")
        printf("void foo();\nint main()\n{\nvoid foo();\nfoo();return 0;\n}\nvoid foo()\n{\nprintf("2 ");\n}\n");
        printf("1. Compile time error\n2. 2\n 3. Depends on the compiler\n 4.Depends on the standard\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q8.3)
        {
            printf("Correct\n");
            goto l8_4;
        }
        else
        {
            printf("wrong\n");
            goto l8_3;
        }
    l8_4:  printf("4. #include <stdio.h>\nint main()\n{\nprintf(\"%%d\", main);\nreturn 0;\n}");
        printf("1. Address of main function\n2. conilation error\n 3. Runtime Error\n 4.some random value\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q8.4)
        {
            printf("Correct\n");
            goto l8.5;
        }
        else
        {
            printf("wrong\n");
            goto l8.4;
        }
    l8_5:  printf("5. In C, what is the meaning of following function prototype with empty parameter list\nvoid fun()\n{\n/*.... */\n}\n1. Function can only be called without any parameter\n2. Function can be called with any number of parameters of any types\n3. Function can be called with any number of integer parameters.\n4. Function can be called with one integer parameter\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q8.5)
        {
            printf("Correct\n");
            goto l8_6;
        }
        else
        {
            printf("wrong\n");
            goto l8_5;
        }
    l8_6:  printf("6. How many values can a C Function return at a time.?\n1. Only One Value\n2. Maximum of two values\n3. Maximum of three values\n4. Maximum of 8 values\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q8.6)
        {
            printf("Correct\n");
            goto l8_7;
        }
        else
        {
            printf("wrong\n");
            goto l8_6;
        }
    l8_7: printf("7. Choose a correct statement about C Language Functions.?\n1. A function name can not be same as a predefined C Keyword.\n2. A function name can start with an Underscore( _ ) or A to Z or a to z.\n3. Default return type of any function is an Integer.\n4. All the above.\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q8.7)
        {
            printf("Correct\n");
            goto l8_8;
        }
        else
        {
            printf("wrong\n");
            gotol8_7;
        }
    l8_8: printf("8. A function which calls itself is called a _ function.\n1. Self Function\n2. Auto Function\n3. Recursive Function\n4. Static Function\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q8.8)
        {
            printf("Correct\n");
            goto l8_9;
        }
        else
        {
            printf("wrong\n");
            goto l8_8;
       }
    l8_9:  printf("9.What is the output of C Program with functions.?\nvoid main()\n{\n    int a;\n    printf(\"TIGER COUNT=\");\n    a=show();\n    printf(\"%%d\", a);\n}\nint show()\n{\n    return 15;\n    return 35;\n}\n");
        printf("1. TIGER COUNT=15\n2. TIGER COUNT=35\n3. TIGER COUNT=0\n4. Compiler error\n")
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q8.9)
        {
            printf("Correct\n");
            goto l8_10;
        }
        else
        {
            printf("wrong\n");
            goto l8_9;
        }
    l8_10: printf("10. Choose correct statements about C Language Pass By Value.\n1. Pass By Value copies the variable value in one more memory location.\n2. Pass By Value does not use Pointers.\n3. Pass By Value protects your source or original variables from changes in outside functions or called functions.\n4. All the above\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q8.10)
        {
            printf("Correct\n");
            module_4();
        }
        else
        {
            printf("wrong\n");
            goto l8_10;
        }

}
