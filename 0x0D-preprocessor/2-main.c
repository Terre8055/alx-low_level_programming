#include <stdio.h>
#include <stdlib.h>

/**
 * The __FILE__ macro is a predefined macro
 * in the C standard library that contains
 * the current file's name.
 * return 0 to indicate successful
 */

int main(void) {
    printf("%s\n", __FILE__);
    return 0;
}
