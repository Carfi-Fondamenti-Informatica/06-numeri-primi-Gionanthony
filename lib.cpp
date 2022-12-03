#include "lib.h"

bool verifica (int num) {
    int c=0;

    for (int i=1; i<=num; i++) {
        if (num%i == 0) {
            c++;
        }
    }

    if (c==2) {
        return true;
    } else {
        return false;
    }
}
