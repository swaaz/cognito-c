int array_and_string()
{   system("clear");
    int o;
    int j;
    if(automat()==1)
    {
        learn7();
        for(j=0;j<150;j++)  //delay  in sec
        delay();
        quiz7();
    }
    else
    {
    while (1)
    {
        printf("\n----------ARRAY AND STRING-----------\n");
        printf("Do you want to\n1.Learn\n2.Quiz\n3.Back to previous menu4.exit\n");
        printf("Enter the option\n");
        scanf("%d",&o);
        switch (o)
        {
            case 1:learn7();break;
            case 2:quiz7(); break;
            case 3:return 0;
            case 4:exit(0);
            default:printf("Invalid option\n");

        }
    }
    }
    return 0;
}
