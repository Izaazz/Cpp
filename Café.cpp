#include <iostream>
#include <string>
using namespace std;
#define SUCESSO 0
#define N_ANDARES 3


int main() {
    int nPessoas[N_ANDARES];

    for(int i = 0; i<N_ANDARES; i++){
        std::cin >> nPessoas[i];
    }


    if(nPessoas[0] <= nPessoas[2]){
        if(((nPessoas[0]*2 + nPessoas[2]*2) < (nPessoas[0]*4 + nPessoas[1]*2))){
            std::cout << (nPessoas[0]*2 + nPessoas[2]*2) << "\n";
        } else {
            std::cout << nPessoas[0]*4 + nPessoas[1]*2 << "\n";

        }
    } else{
        if((nPessoas[2]*2 + nPessoas[0]*2 < nPessoas[2]*4 + nPessoas[1]*2)){
            std::cout << nPessoas[0]*2 + nPessoas[2]*2 << "\n";
        } else {
            std::cout << nPessoas[2]*4 + nPessoas[1]*2 << "\n";
        }

    }

    return SUCESSO;
}