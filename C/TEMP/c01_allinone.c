#include <stdio.h>
#include <unistd.h>

void ft_ft(int *nbr);
void ft_ultimate_ft(int *********nbr);
void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
int longueur(char *str);
void ft_putstr(char *str);
int ft_strlen(char *str);

// exercice0
void ft_ft(int *nbr) {
    *nbr = 42;
}

// exercice1
void ft_ultimate_ft(int *********nbr) {
    *********nbr = 42;
}

// exercice2
void ft_swap(int *a, int *b) {
    int temp = 0;
    temp = *b;
    *b = *a;
    *a = temp;
}

// exercice3
void ft_div_mod(int a, int b, int *div, int *mod) {
    *div = a/b;
    *mod = a%b;
}

// exercice4
void ft_ultimate_div_mod(int *a, int *b) {
    int temp = *a;
    *a = (*a)/(*b);
    *b = temp%(*b);
}

// exercice5
int longueur(char *str);
void ft_putstr(char *str) {
    write(1, str, longueur(str));
}

int longueur(char *str) {
    int index = 0;
    while (str[index] != '\0'){
        index++;
    }
    return index;
}

// exercice6
int ft_strlen(char *str) {
    int index = 0;
    while (str[index] != '\0') {
        index++;       
    } return index; 
}

int main(void) {
    
    printf("exercice0\n");
    int nombre = 56;
    printf("valeur de : %d\n", nombre);
    ft_ft(&nombre);
    printf("valeur de : %d\n", nombre);

    printf("exercice1\n");
    int nombre2 = 65;
    printf("valeur de : %d\n", nombre2);
    int *p = &nombre2;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;
    int *****t = &s;
    int ******u = &t;
    int *******v = &u;
    int ********w = &v;
    int *********x = &w; 
    ft_ultimate_ft(x);
    printf("valeur de : %d\n", nombre2);

    printf("exercice2\n");
    int nombre3 = 3456;
    int nombre4 = -877;
    printf("valeur de : %d et %d\n", nombre3, nombre4);
    ft_swap(&nombre3, &nombre4);
    printf("valeur de : %d et %d\n", nombre3, nombre4);

    printf("exercice3\n");
    int nombre5 = 568656;
    int nombre6 = -56;
    int div = 0;
    int mod = 0;
    printf("valeur de : %d et %d et %d et %d\n", nombre5, nombre6, div, mod);
    ft_div_mod(nombre5, nombre6, &div, &mod);
    printf("valeur de : %d et %d et %d et %d\n", nombre5, nombre6, div, mod);
    
    printf("exercice4\n");
    int nombre7 = 56;
    int nombre8 = 51;
    printf("valeur de : %d et %d\n", nombre7, nombre8);
    ft_ultimate_div_mod(&nombre7, &nombre8);
    printf("valeur de : %d et %d\n", nombre7, nombre8);

    printf("exercice5\n"); 
    char *chaine1 = "Je suis une chaine de caractères";
    char *chaine2 = "00";
    char *chaine3 = "Je suis vraiment super longue longue longue longue";
    ft_putstr(chaine1);
    printf("\n");
    ft_putstr(chaine2);
    printf("\n");
    ft_putstr(chaine3);

    printf("exercice6\n"); 
    char *chaine4 = "Yopla ça va ??";
    char *chaine5 = "Je suis tellement long !!";
    int captureDuResultat = ft_strlen(chaine4);
    int captureDuResultat2 = ft_strlen(chaine5);
    printf("il y a %d caractères dans la chaine\n", captureDuResultat);
    printf("il y a %d caractères dans la chaine\n", captureDuResultat2);    

    printf("exercice7\n"); 

    printf("exercice8\n"); 
    
    return 0;
}