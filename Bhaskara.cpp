#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
#define SUCESSO 0

int main() {
    
    double a, b, c, delta, raiz1, raiz2;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    delta = pow(b, 2.0) - (4*a*c);

    if(delta < 0 || a == 0){
        std::cout << "Impossivel calcular\n";
    } else{
        raiz1 = (-b + sqrt(delta))/(2*a);
        raiz2 = (-b - sqrt(delta))/(2*a);

        std::cout << std::setprecision(5) << std::fixed << "R1 = " << raiz1 << "\n";
        std::cout << std::setprecision(5) << std::fixed << "R2 = " << raiz2 << "\n";

    }

    return SUCESSO;
}