#include <cstdio>

// Copy semantic. Copying argument by value.
int add_one_to(int x) {
    x++;
    return x;
}

int main() {
    auto original = 1;
    auto result = add_one_to(original);
    printf("Original: %d; Result: %d\n", original, result);
}