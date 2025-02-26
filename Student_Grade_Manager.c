#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[150];
    int rnum;
    int eng,math,phy,bio,chem;
    int total;
    float per;


    printf("---------Student Grade System---------\n\n");

    printf("Enter Student Name:\n");
    fgets(name, sizeof(name), stdin);

    printf("Enter Student Roll Number:\n");
    scanf("%d",&rnum);

    printf("Now Enter Marks of the Five Subjects\n");
    printf("English = ");
    scanf("%d",&eng);
    printf("Math = ");
    scanf("%d",&math);
    printf("Physics = ");
    scanf("%d",&phy);
    printf("Biology = ");
    scanf("%d",&bio);
    printf("Chemistry = ");
    scanf("%d",&chem);

    total = eng+math+phy+bio+chem;

    printf("\n\nTotal Marks are: %d\n",total);

    per = (total / 500.0) * 100;

    printf("Percentage is: %.2f\n",per);

    if(per >= 90)
    {
        printf("\nGrade is: \'A\'");
    }
    else if(per >= 80)
    {
        printf("\nGrade is: \'B\'");
    }
    else if(per >= 70)
    {
        printf("\nGrade is: \'C\'");
    }
    else if(per >= 60)
    {
        printf("\nGrade is: \'D\'");
    }
    else
    {
        printf("\nYour are Fail\n");
        printf("Do your best next time!\n");
    }

    FILE *record = fopen("Student Records.txt","a");

    if(record == NULL)
    {
        printf("\n==File Opening Error!==\n");
        return 1;
    }

    fprintf(record, "\n-----------------------\n");
    fprintf(record, "Student Name: %s\n",name);
    fprintf(record, "Roll Number: %d\n",rnum);
    fprintf(record, "Subject Marks:\n");
    fprintf(record, "Eng = %d, Math = %d, Phy = %d, Bio = %d, Chem = %d\n\n",eng,math,phy,bio,chem);
    fprintf(record, "Total Marks = %d,  Percentage = %.2f,   Grade = ",total,per);

    if(per >= 90)
    {
        fprintf(record, "\'A\'\n");
    }
    else if(per >= 80)
    {
        fprintf(record, "\'B\'\n");
    }
    else if(per >= 70)
    {
        fprintf(record, "\'C\'\n");
    }
    else if(per >= 60)
    {
        fprintf(record, "'D\'\n");
    }
    else
    {
        fprintf(record, "\'Fail\'\n");
    }

    fclose(record);


    return 0;
}
