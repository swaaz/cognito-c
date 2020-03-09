quiz q9={2,4,3,4,2,2,2,4,4,4};

int quiz9() //structure
{
    int x;

   l9_1:   printf("1. Which of the following are themselves a collection of different data types?\n");
        printf("1.string \n2.structures \n3.char \n4.all of the mentioned \n");
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
            goto l1_1_
        }
    l9_2:  printf("2. User-defined data type can be derived by___________\n");
        printf("1.struct \n2.enum \n3.typedef \n4.all of the mentioned \n");
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
    l9_3:  printf("3. Which operator connects the structure name to its member name?\n1. -\n2. <-\n3) .\n4. Both <- and .\n");
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
    l9_4:  printf("4.Which of the following structure declaration will throw an error?\n1. struct temp{}s;\n main(){}\n2. struct temp{};\n struct temp s;\n main(){}\n3 struct temp s;\n struct temp{};\n main(){}\n4. None of the mentioned\n");
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
    l9_5:  printf("5.  What will be the output of the following C code?\n#include <stdio.h>\nstruct student\n{ int no; char name[20];\n}\nvoid main()\n{\n struct student s;\n s.no = 8;\n printf(\"hello\");\n}\n1. Compile time error\n2. Nothing\n3. hello\n4. Varies\n");
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
    l9_6:  printf("6. Read the following expression?\nvoid (*ptr)(int);\n 1. ptr is pointer to int that converts its type to void\n2. ptr is pointer to function passing int returning void\n3. ptr is pointer to void that converts its type to int\n4. ptr is pointer to function passing void returning int\n");
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
    l9_7: printf("7. What makes the following declaration denote?\nint **ptr;\n 1. ptr is a function pointer that returns pointer to int type\n2. ptr is a pointer to an int pointer\n3.ptr is a pointer to an int pointer\n4. none of the mentioned\n");
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
    l9_8: printf("8. One of the uses for function pointers in C is __________\n1. Nothing\n2. There are no function pointers in c\n3. To invoke a function\n4. To call a function defined at run-time\n");
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
    l9_9:  printf("9. Which of the following is not possible in C?\n1.  Array of function pointer\n2. Returning a function pointer\n3. Comparison of function pointer\n4. None of the mentioned\n");
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
    l9_10: printf("10 .Comment on the following declaration.\nint (*ptr)(); // i)\nchar *ptr[]; // ii)\n1. Both i) and ii) and cannot exist due to same name\n2. i) is legal, ii) is illegal\n3. i) is illegal, ii) is legal\n4. Both i) and ii) will work legal and flawlessly\n");
        printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q1.10)
        {
            printf("Correct\n");
            structure();
        }
        else
        {
            printf("wrong\n");
            goto l1_10;
        }
}
