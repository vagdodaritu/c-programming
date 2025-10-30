#include<stdio.h>
#include<string.h>

   struct coach;
   char name[50];
   int age;
   int Yearofexperience;
   };

   int main() {
    struct Team teams[50];
    int n, i;

    printf("Enter number of teams: ");
    scanf("%d", &n);
    getchar();
     for (i = 0; i < n; i++) {
        printf("\n--- Enter details for Team %d ---\n", i + 1);

        printf("Enter Team Name: ");
        fgets(teams[i].teamName, sizeof(teams[i].teamName), stdin);
        teams[i].teamName[strcspn(teams[i].teamName, "\n")] = '\0'; // remove newline

        printf("Enter Sport Type: ");
        fgets(teams[i].sportType, sizeof(teams[i].sportType), stdin);
        teams[i].sportType[strcspn(teams[i].sportType, "\n")] = '\0';

        printf("Enter Coach Name: ");
        fgets(teams[i].coach.name, sizeof(teams[i].coach.name), stdin);
        teams[i].coach.name[strcspn(teams[i].coach.name, "\n")] = '\0';

        printf("Enter Coach Age: ");
        scanf("%d", &teams[i].coach.age);

        printf("Enter Years of Experience: ");
        scanf("%d", &teams[i].coach.yearsOfExperience);
        getchar(); // clear newline for next loop
    }

    // Display all team and coach details
    printf("\n===== Stored Team and Coach Details =====\n");
    for (i = 0; i < n; i++) {
        printf("\nTeam %d:\n", i + 1);
        printf("Team Name: %s\n", teams[i].teamName);
        printf("Sport Type: %s\n", teams[i].sportType);
        printf("Coach Name: %s\n", teams[i].coach.name);
        printf("Coach Age: %d\n", teams[i].coach.age);
        printf("Years of Experience: %d\n", teams[i].coach.yearsOfExperience);
    }

    return 0;
}
