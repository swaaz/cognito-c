quiz q3={3,3,2,3,2,4,1,1,2,3}; //constants

int quiz3() //constants
{
int x;

   l3_1: printf("1. What is the output of this C code?\n1. #include\n2. int main()\n3. {\n4. enum {ORANGE = 5, MANGO, BANANA = 4, PEACH};\n5. printf(\"PEACH=%d\n\",PEACH)\;\n6. }\n");
        printf("options\n 1. PEACH = 3\n2. PEACH = 4\n3. PEACH = 5\n4. PEACH = 6 \n");
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
    l3_2:  printf("2. TWhat is the output of this C code?\n1. #include\n2. int main()\n3. {\n4. printf(\"C programming %s\",\"Class by\n%s Sanfoundry\",\"WOW\")\;\n5. }\n");
            printf("options\n1. C programming Class by WOW Sanfoundry\n2. C programming Class by %s Sanfoundry\n3. C programming Class by %s Sanfoundry\n4. Compilation error\n");
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
    l3_3:  printf("3. For the following code snippet:\n char *str = “Sanfoundry.com\0” “training classes”;\nThe character pointer str holds reference to string:\n");
           printf("options 1. Sanfoundry.com\n2. Sanfoundry.com\0training classes\n3. Sanfoundry.comtraining classes\n4. Invalid declaration\n");
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
    l3_4:  printf("4. What is the output of this C code?\n1. #include\n2. #define a 10\n3. int main()\n4. {\n5. const int a = 5;\n6. printf(\"a = %d\n\", a)\;\n7. }\n ");
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
    l3_5:  printf("5. What is the output of this C code?\n1. #include\n2. int main()\n3. {\n4. int var = 010;\n5. printf(\"%d\", var)\;\n6. }\n");
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
    l3_6:  printf("6. What is the output of this C code?\n1. #include\n2. enum birds {SPARROW, PEACOCK, PARROT};\n3. enum animals {TIGER = 8, LION, RABBIT, ZEBRA};\n4. int main()\n5. {\n6. enum birds m = TIGER;\n7. int k;\n8. k = m;\n9. printf(\"%d\n\", k)\;\n10. return 0;\n11. }\n ");
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
    l3_7: printf("7. enum types are processed by\n1. Compiler\n2. Preprocessor\n3. Linker\n4. Assembler\n");
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
    l3_8: printf("8. Which is false?\n");
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
    l3_9:  printf("9. Comment on the output of this C code?\n1. #include\n2. int const print()\n3. {\n4. printf(\"Sanfoundry.com\")\;\n5. return 0;\n6. }\n7. void main()\n8. {\n9. print();\n10. }\n");
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
    l3_10: printf("10. Comment on the output of this C code?\n1. #include\n2. void main()\n3. {\n4. int const k = 5;\n5. k++;\n6. printf(\"k is %d\", k)\;\n7. }\n");
            printf("options\n1. k is 6\n2. Error due to const succeeding int \n3. Error, because a constant variable can be changed only twice \n4. Error, because a constant variable cannot be changed\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q3.q[9])
        {
            printf("Correct\n");
            //c_tokens();
        }
        else
        {
            printf("wrong\n");
            goto l3_10;
        }
}
