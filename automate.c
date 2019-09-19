int automat()
{
    int c;
    printf("\nDo you want this module to be automatic?\n");
    printf("1. YES\n2. NO\n");
    printf("Enter the choice\n");
    scanf("%d",&c);
    if(c==1) return 1;
    else if(c==2) return 2;
    else return 0;
}
