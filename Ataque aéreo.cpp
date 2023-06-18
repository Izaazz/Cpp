#include <iostream>
#include <string>
using namespace std;
#define SUCESSO 0


int main() {
    int n;
    string opcoes[3] = {"pedra", "papel", "ataque"};
    string p1, p2;

    std::cin >> n;

    for(int i = 1; i<=n; i++){
        std::cin >> p1;
        std::cin >> p2;

        if((p1 == "ataque" && p2 != "ataque") || (p1 == "pedra" && p2 == "papel")){
            std::cout << "Jogador 1 venceu\n";
        } else if (p1 == p2){
            if(p1 == "ataque"){
                std::cout << "Aniquilacao mutua\n";
            } else if(p1 == "pedra"){
                std::cout << "Sem ganhador\n";
            } else{
                std::cout << "Ambos venceram\n";
            }
        } else{
            std::cout << "Jogador 2 venceu\n";
        }

    }

    return SUCESSO;
}