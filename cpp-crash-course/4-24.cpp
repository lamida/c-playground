#include <cstdio>

struct Point {
    int x, y;
};

Point make_transpose(Point p) {
    int tmp = p.x;
    p.x = p.y;
    p.y = tmp;
    return p;
}

void print_point(Point &p)  {
    printf("Point{%d, %d}\n", p.x, p.y);
}

int main() {
    Point x{10, 2};
    printf("Original point\n");
    print_point(x);

    Point res = make_transpose(x);
    printf("After transpose point\n");
    print_point(res);
}

