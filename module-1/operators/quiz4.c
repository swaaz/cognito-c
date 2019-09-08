quiz q4[10]={2,};

int quiz4() // operators
{

    int x;

   l4.1:   printf("\n1. #include "stdio.h"\n
        int main()\n
        {\n
        int x, y = 5, z = 5;\n
        x = y == z;\n
        printf("%d", x);\n
        \n
        getchar();\n
        return 0;\n
        }\n
        \n
        options\n
        1.0\n
        2.1 \n
        3.5\n
        4. error\n");
         printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q4.1) 
        {
            printf("Correct\n");
            goto l2;
        }
        else 
        {
            printf("Wrong\n");
            goto l1;
        }
    l4.2:  printf("2. A name having a few letters, numbers and special character _(underscore) is called\n1. keywords\n2. reserved keyword\n3. tokens\n4. identifiers\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q4.2)
        {
            printf("Correct\n");
            goto l3;
        }
        else
        {
            printf("wrong\n");
            goto l2;
        }
    l4.3:  printf("3. What is the scope of an external variable?\n1. Whole source file in which it is defined\n2. From the point of declaration to the end of the file in which it is defined\n3. Any source file in a program\n4. From the point of declaration to the end of the file being compiled\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q4.3)
        {
            printf("Correct\n");
            goto l4;
        }
        else
        {
            printf("wrong\n");
            goto l3;
        }
    l4.4:  printf("4. Variable names beginning with underscore is not encouraged. Why? \n1. It is not standardized\n2. To avoid conflicts since assemblers and loaders use such names\n3. To avoid conflicts since library routines use such names\n4. To avoid conflicts with environment variables of an operating system\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q4.4)
        {
            printf("Correct\n");
            goto l5;
        }
        else
        {
            printf("wrong\n");
            goto l4;
        }
    l4.5:  printf("5. In an assignment statement a=b; which of the following statement is true ?\n1. The variable a and the variable b are same.\n2. The value of b is assigned to variable a but if b changes later, it will not effect the value of variable a.\n3. The value of b is assigned to variable a but if b changes later, it will effect the value of variable\n4. The value of variable a is assigned to variable b, and the value of variable b is asssigned to variable a.\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q4.5)
        {
            printf("Correct\n");
            goto l6;
        }
        else
        {
            printf("wrong\n");
            goto l5;
        }
    l4.6:  printf("6. Which is an incorrect variable name?\n1. Id_No\n2. ID_NO\n3. IdNo\n4. Id No\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q4.6)
        {
            printf("Correct\n");
            goto l7;
        }
        else
        {
            printf("wrong\n");
            goto l6;
        }
    l4.7: printf("7.Which of the following is not valid variable names in 'C'?\n1. float_int, keyword, A1\n2. ANSI, ascii, cpu\n3. valid, variable, name\n4 None of these\n"); 
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q4.7)
        {
            printf("Correct\n");
            goto l8;
        }
        else
        {
            printf("wrong\n");
            goto l7;
        } 
    l4.8: printf("8. Which of the following cannot be used as identifiers?\n1. Letters\n2. Digits\n3. Underscores\n4. Spaces\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q4.8)
        {
            printf("Correct\n");
            goto l9;
        }
        else
        {
            printf("wrong\n");
            goto l8;
        }
    l4.9:  printf("9. Variable names beginning with underscore is not encouraged. Why?\n1. It is not standard form\n2. To avoid conflicts since assemblers and loaders use such names\n3. To avoid conflicts since library routines use such names\n4. To avoid conflicts with environment variables of an operating system\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q4.9)
        {
            printf("Correct\n");
            goto l10;
        }
        else
        {
            printf("wrong\n");
            goto l9;
        }
    l4.10: printf("10 Which of the following is not a valid variable name declaration?\n1. float PI = 3.14;\n2. double PI = 3.14;\n3. int PI = 3.14;\n4. #define PI 3.14\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q4.10)
        {
            printf("Correct\n");
            variables();
        }
        else
        {
            printf("wrong\n");
            goto l10;
        }

}