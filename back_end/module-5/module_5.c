
int module_5()
{
    int o;
    while(1)
    {
        printf("\n----------MODULE-5----------\n");
        printf("1. POINTERS\n2. STRUCTURE\n3. PREPROCESSOR DIRECTIVES\n4.BACK TO MAIN MENU\n5.EXIT\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:pointer(); break;
            case 2:structure(); break;
            case 3:preprocessor_directives(); break;
            case 4:return 0;
            case 5:exit(0);


            default:printf("Sorry!! It's an invalid option\n");

        }
    }
    return 0;
}
