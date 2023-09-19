#include <stdio.h>

struct Etudiant {
    char nom[50];
    int age;
};

int main() {
    struct Etudiant listeEtudiants[5]; 
    int c = 0; 

    printf("Bienvenue dans le gestionnaire d'etudiants!\n");

    for (int i = 0; i < 5; i++) {
        printf("Entrez le nom de l'etudiant [%d] : ", i+1);
        scanf("%s", listeEtudiants[i].nom);

        printf("Entrez l'age de l'etudiant [%d] : ", i+1);
        scanf("%d", &listeEtudiants[i].age);

        c++; 

        printf("Etudiant ajoute avec succes!\n");

        char choix;
        printf("Voulez-vous ajouter un autre etudiant (O/N) ? ");
        scanf(" %c", &choix); 
        if (choix != 'O' && choix != 'o') {
            break; 
        }
    }

    printf("\nListe des etudiants :\n");
    for (int i = 0; i < c; i++) {
        printf("%d. Nom : %s, Age : %d\n", i + 1, listeEtudiants[i].nom, listeEtudiants[i].age);
    }

    return 0;
}
