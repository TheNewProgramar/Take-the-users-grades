int main()
{

    int number = 0;

    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grdes = malloc(number* sizeof(char));

    if (grdes == NULL)
    {
        printf("Memory alloction faild\n");
        return 1;
    }
    
    for (int i = 0; i < number; i++)
    {
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grdes[i]);
    }
    
    for (int i = 0; i < number; i++)
    {
        printf("%c\n", grdes[i]);
    }
    
    free(grdes);
    grdes = NULL;

    return 0;
}
