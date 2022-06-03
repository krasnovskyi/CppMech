
#include <stdio.h>
#include <math.h>

#define N 12

int main() {

    int mas[N] = { 7, 4, 5, 3, 6, 54, 4, 8, 4, 67, 8, 98 }, s = 0, r, d;

    for (int i = 0; i < N; i++) {
        if (mas[i] == 1  mas[i] == 2  mas[i] == 3) {
            //            printf("%d is simple\n", mas[i]);
            s += 1;
        }
        else if (mas[i] > 1) {
            //        for (int j=2; j<=sqrt(mas[i]); j++) {
            d = 2;
            do {
                r = mas[i] % d;
                if (r != 0) d++;
                while (r != 0);
                if (d == mas[i])
                    printf("%i - простое число", r); else printf("%i - не простое число", r);
            } while (1)

                //            if (mas[i] % j == 0) {
                ////                printf("%d is not simple\n", mas[i]);
                //                break;
                //
                //            } else{
                ////                printf("%d is simple\n", mas[i]);
                //                s+=1;
        }

    }

}
//    printf("Simple numbers: %d\n", s);
   }
   return 0;
}