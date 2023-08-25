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
_strstr:
c
Copy code
#include <stddef.h>
#include <string.h>

char *_strstr(const char *haystack, const char *needle) {
    size_t needle_len = strlen(needle);
    
    while (*haystack) {
        if (strncmp(haystack, needle, needle_len) == 0) {
            return (char *)haystack;
        }
        haystack++;
    }
    
    return NULL;
}
