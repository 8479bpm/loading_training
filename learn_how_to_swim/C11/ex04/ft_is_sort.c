int ft_is_sort(int *tab, int length, int(*f)(int, int)) {
    // Si le tableau a une taille inférieure ou égale à 1, il est considéré trié
    if (length <= 1) {
        return 1;
    }

    // Variable pour détecter l'ordre
    int increasing = 0;  // 0 = indéfini, 1 = croissant, -1 = décroissant

    int i = 0;

    // Parcours du tableau avec une boucle while
    while (i < length - 1) {
        int result = f(tab[i], tab[i + 1]);  // Comparer tab[i] et tab[i + 1]
        
        if (result < 0) {  // tab[i] < tab[i + 1], donc ordre croissant
            if (increasing == 0) {
                increasing = 1;  // Début de l'ordre croissant
            } else if (increasing == -1) {
                return 0;  // Ordre mixte (croissant et décroissant)
            }
        } else if (result > 0) {  // tab[i] > tab[i + 1], donc ordre décroissant
            if (increasing == 0) {
                increasing = -1;  // Début de l'ordre décroissant
            } else if (increasing == 1) {
                return 0;  // Ordre mixte (croissant et décroissant)
            }
        }

        i++;  // Passage à l'élément suivant
    }

    return 1;  // Le tableau est trié
}
