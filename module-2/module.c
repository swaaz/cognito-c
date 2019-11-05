int module_2()
{
    int o;
    while(1)
    {
        printf("\n----------MODULE-2----------\n");
        printf("1.\n4.BACK TO MAIN MENU\n5.EXIT\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn6(); break;
            case 2: break;
            case 3: break;
            case 4:return 0;
            case 5:exit(0);


            default:printf("Sorry!! It's an invalid option\n");

        }
    }
    return 0;
}