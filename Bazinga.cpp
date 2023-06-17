#include <iostream>
#include <string>
using namespace std;
#define SUCESSO 0


int main() {
    int n;
    string options[5] = {"pedra", "papel", "tesoura", "Spock", "lagarto"};
    string sheldon, raj;
    int nSheldon, nRaj;
    std::cin >> n;

    for(int i = 1; i<=n; i++){
        std::cin >> sheldon;
        std::cin >> raj;

        //Transforma as strings em um código numérico de 0 a 5
        for(int j = 0; j<5; j++){
            if(options[j] == sheldon){
                nSheldon = j;
            }
            if(options[j] == raj){
                nRaj = j;
            }
        }

        if(nSheldon == nRaj){
            std::cout << "Caso #" << i << ": De novo!\n";
            continue;
        }

        if(((nSheldon - nRaj)% 2)){
            if(nSheldon > nRaj){
                std::cout << "Caso #" << i << ": Bazinga!\n";
            } else{
                std::cout << "Caso #" << i << ": Raj trapaceou!\n";
            }
        } else{
            if(nSheldon < nRaj){
                std::cout << "Caso #" << i << ": Bazinga!\n";
            } else{
                std::cout << "Caso #" << i << ": Raj trapaceou!\n";
            }
        }

    }

    return SUCESSO;
}