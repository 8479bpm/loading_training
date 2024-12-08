#include <unistd.h>

int ft_strlen(char *str) {
    int index;
    index = 0;

    while(str[index] != '\0') {
        index ++;
    }
        return index;
}

int main(int argc, char *argv[]) {
    write(1, argv[0], ft_strlen(argv[0]));
    write(1, "\n", 1);
    return 0;
}