int operators()
{
    int o;
    while (1)
    {
        printf("\n----------OPERATORS----------\n");
        printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu\n4.Exit\n");
        printf("Enter the option : ");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn2();break;
            //case 2:quiz(); break;
            case 3:return 0;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }
    return 0;
}
