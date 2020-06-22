quiz q4={2,3,2,1,3,1,2,1,2,1}; //operators

int quiz4() // operators
{

    int x;

   l4_1: printf("\n1. #include \"stdio.h\"\nint main()\n{\nint x, y = 5, z = 5;\nx = y == z;\nprintf(\"%d\", x)\;\ngetchar();\nreturn 0;\n}\n\noptions\n1.0\n2.1 \n3.5\n4. error\n");
         printf("Enter the choice : ");
        scanf("%d",&x);
        if(x==q4.q[0])
        {
            printf("Correct\n");
            goto l4_2;
        }
        else
        {
            printf("Wrong\n");
            goto l4_1;
        }
    l4_2:  printf("2. #include <stdio.h>\nint main()\n{\nint i = 1, 2, 3;\nprintf(\"%d\", i)\;\nreturn 0;\n}\n\noptions\n1.1\n2. 3\n3.compiler error \n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q4.q[1])
            {
                printf("Correct\n");
                goto l4_3;
            }
            else
            {
                printf("wrong\n");
                goto l4_2;
            }
    l4_3:  printf("3.#include <stdio.h>\nint main()\n{\nint i = (1, 2, 3);\nprintf(\"%d\", i)\;\nreturn 0;\n}\n\nOptions\n1. 1\n2. 3\n3. Garbage value\n");
                printf("Enter the choice : ");
                scanf("%d",&x);
                if(x==q4.q[2])
                {
                    printf("Correct\n");
                    goto l4_4;
                }
                else
                {
                    printf("wrong\n");
                    goto l4_3;
                }
    l4_4:  printf("4. #include <stdio.h>\nint main()\n{\nint i;\ni = 1, 2, 3;\nprintf(\"%d\", i)\;\nreturn 0;\n}\n\noptions\n1. 1\n2. 3\n3. garbage value\n");
                printf("Enter the choice : ");
                scanf("%d",&x);
                if(x==q4.q[3])
                {
                    printf("Correct\n");
                    goto l4_5;
                }
                else
                {
                    printf("wrong\n");
                    goto l4_4;
                }
    l4_5:  printf("5. #include <stdio.h>\nint main()\n{\nint i = 3;\nprintf(\"%d\", (++i)++)\;\nreturn 0;\n}\n\noptions\n2. 4\n3. compiler error\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q4.q[4])
            {
                printf("Correct\n");
                goto l4_6;
            }
            else
            {
                printf("wrong\n");
                goto l4_5;
            }
    l4_6:  printf("6. #include <stdio.h>\nint foo(int* a, int* b)\n{\nint sum = *a + *b;\n*b = *a;\nreturn *a = sum - *b;\n}\nint main()\n{\nint i = 0, j = 1, k = 2, l;\nl = i++ || foo(&j, &k);\nprintf(\"%d %d %d %d\", i, j, k, l)\;\nreturn 0;\n}\n\noptions\n1. 1 2 1 1 \n2. 1 1 2 1\n3. 1 2 2 2\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q4.q[5])
            {
                printf("Correct\n");
                goto l4_7;
            }
            else
            {
                printf("wrong\n");
                goto l4_6;
            }
    l4_7: printf("7. #include <stdio.h>\nint main()\n{\nint i = 5, j = 10, k = 15;\nprintf(\"%d \", sizeof(k /= i + j))\;\nprintf(\"%d\", k)\;\nreturn 0;\n}\n\noptions\n1. 4 1\n2. 4 15\n3. 2 1\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q4.q[6])
            {
                printf("Correct\n");
                goto l4_8;
            }
            else
            {
                printf("wrong\n");
                goto l4_7;
            }
    l4_8: printf("8. #include <stdio.h>\nint main()\n{\n//Assume sizeof character is 1 byte and sizeof integer is 4 bytes\nprintf(\"%d\", sizeof(printf(\"GeeksQuiz\")))\;\nreturn 0;\n}\n\noptions\n1. 4\n2. GeeksQuiz4\n3. compiler time error\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q4.q[7])
            {
                printf("Correct\n");
                goto l4_9;
            }
            else
            {
                printf("wrong\n");
                goto l4_8;
            }
    l4_9:  printf("9. #include <stdio.h>\nint f1() { printf (\"Geeks\")\; return 1\;}\nint f2() { printf (\"Quiz\")\; return 1\;}\n\nint main()\n{\nint p = f1() + f2();\nreturn 0;\n}\n\noptions\n1. compiler error\n2. compiler dependent \n3. GeeksQuiz\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q4.q[8])
            {
                printf("Correct\n");
                goto l4_10;
            }
            else
            {
                printf("wrong\n");
                goto l4_9;
            }
    l4_10: printf("10 #include <stdio.h>\nint main()\n{\nprintf(\"%d\", 1 << 2 + 3 << 4)\;\nreturn 0;\n}\n\noptions\n1. 512\n2. 0\n3. 52\n");
            printf("Enter the choice : ");
            scanf("%d",&x);
            if(x==q4.q[9])
            {
                printf("Correct\n");
                variables();
            }
            else
            {
                printf("wrong\n");
                goto l4_10;
            }

}
