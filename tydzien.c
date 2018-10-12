#include "stdio.h"

int main() {
    enum dni {
        ni, po=3, wt, sr, cz, pt, so
    };
    enum dni dzien_tygodnia;

    dzien_tygodnia = wt;

    printf("%i\n", dzien_tygodnia);

}