#include <iostream>

int binaereAddition(int a[], int b[], int bits, int res[]){
    int uebertrag = 0;
    int temp = 0;
    for (int i = bits-1; i >= 0; i--){
        temp = a[i] + b[i] + uebertrag;
        res[i] = temp % 2;
        if (temp >= 2) {
            temp = 1;
            uebertrag = 1;
        }
        else temp = 0;
    }
    return uebertrag;
}

int main(){

    const int bits = 6;
    int a[] = {0,1,1,1,1,0};
    int b[] = {0,0,1,0,1,0};
    int res[bits] = {0};
    int uebertrag = binaereAddition(a, b, bits, res);
    for (int i = 0; i < bits; i++){
        std::cout << res[i];
    }
    std::cout << std::endl;
    std::cout << "Uebertrag: " << uebertrag << std::endl;
    return 0;
}