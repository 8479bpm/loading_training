    #include <stdio.h>
    #include <unistd.h>

    void ft_ft(int *nbr);

    int main(void) {
        int nombre = 0;
        // printf("le nombre est : %d\n", nombre); - pour vérifier notre valeur initiale
        ft_ft(&nombre);
        // printf("le nombre est : %d\n", nombre); - pour vérifier si notre valeur a bien été modifiée par la fonction
        return 0;
    }

    void ft_ft(int *nbr) {

        *nbr = 42;
        
    }
        


    
