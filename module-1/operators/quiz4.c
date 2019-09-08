quiz q4[10]={2,3,2,1,3,1,2,1,2,1};

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
            goto l4.2;
        }
        else 
        {
            printf("Wrong\n");
            goto l4.1;
        }
    l4.2:  printf("2. #include <stdio.h>\n

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
            if(x==q4.2)
            {
                printf("Correct\n");
                goto l4.3;
            }
            else
            {
                printf("wrong\n");
                goto l4.2;
            }
    l4.3:  printf("3.#include <stdio.h>\n

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
                if(x==q4.3)
                {
                    printf("Correct\n");
                    goto l4.4;
                }
                else
                {
                    printf("wrong\n");
                    goto l4.3;
                }
    l4.4:  printf("4. #include <stdio.h>\n

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
                if(x==q4.4)
                {
                    printf("Correct\n");
                    goto l4.5;
                }
                else
                {
                    printf("wrong\n");
                    goto l4.4;
                }
    l4.5:  printf("5. #include <stdio.h>\n
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
            if(x==q4.5)
            {
                printf("Correct\n");
                goto l4.6;
            }
            else
            {
                printf("wrong\n");
                goto l4.5;
            }
    l4.6:  printf("6. #include <stdio.h>\n
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
            if(x==q4.6)
            {
                printf("Correct\n");
                goto l4.7;
            }
            else
            {
                printf("wrong\n");
                goto l4.6;
            }
    l4.7: printf("7. #include <stdio.h>\n
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
            if(x==q4.7)
            {
                printf("Correct\n");
                goto l4.8;
            }
            else
            {
                printf("wrong\n");
                goto l4.7;
            } 
    l4.8: printf("8. #include <stdio.h>\n
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
            if(x==q4.8)
            {
                printf("Correct\n");
                goto l4.9;
            }
            else
            {
                printf("wrong\n");
                goto l4.8;
            }
    l4.9:  printf("9. #include <stdio.h>\n
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
            if(x==q4.9)
            {
                printf("Correct\n");
                goto l4.10;
            }
            else
            {
                printf("wrong\n");
                goto l4.9;
            }
    l4.10: printf("10 #include <stdio.h>\n
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
            if(x==q4.10)
            {
                printf("Correct\n");
                variables();
            }
            else
            {
                printf("wrong\n");
                goto l4.10;
            }

}