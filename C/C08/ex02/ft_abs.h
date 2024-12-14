#ifndef ABSOLUTE
#define ABSOLUTE

#define ABS(value) do {               \
                        if ((value) < 0) { \
                            (value) = -(value); \
                        }              \
                    } while(0)

#endif