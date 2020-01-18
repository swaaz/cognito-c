#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n\n ********** STRUCTURE ************\n\n");
    printf(" • Structure is a collection of one or more variable or different data types grouped together under a single easy handling.\n");
    printf(" • Structure is a user different data type that can related information about an entity. Structure is nothing regards about particular entity\n");
    printf(" Structure Declaration :\n");
    printf(" syntax:\n struct structure_name\n {\n  data_type member1\n  data_type member2\n  data_type member3\n  .\n  .\n  .\n  data_type member n\n\n");
    printf(" example :\n  struct employee\n  {\n   int empnumber;\n    char empnames[25];\n   int empage;\n   float empsalary;\n  };\n");
    printf("\n\n Declaring Structure Variables :\n\n");
    printf(" • Structure variables are the variables using which members of structure accessed with the help of dot operator.\n");
    printf(" • C allocates memory for structure variables.\n\n syntax\n   struct structure_name structure_variable_name;\n");
    printf("\n example\n consider the structure employee defined earlier the variables for employee structure can be declared as,\n");
    printf(" struct employee emp1;\n");
    printf("                           ________ _______________\n");
    printf("          memory to    <-- |      0 |_____________|\n");
    printf("        stack operation<----_____ 1 |_____________|\n");
    printf("                           |      2 |_____________|\n");
    printf("                           |        |             |\n");
    printf("                          /         |             |\n");
    printf("    memory to store  <---/          |             |\n");
    printf("                                    |             |\n");
    printf("           empname   <---\\          |             |\n");
    printf("                          \\         |             |\n");
    printf("                           \\        |_____________|\n");
    printf("                        ____\\___ 26 |_____________|\n");
    printf("   memory to store ___ /         27 |_____________|\n");
    printf("       empage          \\_________28 |_____________|\n");
    printf("                       /         29 |_____________|\n");
    printf("  memory to store ____/          30 |_____________|\n");
    printf("  empsalary           \\          31 |_____________|\n");
    printf("                       \\_________32 |_____________|\n\n\n");
    printf(" /* Write a C program to read on employee number, name, age, salary and print details using structure */\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n struct employee\n {\n  int empnumber\n  char empname[25];\n  int empage;\n  float empsalary;\n };\n");
    printf(" void main()\n {\n  struct employee emp1;\n  clrscr();\n  printf(\"enter the details\");\n  printf(\"enter the number\\n\");\n  scanf(\"%%d\",&emp.empnumber);\n  printf(\"enter the name\");\n");
    printf("  scanf(\"%%s\",emp1.empname);\n  printf(\"enter the employee age\");\n  scanf(\"%%d\",&emp1.empage);\n  printf(\"enter the employee salary\");\n  scanf(\"%%f\",&emp1.empsalary);\n  printf(\"enter the details\");\n  printf(\"employee number is %%d\\n\",emp.empnumber);\n  printf(\"employee name is %%s\\n\",emp.empname);\n  printf(\"employee age is %%d\\n\",emp.empage);\n  printf(\"employee salary is %%d\\n\",emp.empsalary);\n }\n");
    printf("\n\n\n Array of Structure :\n\n");
    printf(" Considering the employee structure,\n • If we want to read more that one employee details using same structure, then structure variable name has to be declared as an array.\n");
    printf(" i.e\n struct employee emp[25];\n now,\n  ->emp[0].empnumber ,emp[0].empname ,emp[0].empage ,emp[0].empsalary stores details of first employee.\n");
    printf("  ->emp[1].empnumber ,emp[1].empname ,emp[1].empage ,emp[1].empsalary stores details of second employee.\n");
    printf("  ->This reading and displaying details of each employee is done using for loop and generalized as emp[i];\n");
    printf(" /* Write a C program to read n employee details and display using structure concept. */\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n struct employee\n {\n  int empnumber\n  char empname[25];\n  int empage;\n  float empsalary;\n };\n");
    printf(" void main()\n {\n  struct employee emp[19];\n  int n,i;\n  printf(\"enter number of employees\");\n  scanf(\"%%d\",&n);\n  printf(\"enter %%d employee details\\n\",n);\n  for(i=0;i<n;i++)\n  {\n   printf(\"enter %%d employee details\\n\",i+1);\n   printf(\"enter the number\\n\");\n");
    printf("   scanf(\"%%d\",&emp[i].empnumber);\n   printf(\"enter the name\");\n   scanf(\"%%s\",emp[i].empname);\n   printf(\"enter the employee age\");\n   scanf(\"%%d\",&emp[i].empage);\n   printf(\"enter the employee salary\");\n   scanf(\"%%f\",&emp[i].empsalary);\n  }\n");
    printf("  printf(\"employee details are\\n\");\n  for(i=0;i<n;i++)\n  {\n  printf(\"details of employee %%d are \\n\",i+1);\n  printf(\"employee number is %%d\\n\",emp.empnumber);\n  printf(\"employee name is %%s\\n\",emp.empname);\n  printf(\"employee age is %%d\\n\",emp.empage);\n  printf(\"employee salary is %%d\\n\",emp.empsalary);\n  }\n");
    printf("  printf(\"enter the date of birth \\n\");\n  scanf(\"%%d%%d%%d%%s\",&empdob.dd,&empdob.mm,&empdob.yy,empdob.dy);\n  printf(\"employee details are\\n\");\n  printf(\"employee number is %%d\\n\",emp.empnumber);\n  printf(\"employee name is %%s\\n\",emp.empname);\n  printf(\"employee age is %%d\\n\",emp.empage);\n  printf(\"employee salary is %%d\\n\",emp.empsalary);\n  getch();\n }\n");
    printf("\n Output :\n  enter employee number\n  19\n  enter employee name\n  vikhayth\n  enter employee age\n  24\n  enter employee salary\n  39700.700\n  enter date of birth\n  9 9 1991 monday\n\n  employee details are\n  employee number is 19\n  employee name is vikhyath\n  employee age is 24\n  employee salary is 39700.700\n  employee date of birth is  is 9/9/1991 monday\n\n");
    printf("\n /* program to illustrate nested structures there are two ways*/\n");
    printf("\n1)\n #include<stdio.h>\n #include<conio.h>\n struct dob\n {\n  int dd,mm,yy;\n  char dy[25];\n };\n struct employee\n  {\n  int empnum;\n  char empname[25];\n  int empage;  float salary;  struct dob dob;\n };\n");
    printf(" void main()\n {\n  struct employee emp;\n  printf(\"enter the details\");\n  printf(\"enter the number\\n\");\n  scanf(\"%%d\",&emp.empnumber);\n  printf(\"enter the name\");\n");
    printf("  scanf(\"%%s\",emp1.empname);\n  printf(\"enter the employee age\");\n  scanf(\"%%d\",&emp1.empage);\n  printf(\"enter the employee salary\");\n  scanf(\"%%f\",&emp1.empsalary);\n }\n");
    printf("\n\n2)\n #include<stdio.h>\n #include<conio.h>\n struct employee\n {\n  int empnum;\n  char empname[25];\n  int empage;  float empsalary;\n  struct dob\n  {\n   int dd,mm,yy;\n   char dy[25];\n  }dob;\n };\n");
    printf(" void main()\n {\n  struct employee emp;\n  printf(\"enter the details\");\n  printf(\"enter the number\\n\");\n  scanf(\"%%d\",&emp.empnumber);\n  printf(\"enter the name\");\n");
    printf("  scanf(\"%%s\",emp1.empname);\n  printf(\"enter the employee age\");\n  scanf(\"%%d\",&emp1.empage);\n  printf(\"enter the employee salary\");\n  scanf(\"%%f\",&emp1.empsalary);\n }\n");
    printf(" Two ways of creating nested structures\n\n");
    printf("  1) Declaring structure variable as data member in another structure here the object of date of birth structure is defined in employee structure.\n\n");
    printf("  2) Defining structure inside another structure here the child structure dob is defined inside employee structure.\n\n");
    printf("struct structure1\n{\n data_type structure1_member_name;\n .\n .\n .\n};\n\n\nstruct structure2\n{\n data_type structure2_member_name;\n .\n .\n .\n};");
    printf("\n\n Structure and Functions :\n");
    printf(" • Structure can be passed to function and returned from it. Function can access members of structure in three ways, that is, passing structure to function can be done in following three ways,\n");
    printf(" -> Passing individual members.\n -> Passing entire structure or structure variable.\n -> passing address of structure.\n\n");
    printf(" Passing Individual Members :\n • While calling a function from main,in the place of actual parameters we can use or pass structure member as\n structure_variable_name.structure_member_name\n\n");
    printf(" /* program to illustrate structure with functions (by passing individual members)*/\n\n");
    printf(" #include<stdio.h>\n void display(char n[],int en);\n struct employee\n {\n  char empname[25];\n  int empnumber;\n };\n void main()\n {\n  struct employee e;\n  printf(\"enter employee name and number\");\n  scanf(\"%%s%%d\",e.empname,&e.empnumber);\n  display(e.empname,e.empnumber);\n }\n\n void display(char n[21],int en)\n {\n  printf(\"employee details are\\n\");\n  printf(\"employee name is %%s\\t employee number is %%d\\n\",n,en);\n }\n");
    printf(" output\n enter employee name and number\n vikhyath 19\n employee details are\n employee name is vikhyath  employee number is 19\n\n\n");
    printf(" Passing the entire structure Or structure variable : \n");
    printf(" • Instead of passing individual members of structure, entire structure is passed as actual parameter while calling a function. Here the variable of structure is passed to the function.\n");
    printf("\n /* program to illustrate structure with(passing the structure variable)*/\n\n");
    printf(" #include<stdio.h>\n struct employee\n {\n  char empname[25];\n  int empnumber;\n };\n void main()\n {\n  struct employee e;\n  printf(\"enter employee name and number\");\n  scanf(\"%%s%%d\",e.empname,&e.empnumber);\n  display(e);\n }\n void display(struct employee e)\n {\n  printf(\"employee details are\\n\");\n  printf(\"employee name is %%s\\t employee number is %%d\\n\",n,en);\n }\n");
    printf(" output\n enter employee name and number\n vikhyath 19\n employee details are\n employee name is vikhyath  employee number is 19\n\n\n");
    printf("\n Type definition\n\n • The C programming language provides typedef keyword which allows the user to create a new data type. typedef dose not occupy memory\n");
    printf(" syntax :\n typedef existing_data_type new_data_type;\n");
    printf("\n -> Now instead of int a=10; we can declare as integer a=10; which is perform same as int.\n\n\n similarly we can apply for structure as shown below\n\n");
    printf(" ____________________________________________________________\n");
    printf(" |/* without typedef */         | /*with typedef */         |\n");
    printf(" | struct employee              | typedef struct employee   |\n");
    printf(" | {                            | {                         |\n");
    printf(" |  char empname[10];           |  char empname[10];        |\n");
    printf(" |  int empnumber;              |  int empnumber;           |\n");
    printf(" |  int empage;                 |  int empage;              |\n");
    printf(" |  float empsalary;            |  float empsalary;         |\n");
    printf(" |  };                          |  };                       |\n");
    printf(" |  struct employee emp;        |  employee emp;            |\n");
    printf(" |                              |/*here employee itself act |\n");
    printf(" |                              |as data_type which is the  |\n");
    printf(" |                              |structure  type declare usi|\n");
    printf(" |                              |ng typedef. Hence, no need |\n");
    printf(" |                              |of writing struct while    |\n");
    printf(" |                              | structure variable emp */ |\n");
    printf(" |______________________________|___________________________|\n\n\n");
    printf(" Passing Structure through Pointers :\n");
    printf(" • Structure can be passed to function using pointers.\n");
    printf("   syntax :\n       struct structure_name structure_variable, *structure_pointer_name;\n        structure_pointer_name = &structure_variable;\n");
    printf("\n /* program illustrate passing of structures through pointers */\n");
    printf(" #include<stdio.h>\n #include<conio.h>\n struct employee\n {\n  int empnumber;\n  char empname[25];\n  int empage;\n  float empsalary;\n };\n void display(struct employee *eptr);\n");
    printf(" void main()\n {\n  struct employee emp;\n  printf(\"enter employee name\");\n  scanf(\"%%s\",emp.empname);\n  printf(\"enter employee number\");\n  scanf(\"%%d\",emp.empnumber);\n  printf(\"enter employee age\");\n  scanf(\"%%d\",emp.empage);\n  printf(\"enter employee salary\");\n  scanf(\"%%f\",emp.empsalary);\n  display(&emp);  getch();\n }\n");
    printf(" void display(struct employee *eptr)\n {\n  printf(\"employee details are\");\n  printf(\"employee name is %%s\\n\",eptr->empname);\n  printf(\"employee number is %%d\\n\",eptr->empnumber);\n  printf(\"employee age is %%d\\n\",eptr->empage);\n  printf(\"employee salary is %%f\\n\",eptr->empsalary);\n }\n\n");
}
