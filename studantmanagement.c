#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    struct Student s[50];
    int n = 0, ch, roll, i, found;

    do {
        printf("\n1.Add  2.Delete  3.Update  4.Search  5.Display  6.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch(ch) {
        case 1:
            printf("Roll Name Marks: ");
            scanf("%d %s %f", &s[n].roll, s[n].name, &s[n].marks);
            n++;
            break;

        case 2:
            printf("Enter Roll: ");
            scanf("%d", &roll);
            for(i=0;i<n;i++)
                if(s[i].roll==roll) {
                    s[i]=s[n-1];
                    n--;
                    printf("Deleted\n");
                    break;
                }
            break;

        case 3:
            printf("Enter Roll: ");
            scanf("%d", &roll);
            for(i=0;i<n;i++)
                if(s[i].roll==roll) {
                    printf("Enter New Name Marks: ");
                    scanf("%s %f",s[i].name,&s[i].marks);
                    break;
                }
            break;

        case 4:
            printf("Enter Roll: ");
            scanf("%d",&roll);
            found=0;
            for(i=0;i<n;i++)
                if(s[i].roll==roll) {
                    printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
                    found=1;
                }
            if(!found) printf("Not Found\n");
            break;

        case 5:
            for(i=0;i<n;i++)
                printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
            break;

        case 6:
            printf("Exit");
            break;

        default:
            printf("Invalid Choice");
        }
    } while(ch != 6);

    return 0;
}