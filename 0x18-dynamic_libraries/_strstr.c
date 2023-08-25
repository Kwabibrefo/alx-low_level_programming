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
