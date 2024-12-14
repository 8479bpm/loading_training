#ifndef FT_POINT_H
#define FT_POINT_H

// Définir t_point comme une structure avec deux champs x et y
typedef struct s_point {
    int x;
    int y;
} t_point;

void set_point(t_point *point);

#endif
