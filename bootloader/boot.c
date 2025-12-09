#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>

#define MAX_BUF 512*2

void logf(const char *string, ...);
void err(const char *string, unsigned int code);
void boot_init(void);

void logf(const char *string, ...) {
    char buffer[MAX_BUF];

    va_list args;
    va_start(args, string);
    vsnprintf(buffer, sizeof(buffer), string, args);
    va_end(args);

    printf("%s\n", buffer);
}
