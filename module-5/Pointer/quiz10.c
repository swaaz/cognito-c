quiz q10={3,1,1,1,2,1,3,2,2,4};

int quiz10() //c-tokens
{
    int x;

   l10_1:   printf("1. What will be the output of the following C code?\n #include <stdio.h>\n void foo(int*); int main()\n {\n  int i = 10;\n  foo((&i)++);\n }\n void foo(int *p)\n {\n  printf(\"%d\n\", *p);\n }\n");
        printf("1.10 \n2.Some garbage value \n3.Compile time error \n4.Segmentation fault/code crash \n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.1)
        {
            printf("Correct\n");
            goto l1_2;
        }
        else
        {
            printf("Wrong\n");
            goto l1_1;
        }
   l10_2:   printf("2. What will be the output of the following C code?\n #include <stdio.h>\n void foo(int*); int main()\n {\n  int i = 10, *p=&i;\n  foo(p++);\n }\n void foo(int *p)\n {\n  printf(\"%d\n\", *p);\n }\n");
        printf("1.10 \n2.Some garbage value \n3.Compile time error \n4.Segmentation fault \n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.2)
        {
            printf("Correct\n");
            goto l1_3;
        }
        else
        {
            printf("wrong\n");
            goto l1_2;
        }
   l10_3:   printf("1. What will be the output of the following C code?\n #include <stdio.h>\n int main()\n {\n  int i = 97, *p=&i;\n  foo(&i);\n  printf(\"%d\",*pi);\n }\n void foo(int *p)\n {\n  int j=2;\n  p=&j;\n  printf(\"%d\n\", *p);\n }\n");
        printf("1.2 97 \n2.2 2 \n3.Compile time error \n4.Segmentation fault/code crash \n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.3)
        {
            printf("Correct\n");
            goto l1_4;
        }
        else
        {
            printf("wrong\n");
            goto l1_3;
        }
    l10_4:  printf("4.Which of the following is the correct syntax to send an array as a parameter to function?\n1.  func(&array);\n2. func(#array);\n3.  func(*array);\n4. func(array[size]);");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.4)
        {
            printf("Correct\n");
            goto l1_5;
        }
        else
        {
            printf("wrong\n");
            goto l1_4;
        }
    l10_5:  printf("5.Which is an indirection operator among the following?\n1. &\n2. *\n3. ->\n4. .\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.5)
        {
            printf("Correct\n");
            goto l1_6;
        }
        else
        {
            printf("wrong\n");
            goto l1_5;
        }
    l10_6:  printf("6. Comment on the following C statement.\nconst int *ptr;\n 1. You cannot change the value pointed by ptr\n2. You cannot change the pointer ptr itself\n3. You May or may not change the value pointed by ptr\n  4. You can change the pointer as well as the value pointed by it\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.6)
        {
            printf("Correct\n");
            goto l1_7;
        }
        else
        {
            printf("wrong\n");
            goto l1_6;
        }
    l10_7:  printf("7.What will be the output of the following C code?\n    #include <stdio.h>\n2.    void main()\n    {\n        int x = 0;\n        int *ptr = &x;\n        printf(\"%d\n\", *ptr);\n    }\n");
        printf("1. Address of x\n2. Junk value\n3. 0\n4. Run time error\n")
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.7)
        {
            printf("Correct\n");
            goto l1_8;
        }
        else
        {
            printf("wrong\n");
            goto l1_7;
        }
    l10_8: printf("8. Which of the following can never be sent by call-by-value?\n1. Variable\n2. Array\n3. Structures\n4. Both array and structures\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1_8)
        {
            printf("Correct\n");
            goto l1_9;
        }
        else
        {
            printf("wrong\n");
            goto l1_8;
        }
    l10_9:  printf("9. What is the maximum number of arguments that can be passed in a single function?\n1.  127\n2. 253\n3. 361\n4. No limits in number of arguments\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.9)
        {
            printf("Correct\n");
            goto l1_0;
        }
        else
        {
            printf("wrong\n");
            goto l1_9;
        }
    l10_10: printf("10. Which type of variables can have the same name in a different function?\n1. Global variables\n2. Static variables\n3. Function arguments4. Both static variables and function arguments\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.10)
        {
            printf("Correct\n");
            pointers();
        }
        else
        {
            printf("wrong\n");
            goto l1_10;
        }
}
