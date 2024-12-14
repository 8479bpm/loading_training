#include <stdbool.h>

bool is_opposite(const char *s1, const char *s2) {
  
  int index = 0;
  
    if(s1[0] == '\0' && s2[0] == '\0') {
      return false;
    }
  
    if(s1[index] >= 65 && s1[index] <= 90) {
        if(s2[index] == s1[index] + 32) {
            index++;
        }
            return true;
    }

    if(s1[index] >= 97 && s1[index] <= 122) {
        if(s2[index] == s1[index] - 32) {
            index++;
        }
            return true;
    }
        return false;

}

int main(void) {
    is_opposite("AABBC", "aabbc");
    return 0;
}