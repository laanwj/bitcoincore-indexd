#include "utils.h"

#include <stdarg.h>
#include <assert.h>

int log_print(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    return 1;
}

int64_t GetTimeMillis()
{
    uint64_t now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    assert(now > 0);
    return now;
}
