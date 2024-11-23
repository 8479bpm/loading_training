#include <stdio.h>
#include <unistd.h>

char    *ft_strcpy(char *dest, char *src);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
int     ft_str_is_alpha(char *str);
int     ft_str_is_numeric(char *str);
int     ft_str_is_lowercase(char *str);
int     ft_str_is_uppercase(char *str);
int     ft_str_is_printable(char *str);
char    *ft_strupcase(char *str);
char    *ft_strlowcase(char *str);



// -----------------------------------------------------------------------------

// exercice0
char    *ft_strcpy(char *dest, char *src) {
    int     index;
    index = 0;

    while(src[index] != '\0') {
        dest[index] = src[index];
        index++;
    }
        dest[index] = '\0';
        return dest;
}

// exercice1
char    *ft_strncpy(char *dest, char *src, unsigned int n) {
    int     index;
    index = 0;

    while(index < n && src[index] != '\0') {
        dest[index] = src[index];
        index++;
    }

    while(index < n) {
        dest[index] = '\0';
        index++;
    }
        return dest;

}

// exercice2
int     ft_str_is_alpha(char *str) {
    int     index;

    index = 0;

    if(str[0] == '\0') {
        return 1;
    }

    while(str[index] != '\0') {
        if(!((str[index] >= 'A' && str[index] <= 'Z') || (str[index] >= 'a' && str[index] <= 'z'))) {
            return 0;
        }
            index ++;
    }
            return 1;       
}

// exercice3
int     ft_str_is_numeric(char *str) {
    int     index;

    index = 0;
    if(str[index] == '\0') {
        return 1;
    }

    while(str[index] != '\0') {
        if(!(str[index] >= '0' && str[index] <= '9')) {
            return 0;
        }
            index++;
    }   
            return 1;
}

// exercice4
int     ft_str_is_lowercase(char *str) {
    int     index;

    index = 0;
    if(str[index] == '\0') {
        return 1;
}
    while(str[index] != '\0') {
        if(!(str[index] >= 'a' && str[index] <= 'z')) {
            return 0;
        }
        index++;
    }
        return 1;
}

// exercice5
int     ft_str_is_uppercase(char *str) {
        int     index;

    index = 0;
    if(str[index] == '\0') {
        return 1;
}
    while(str[index] != '\0') {
        if(!(str[index] >= 'A' && str[index] <= 'Z')) {
            return 0;
        }
        index++;
    }
        return 1;
}

// exercice6
int     ft_str_is_printable(char *str) {
        int     index;

    index = 0;
    if(str[index] == '\0') {
        return 1;
}
    while(str[index] != '\0') {
        if(!(str[index] >= 32 && str[index] <= 126)) {
            return 0;
        }
        index++;
    }
        return 1;
}

// exercice7
char    *ft_strupcase(char *str) {
    int     index;

    index = 0;
    while(str[index] != '\0') {
         if(str[index] >= 'a' && str[index] <= 'z') {
            str[index] = str[index] - ('a'- 'A'); 
        }
        index++;
    }
        return str;
}   

// exercice8
char    *ft_strlowcase(char *str) {
    int     index;

    index = 0;
    while(str[index] != '\0') {
        if(str[index] >= 'A' && str[index] <= 'Z') {
            str[index] = str[index] + ('a' - 'A');
    }
        index++;
    }
    return str;
}





// -------------------------------------------------------------------------------------------------------

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

    // exercice3
    printf("exercice3\n");
    char    chaine9[] = "345"; 
    char    chaine10[] = "h3llo"; 
    char    chaine11[] = "";
    int     resultatCall4 = ft_str_is_numeric(chaine9);
    int     resultatCall5 = ft_str_is_numeric(chaine10);
    int     resultatCall6 = ft_str_is_numeric(chaine11);
    printf("C9:%d\n", resultatCall4);
    printf("C10:%d\n", resultatCall5);
    printf("C11:%d\n", resultatCall6);

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
    printf("exercice6\n");
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

    // ------------------------------------------------------------------------------------------------
    return 0;


}


