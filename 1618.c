#include <stdio.h>

int main()
{
    int i, amt;

    scanf("%d", &amt);
    for (i = 0; i < amt; i++) {
        int ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
        int lefx, lefy, rigx, rigy;

        scanf("%d %d %d %d %d %d %d %d %d %d",
        &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy, &rx, &ry);

        if (
        (rx >= ax) && (rx <= bx) && (rx <= cx) && (rx >= dx) &&
        (ry >= ay) && (ry >= by) && (ry <= cy) && (ry <= dy))
            printf("1\n");
        else
            printf("0\n");
    }

    return 0;
}