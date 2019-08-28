int module_1()
{
    int o,z=1;
    while(z)
    {
        printf("\n----------MODULE-1----------\n");
        printf("1.C TOKENS\n2.VARIABLES\n3.Back to previous menu\n");
        printf("Enter the option\n");
        scanf("%d",&o);
        switch (o)
        {
            case 1:c_tokens(); break;
            case 2:variable(); break;
            case 3:z=0;break;
        
            
            default:printf("Sorry!! It's an invalid option\n");
            
        }
    }
    return 0;
}