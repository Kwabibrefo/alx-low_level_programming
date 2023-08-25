#include <stddef.h>
#include <string.h>

char *_strpbrk(const char *s, const char *accept) {
    while (*s) {
        if (strchr(accept, *s)) {
            return (char *)s;
        }
        s++;
    }
    return NULL;
}
