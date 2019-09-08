quiz q2[10]={4,4,4,3,2,3,4,4,3,4};

int quiz2() // variables
{

    int x;

   l12.:   printf("\n1. A C variable cannot start with ? \n1. An alphabet\n2.. A number\n3. A special symbol other that underscore\n4. Both B and C\n");
         printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.1) 
        {
            printf("Correct\n");
            goto l2.2;
        }
        else 
        {
            printf("Wrong\n");
            goto l2.1;
        }
    l2.2:  printf("2. A name having a few letters, numbers and special character _(underscore) is called\n1. keywords\n2. reserved keyword\n3. tokens\n4. identifiers\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.2)
        {
            printf("Correct\n");
            goto l2.3;
        }
        else
        {
            printf("wrong\n");
            goto l2.2;
        }
    l2.3:  printf("3. What is the scope of an external variable?\n1. Whole source file in which it is defined\n2. From the point of declaration to the end of the file in which it is defined\n3. Any source file in a program\n4. From the point of declaration to the end of the file being compiled\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.3)
        {
            printf("Correct\n");
            goto l2.4;
        }
        else
        {
            printf("wrong\n");
            goto l2.3;
        }
    l2.4:  printf("4. Variable names beginning with underscore is not encouraged. Why? \n1. It is not standardized\n2. To avoid conflicts since assemblers and loaders use such names\n3. To avoid conflicts since library routines use such names\n4. To avoid conflicts with environment variables of an operating system\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.4)
        {
            printf("Correct\n");
            goto l2.5;
        }
        else
        {
            printf("wrong\n");
            goto l2.4;
        }
    l2.5:  printf("5. In an assignment statement a=b; which of the following statement is true ?\n1. The variable a and the variable b are same.\n2. The value of b is assigned to variable a but if b changes later, it will not effect the value of variable a.\n3. The value of b is assigned to variable a but if b changes later, it will effect the value of variable\n4. The value of variable a is assigned to variable b, and the value of variable b is asssigned to variable a.\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.5)
        {
            printf("Correct\n");
            goto l2.6;
        }
        else
        {
            printf("wrong\n");
            goto l2.5;
        }
    l2.6:  printf("6. Which is an incorrect variable name?\n1. Id_No\n2. ID_NO\n3. IdNo\n4. Id No\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.6)
        {
            printf("Correct\n");
            goto l2.7;
        }
        else
        {
            printf("wrong\n");
            goto l2.6;
        }
    l2.7: printf("7.Which of the following is not valid variable names in 'C'?\n1. float_int, keyword, A1\n2. ANSI, ascii, cpu\n3. valid, variable, name\n4 None of these\n"); 
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.7)
        {
            printf("Correct\n");
            goto l2.8;
        }
        else
        {
            printf("wrong\n");
            goto l2.7;
        } 
    l2.8: printf("8. Which of the following cannot be used as identifiers?\n1. Letters\n2. Digits\n3. Underscores\n4. Spaces\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.8)
        {
            printf("Correct\n");
            goto l2.9;
        }
        else
        {
            printf("wrong\n");
            goto l2.8;
       }
    l2.9:  printf("9. Variable names beginning with underscore is not encouraged. Why?\n1. It is not standard form\n2. To avoid conflicts since assemblers and loaders use such names\n3. To avoid conflicts since library routines use such names\n4. To avoid conflicts with environment variables of an operating system\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.9)
        {
            printf("Correct\n");
            goto l2.10;
        }
        else
        {
            printf("wrong\n");
            goto l2.9;
        }
    l2.10: printf("10 Which of the following is not a valid variable name declaration?\n1. float PI = 3.14;\n2. double PI = 3.14;\n3. int PI = 3.14;\n4. #define PI 3.14\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q2.10)
        {
            printf("Correct\n");
            variables();
        }
        else
        {
            printf("wrong\n");
            goto l2.10;
        }

}