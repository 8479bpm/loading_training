    #include <stdio.h>

    int ft_str_is_numeric(char *str);

    int ft_str_is_numeric(char *str) {
        if (str[0] == '\0') {
            return 1;
        }

        int index = 0;
        while (str[index] != '\0') {
            if(!(str[index] >= '0' && str[index] <= '9')) {
                return 0;
            }
            index++;
        } 
        return 1;
    }

    int main(void) {
        char string1[] = "565blipblop";
        char string2[] = "466879756434255678";
        char string3[] = "";
        int captureRetourString1 = ft_str_is_numeric(string1);
        int captureRetourString2 = ft_str_is_numeric(string2);
        int captureRetourString3 = ft_str_is_numeric(string3);
        
        printf("Return1:%d, Return2:%d, Return3:%d\n", captureRetourString1, captureRetourString2, captureRetourString3);
        return 0;
    }