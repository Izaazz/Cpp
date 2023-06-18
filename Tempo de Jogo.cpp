#include <iostream>
using namespace std;
#define SUCESSO 0


int main() {
    int hr, min, hr2, min2, totalH = 0, totalM = 0;

    std::cin >> hr;
    std::cin >> min;
    std::cin >> hr2;
    std::cin >> min2;


    if(min2 < min){
        totalH--;
        totalM = min2+ (60-min);
        if(totalM == 60){
            totalH++;
        }
    } else{
        totalM = min2 - min;
    }


    if(hr2 < hr){
        totalH += hr2 + (24-hr);
    }
    else if(hr == hr2){
        if(min2 < min){
            totalH = 23;
        } else{
            totalH = 24;
        }
    } else {
        totalH += hr2 - hr;
    }

    std::cout << "O JOGO DUROU " << totalH << " HORA(S) E " << totalM << " MINUTO(S)\n";

    return SUCESSO;
}