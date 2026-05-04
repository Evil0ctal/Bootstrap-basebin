#include <stdbool.h>

#define RESIGNED_SYSROOT_PATH jbroot(@"/.sysroot")

//strict_mode=true picks <bin>.strict.extra when present, else falls back to <bin>.extra
int ResignSystemExecutables(bool strict_mode);
