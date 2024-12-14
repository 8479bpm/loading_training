#include <stdio.h>
int ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2) {
    int index = 0;
    while(s1[index] != '\0' && s2[index] != '\0') {
        if(s1[index] != s2[index]) {
            return (unsigned char)s1[index] - s2[index];
        }
           
            index++;
    }
            return (unsigned char)s1[index] - s2[index];
}


