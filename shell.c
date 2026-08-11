#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct
{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

void printStudent(Student student);

int main()
{
    Student student1 = {"Spongebob", 30, 2.5, true};
    Student student2 = {"Patrick", 36, 1.0, false};
    Student student3 = {"Squidward", 48, 3.2, false};
    Student student4 = {0};

    strcpy(student4.name, "Sandy");
    student4.age = 27;
    student4.gpa = 4.0;
    student4.isFullTime = true;

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);

    return 0;
}
void printStudent(Student student)
{
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-time: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}

/*typedef struct
{
    char model[25];
    int years;
    int price;
}carInfo;

void printCarModel(carInfo car);
int main()
{

    carInfo cars[] =
    {
    {"Mustng", 2026, 32000},
    {"pride", 2024, 12000},
    {"kir", 2027, 9000}
    };

    int number = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < number; i++)
    {
        printf("%s %d $%d\n", cars[i].model, cars[i].years, cars[i].price);
    }
    
return 0;
}

void printCarModel(carInfo car)
{
    printf("Model: %s\n", car.model);
    printf("Rlese Year: %d\n", car.years);
    printf("price: %d\n", car.price);
    printf("\n");
}*/
/*void birthday(int *age);
int main()
{

    int age = 25;
    int *pAge = &age;
    
    birthday(pAge);

    printf("You are %d years old\n", age);

    return 0;
}
void birthday(int *age)
{
    (*age)++;
}*/

/*int main()
{

    FILE *pFile = fopen("firstFile.txt", "w");

    char text[1024] = "";

    printf("what do want to write: ");
    fgets(text, sizeof(text), stdin);

    if (pFile == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    
    fprintf(pFile, "%s",text);

    printf("File was wirrten sussecsfully");

    fclose(pFile);
    
    return 0;
}*/

/*int main()
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
}*/
