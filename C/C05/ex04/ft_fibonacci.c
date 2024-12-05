#include <stdio.h>

int ft_fibonacci(int index);

// itérative mode
/* int ft_fibonacci(int index) {
      if (index < 0) {
        return -1;
    }
    
    if (index == 0) {
        return 0;
    }

    if (index == 1) {
        return 1;
    }

    int a = 0;
    int b = 1;
    int i = 2;
    int c = 0;

    while (i <= index) {
        c = a + b;
        a = b;  
        b = c;
        i++;
    }
        return b;
 }
 */

// récursif mode
int ft_fibonacci(int index) {
    if (index < 0) {
        return -1;
    }

    if (index == 0) {
        return 0;
    }

    if (index == 1) {
        return 1;
    }
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);

}


 int main(void) {
    int testFibo = -3;
    int captureFibo = ft_fibonacci(testFibo);
    printf("le résultat est:%d", captureFibo);
    return 0;
 }