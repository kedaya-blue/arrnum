#include "pch.h"
#include <iostream>
#include <random>

using namespace std;
static void Arrnum(double a[]) {
    int num[5]{};
    int len = 200;
    while (len >= 0) {
        if (a[len] > 0 && a[len] <= 20)
            num[0]++;
        else if (a[len] > 20 && a[len] <= 50)
            num[1]++;
        else if (a[len] > 50 && a[len] <= 80)
            num[2]++;
        else if (a[len] > 80 && a[len] <= 130)
            num[3]++;
        else if (a[len] > 130 && a[len] <= 200)
            num[4]++;
        len--;
    }
    int k = 0;
    while (k <5) {
        cout << num[k] << endl;
        k++;
    }
}
static int getRandom(int max, int min) {
    return (rand()%(max-min+1))+min;
}
int main()
{
    double a[200]{};
    for (int i = 0; i < 200; i++) {
        a[i] = getRandom(200, 0);
    }
    Arrnum(a);
}
