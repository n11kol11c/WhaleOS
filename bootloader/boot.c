#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>

#define MAX_BUF 512*2

void logf(const char *string, ...);
void err(const char *string, unsigned int code);
void boot_init(void);

void logf(const char *fmt, ...) {
    char buffer[MAX_BUF];

    va_list args;
    va_start(args, fmt);
    vsnprintf(buffer, sizeof(buffer), fmt, args);
    va_end(args);

    printf("%s", buffer);
}
