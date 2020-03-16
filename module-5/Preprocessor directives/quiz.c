quiz q1={4,1,2,3,3,1,4,3,1,2};

int quiz11() //c-tokens
{
    int x;

   l11_1:   printf("1. What does #include stdio.h does in c language.?\n");
        printf("1. It includes stdio.h into existing C program.\n2. #include increases the size of C program by including the specified file contents like functions, constants etc.\n3. #include includes specified file before compilation.\n4. All the above\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.1)
        {
            printf("Correct\n");
            goto l11_2;
        }
        else
        {
            printf("Wrong\n");
            goto l11_1;
        }
   l11_2:   printf("2. What is the abbreviation of C STDIO in stdio.h.?\n");
        printf("1. Standard Input Output\n2. String Terminating Operations Input Output\n3. Store Input Output\n4. None of the above\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.2)
        {
            printf("Correct\n");
            goto l11_3;
        }
        else
        {
            printf("wrong\n");
            goto l11_2;
        }
   l11_3:   printf("3. Choose a correct statement about #include<stdio.h>.?\n");
        printf("1. A file named stdio.h will be searched in all directories and included if found\n2. A file named stdio.h will be searched in current directory and included if found\n3. A file named stdio.h will be searched in current directory and pre configured list of directories in search path and included if found\n4.None of the above\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.3)
        {
            printf("Correct\n");
            goto l11_4;
        }
        else
        {
            printf("wrong\n");
            goto l11_3;
        }
    l11_4:  printf("4 Choose a correct C statement about #include"\n");
        printf("1. A file named stdio.h will be searched in all directories and\n included if found\n2. A file named stdio.h will be searched in current directory and\n included if found\n3. A file named stdio.h will be searched in current\n directory and pre configured list of directories in search path and included if found\n4. None of the above\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.4)
        {
            printf("Correct\n");
            goto l11_5;
        }
        else
        {
            printf("wrong\n");
            goto l11_4;
        }
    l11_5:  printf(" What is the out put of c program with conditional compilation commands. ?\n#define CVV 156\nint main()\n{\n #if def CVV\n      printf(\"CVV YES\");\n #else        printf(\"CVV MO\");\n #endif return 0;\n}\n");
        printf("1. printf(\"CVV YES\");\n2. CVV YES\n3. CVV NO\n4. Compiler error\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.5)
        {
            printf("Correct\n");
            goto l11_6;
        }
        else
        {
            printf("wrong\n");
            goto l11_5;
        }
    111_6:printf("6. In Turbo C, Search Path of Directories for #Include is mentioned under the option.?\n");
        printf("1. Include Directories\n2. Exclude Directories\n 3.Add Directories\n4. Extra Directories\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.6)
        {
            printf("Correct\n");
            goto 1l1_7;
        }
        else
        {
            printf("wrong\n");
            goto l1_6;
        }
    l11_7:  printf("7. In Turbo C, Search Path of Directories for #Include is mentioned under the option.?\nint main()\n{\n #if def CVV\n      printf(\"CVV YES\");\n #else        printf(\"CVV199\");\n #endif  printf(\"New CVV=%d\",CVV);\nreturn 0;\n}\n");
        printf("1. CVV 199\n2. printf(\"CVV YES\");\n3. CVV YES\n4. NEW CVV=199\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.7)
        {
            printf("Correct\n");
            goto l11_8;
        }
        else
        {
            printf("wrong\n");
            goto l11_7;
        }
    111_8:  printf("8. what is the output of this program. ?\nint main()\n{\n #ifndef CVV\n     #define CVV 199\n      printf(\"CVV =%%d\",CVV);\n #else        printf(\"CVV=%%d\",188);\n #endif\nreturn 0;\n}\n");
        printf("1. CVV=188\n2. CVV=0\n3. CVV=199\n4. Compiler error\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1_8)
        {
            printf("Correct\n");
            goto l11_9;
        }
        else
        {
            printf("wrong\n");
            goto l11_8;
        }
    119_9: printf("9. What is the output of c program with #undef.?\n");
        printf(" int main()\n {\n  #undef BIRD\n  printf(\"OKAY\");\n  return 0;\n }\n");
        printf("1. OKAY\n2. Compiler error\n3. BIRDOKAY\n4. None of the above\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.9)
        {
            printf("Correct\n");
            goto l11_0;
        }
        else
        {
            printf("wrong\n");
            goto l11_9;
        }
    l11_10: printf("10. What is the C Pragma directive or command to execute a particular function at startup of program.?\n");
        printf("1. #pragma start function1\n2. #pragma startup function1\n3. #pragma startnow function1\n4. #prama startup function1\n")
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.10)
        {
            printf("Correct\n");
            c_tokens();
        }
        else
        {
            printf("wrong\n");
            goto l11_10;
        }
}
