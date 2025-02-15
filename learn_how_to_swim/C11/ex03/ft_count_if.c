int ft_count_if(char **tab, int length, int(*f)(char*)) {
    // Vérification que le tableau et la fonction ne sont pas NULL
    if (!tab || !f) {
        return 0;  // Si le tableau ou la fonction est NULL, on retourne 0.
    }

    int i = 0;

    // Parcours des éléments du tableau avec un seul index
    while (i < length) {
        // Si la fonction f sur l'élément retourne une valeur différente de 0
        if (f(tab[i]) != 0) {
            return 1;  // On retourne 1 immédiatement dès qu'un élément satisfait la condition
        }
        i++;  // Passage à l'élément suivant
    }

    return 0;  // Si aucun élément ne satisfait la condition, on retourne 0
}
