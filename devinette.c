#include <stdio.h>

int main() {
    int nb_secret = 32;
    int nb_user;

    printf("Devine le nombre secret : ");
    scanf("%d", &nb_user);

    if (nb_user == nb_secret) {
        printf("Succès !\n");
    } else if (nb_user < nb_secret) {
        printf("Trop petit !\n");
    } else {
        printf("Trop grand !\n");
    }

    return 0;
}
