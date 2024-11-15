char *ft_strncpy(char *dest, char *src, unsigned int n)

char *ft_strncpy(char *dest, char *src, unsigned int n) {




// cas où src < n - on complète les emplacements vide par '\0'
if (*src < n) {
// cas où src > n - il faut ajouter manuellement un '\0' à la fin pour en faire une chaine valide
} else if (*src > n) {
// cas où src = n - on copie la chaine (y compris '\0')
} else if (src = n) {
    dest = src;
}
        return dest;
}