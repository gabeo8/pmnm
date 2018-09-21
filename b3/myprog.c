#include <stdio.h>
#include "func.h"

int main() {
    printf("Giai thua cua 5 la: %d\n", factor(5)); // 120
    printf("Combine cua 5, 4 la: %d\n", combine(10,6)); // 210
    printf("Sum 1+2+3+4+5+6+7+8+9+10 = %d\n", sum(10)); // 55
    printf("Sum 2+4+6+8+10 = %d\n", sum_p(5)); // 30


    return 0;
}
