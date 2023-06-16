#include <iostream>
using namespace std;
#define SUCESSO 0

int main() {
    int n, primo;
    bool ehprimo;

    //lê o número de casos de teste
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {

        std::cin >> primo;

        for(int j = primo-1; j>1; j--){

            //testa se o número é divisível pelos números menores que ele
            if(primo%j == 0){
                ehprimo = false;
                break;

            } else{
                ehprimo = true;
            }
        }

        if(!ehprimo){
            std::cout << primo << " nao eh primo" << "\n";
        }else{
            std::cout << primo << " eh primo" << "\n";
        }
    }
    return SUCESSO;
}