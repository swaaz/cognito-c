quiz q4[10]={2,3,2,1,3,1,2,1,2,1}; //operators

int quiz4() // operators
{

    int x;

   l4_1:   printf("\n1. #include "stdio.h"\n
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
    l4_2:  printf("2. #include <stdio.h>\n

            int main()\n
            {\n
                int i = 1, 2, 3;\n

                printf("%d", i);\n

                return 0;\n
            }\n
            \n
            options\n
            1.1\n
            2.3\n
            3.compiler error \n");
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
    l4_3:  printf("3.#include <stdio.h>\n

                int main()\n
                {\n
                    int i = (1, 2, 3);\n

                    printf("%d", i);\n

                    return 0;\n
                }\n
                \n
                1. 1\n
                2. 3\n
                3. Garbage value\n");
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
    l4_4:  printf("4. #include <stdio.h>\n

                int main()\n
                {\n
                    int i;\n

                    i = 1, 2, 3;\n
                    printf("%d", i);\n

                    return 0;\n
                }\n
                \n
                1. 1\n
                2. 3\n
                3. garbage value\n");
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
    l4_5:  printf("5. #include <stdio.h>\n
            int main()\n
            {\n
                int i = 3;\n
                printf("%d", (++i)++);\n
                return 0;\n
            }\n
            \n
            1. 3\n
            2. 4\n
            3. compiler error\n");
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
    l4_6:  printf("6. #include <stdio.h>\n
            int foo(int* a, int* b)\n
            {\n
                int sum = *a + *b;\n
                *b = *a;\n
                return *a = sum - *b;\n
            }\n
            int main()\n
            {\n
                int i = 0, j = 1, k = 2, l;\n
                l = i++ || foo(&j, &k);\n
                printf("%d %d %d %d", i, j, k, l);\n
                return 0;\n
            }\n
            \n

            1. 1 2 1 1 \n
            2. 1 1 2 1\n
            3. 1 2 2 2\n");
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
    l4_7: printf("7. #include <stdio.h>\n
            int main()\n
            {\n
                int i = 5, j = 10, k = 15;\n
                printf("%d ", sizeof(k /= i + j));\n
                printf("%d", k);\n
                return 0;\n
            }\n
            \n
            1. 4 1\n
            2. 4 15\n
            3. 2 1\n");
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
    l4_8: printf("8. #include <stdio.h>\n
            int main()\n
            {\n
                //Assume sizeof character is 1 byte and sizeof integer is 4 bytes\n
                printf("%d", sizeof(printf("GeeksQuiz")));\n
                return 0;\n
            }\n
            \n

            1. 4\n
            2. GeeksQuiz4\n
            3. compiler time error\n");
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
    l4_9:  printf("9. #include <stdio.h>\n
            int f1() { printf ("Geeks"); return 1;}\n
            int f2() { printf ("Quiz"); return 1;}\n
            \n
            int main()\n
            {\n
            int p = f1() + f2();\n
            return 0;\n
            }\n
            \n
            1. compiler error\n
            2. compiler dependent \n
                3. GeeksQuiz\n");
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
    l4_10: printf("10 #include <stdio.h>\n
            int main()\n
            {\n
                printf("%d", 1 << 2 + 3 << 4);\n
                return 0;\n
            }\n
            \n
            1. 512\n
            2. 0\n
            3. 52\n");
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