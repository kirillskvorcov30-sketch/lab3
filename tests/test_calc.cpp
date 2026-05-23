#include "../src/calc.h"
#include <cassert>

int main() {
    assert(add(2, 3) == 5);
    assert(subtract(5, 2) == 3);
    assert(multiply(4, 5) == 20);
    return 0;
}
