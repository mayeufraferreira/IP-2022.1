#include <stdio.h>
#include <stdlib.h>

int main()
{
    double I, J;
    int c;

    for (I=0; I<2.1; I+=0.2) {
        for (c=1; c<=3; c++) {
            J = I + c;
            if (I==0 || I>1.8 || (I>0.9 && I<1.1)) {
                printf("I=%.lf J=%.lf\n", I, J);
            }

            else {
                printf("I=%.1lf J=%.1lf\n", I, J);
            }

        }
    }

    return 0;

}