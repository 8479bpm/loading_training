#include "ft_list.h"
#include <stdlib.h>

t_list *ft_create_elem(void *data) {
    // Création d'un nouvel élément de liste
    t_list *element = (t_list *)malloc(sizeof(t_list));
    if (element == NULL) {
        // Gestion de l'erreur si l'allocation échoue
        return NULL;
    }
    element->data = data;
    element->next = NULL;

    return element;
}
