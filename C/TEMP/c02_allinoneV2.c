#include <stdio.h>
#include <unistd.h>

// Version avec des POINTEURS

char    *ft_strcpy(char *dest, char *src);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
int     ft_str_is_alpha(char *str);
int     ft_str_is_numeric(char *str);
int     ft_str_is_lowercase(char *str);
int     ft_str_is_uppercase(char *str);
int     ft_str_is_printable(char *str);
char    *ft_strupcase(char *str);
char    *ft_strlowcase(char *str);
char    *ft_strcapitalize(char *str);
unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);



// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// exercice0
char    *ft_strcpy(char *dest, char *src) {
    // on save la valeur originale de dest, après l'incrémentation de dest, nous ne sommes plus au début de la chaine mais à la fin. strcpy return le début de la chaine dest.
    char    *originalDest = dest;

    while(*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
        *dest = '\0';
        return originalDest;
}

// exercice1
char    *ft_strncpy(char *dest, char *src, unsigned int n) {
    char    *originalDest = dest;
    unsigned int    index = 0;

    while(*src != '\0' && index < n) {
        *dest = *src;
        src++;
        dest++;
        index++;
    }

    while(index < n) {
        *dest = '\0';
        dest++;
        index++;
    }
    return originalDest;
}

// exercice2
int     ft_str_is_alpha(char *str) {
    if(*str == '\0') {
        return 1;
    }

    while(*str != '\0') {
        if(!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))) {
            return 0;
        }
            str++;
    }
            return 1;
}           

// exercice3
int     ft_str_is_numeric(char *str) {
    if(*str == '\0') {
        return 1;
    }

    while(*str != '\0') {
        if(!(*str >= '0' && *str <= '9')) {
            return 0;
        }
            str++;
    }   
            return 1;
}

// exercice4
int     ft_str_is_lowercase(char *str) {
    if(*str == '\0') {
        return 1;
    }

    while(*str != '\0') {
        if(!(*str >= 'a' && *str <= 'z')) {
            return 0;
        }
            str++;
    }
            return 1;
}

// exercice5
int     ft_str_is_uppercase(char *str) {
    if(*str == '\0') {
        return 1;
    }

    while(*str != '\0') {
        if(!(*str >= 'A' && *str <= 'Z')) {
            return 0;
        }
            str++;
    }
            return 1;
}   

// exercice6
int     ft_str_is_printable(char *str) {
    if(*str == '\0') {
        return 1;
    }

    while(*str != '\0') {
        if(!(*str >= 32 && *str <= 126)) {
            return 0;
        }
            str++;
    }
            return 1;
}   

// exercice7
char    *ft_strupcase(char *str) {
    char    *originalPointer = str;
    while(*str != '\0') {
        if(*str >= 'a' && *str <= 'z') {
            *str = * str - ('a' -'A');
        }
            str++;
    }
        return originalPointer;
}

// exercice8
char    *ft_strlowcase(char *str) {
    char    *originalPointer = str;
    while(*str != '\0') {
        if(*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');
        }
            str++;
    }
            return originalPointer;
}

// exercice 9
char    *ft_strcapitalize(char *str) {
    int     count;
    char    *originalStr;

    count = 1;
    originalStr = str;
    while(*str != '\0') {
    // printf("CHECK -- count:%d, str:%c\n", count, *str);    
        if(count && (*str >= 'a' && *str <= 'z')) {
            *str = *str - ('a'- 'A');  
            count = 0;
        } else if (!count && (*str >= 'A' && *str <= 'Z'))  {
            *str = *str + ('a' - 'A');
        }

          if(!(*str >= 'a' && *str <= 'z') && !(*str >= 'A' && *str <= 'Z')) {
            count = 1;
          } 
          str++;
         
        }
        
        return originalStr;
         
    }

    // exercice 10
    unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
    unsigned int length = 0;
    char *src_ptr = src;  // Pointeur pour parcourir la chaîne source
    char *dest_ptr = dest;  // Pointeur pour parcourir la chaîne destination

    // Calculer la longueur de la chaîne source
    while (*src_ptr != '\0') {
        length++;
        src_ptr++;
    }

    // Si size == 0, on ne copie rien et on retourne la longueur de la chaîne source
    if (size == 0) {
        return length;
    }

    // Réinitialiser le pointeur dest pour la copie
    src_ptr = src;

    // Copier les caractères de src vers dest jusqu'à size - 1
    while (*src_ptr != '\0' && size > 1) {
        *dest_ptr = *src_ptr;
        dest_ptr++;
        src_ptr++;
        size--;
    }

    // Ajouter le caractère nul de fin à dest
    *dest_ptr = '\0';

    // Retourner la longueur de la chaîne source
    return length;
}



// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int     main(void) {
    // exercice0
    printf("exercice0\n");
    char    chaine1[100];
    char    chaine2[] = "Je suis la 2e chaine de charactères, je suis un peu plus longue";
    ft_strcpy(chaine1, chaine2);
    printf("C1:%s, C2:%s\n", chaine1, chaine2); 

    // exercice1
    printf("exercice1\n");
    char    chaine3[30]; 
    char    chaine4[] = "Hello"; 
    char    chaine5[] = "Hello, World!";
    ft_strncpy(chaine3, chaine4, 4);
    printf("C3:%s, C4:%s\n", chaine3, chaine4);
    ft_strncpy(chaine3, chaine5, 5);
    printf("C3:%s, C5:%s\n", chaine3, chaine5);

    // exercice2
    printf("exercice2\n");
    char    chaine6[] = "Hello Piégé @@ 345"; 
    char    chaine7[] = "hello"; 
    char    chaine8[] = "";
    int     resultatCall1 = ft_str_is_alpha(chaine6);
    int     resultatCall2 = ft_str_is_alpha(chaine7);
    int     resultatCall3 = ft_str_is_alpha(chaine8);
    printf("C6:%d\n", resultatCall1);
    printf("C7:%d\n", resultatCall2);
    printf("C8:%d\n", resultatCall3);

    // exercice4
    printf("exercice4\n");
    char    chaine12[] = "b345T"; 
    char    chaine13[] = "hello"; 
    char    chaine14[] = "";
    int     resultatCall7 = ft_str_is_numeric(chaine12);
    int     resultatCall8 = ft_str_is_numeric(chaine13);
    int     resultatCall9 = ft_str_is_numeric(chaine14);
    printf("C12:%d\n", resultatCall7);
    printf("C13:%d\n", resultatCall8);
    printf("C14:%d\n", resultatCall9);

    // exercice5
    printf("exercice5\n");
    char    chaine15[] = "b345T"; 
    char    chaine16[] = "HELLO"; 
    char    chaine17[] = "";
    int     resultatCall10 = ft_str_is_uppercase(chaine15);
    int     resultatCall11 = ft_str_is_uppercase(chaine16);
    int     resultatCall12 = ft_str_is_uppercase(chaine17);
    printf("C15:%d\n", resultatCall10);
    printf("C16:%d\n", resultatCall11);
    printf("C17:%d\n", resultatCall12);

    // exercice6
    printf("exercice5\n");
    char    chaine18[] = "b34\t5T"; 
    char    chaine19[] = "HELLO"; 
    char    chaine20[] = "";
    int     resultatCall13 = ft_str_is_printable(chaine18);
    int     resultatCall14 = ft_str_is_printable(chaine19);
    int     resultatCall15 = ft_str_is_printable(chaine20);
    printf("C18:%d\n", resultatCall13);
    printf("C19:%d\n", resultatCall14);
    printf("C20:%d\n", resultatCall15);

    // exercice7
    printf("exercice7\n");
    char    chaine21[] = "b34\t5T"; 
    char    chaine22[] = "HellO"; 
    char    chaine23[] = "";
    ft_strupcase(chaine21);
    ft_strupcase(chaine22);
    ft_strupcase(chaine23);
    printf("C21:%s\n", chaine21);
    printf("C22:%s\n", chaine22);
    printf("C23:%s\n", chaine23);

    // exercice8
    printf("exercice8\n");
    char    chaine24[] = "b34\t5T"; 
    char    chaine25[] = "HellO"; 
    char    chaine26[] = "";
    ft_strlowcase(chaine24);
    ft_strlowcase(chaine25);
    ft_strlowcase(chaine26);
    printf("C21:%s\n", chaine24);
    printf("C22:%s\n", chaine25);
    printf("C23:%s\n", chaine26);

    // exercice9
    printf("exercice9\n");
    char    chaine27[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("C27 avant:%s\n", chaine27);
    ft_strcapitalize(chaine27);
    printf("C27 après:%s\n", chaine27);

    // exercice10
    printf("exercice10\n");
    char chaine28[30] = "";  // Chaîne de destination vide
    char chaine29[] = "Copie moi dans la destination meme si je suis trop longue";  // Chaîne source
    unsigned int size = 14;  // Taille maximum de la copie (y compris le caractère nul)
    int     retourFt = ft_strlcpy(chaine28, chaine29, 14);
    // Affichage avant la copie
    printf("C28 avant: '%s' C29 avant: '%s'\n", chaine28, chaine29);
    // Appel à ft_strlcpy
    ft_strlcpy(chaine28, chaine29, size);
    // Affichage après la copie
    printf("C28 après: '%s' C29 après: '%s'\n", chaine28, chaine29);
    printf("Longueur SRC : %d", retourFt);

    // -----------------------------------------------------------------------------------------------
    return 0;

}