/*
Made by onepersonintheuniverse|2025-01-23
Sample rate: 32768 Hz
Name: New Frontiers (it sounds like exploring new lands to me :])
*/


#include <stdio.h>

int main() {
    int seq[] = {1, 2, 3, 4, 5, 4, 3, 2}, bass[] = {0, 2, 0, 2, 3, 2, 0, 2};
    for (int t = 0; t < 600*32768; t++) {
        int m = (t>>17)&1 ? ((t>>16)&1 ? 3*seq[(t>>13)&7]*t/2 : 5*seq[(t>>13)&7]*t/4) : seq[(t>>13)&7]*t;
        int b = bass[(t>>14)&7]*t/4;
        int mw = m&255;
        int bw = b&255;
        putchar((mw+bw)/2);
    }
}
