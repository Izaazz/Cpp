#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, temp = 0;

    std::cin >> n;

    //Imprime os dois primeiros termos
    std::cout << t1;
    std::cout << " " << t2;
    n=n-2;
    
    for (int i = 1; i <= n; ++i) {

        temp = t1 + t2;
        t1 = t2;
        t2 = temp;
        
        std::cout << " " << t2;
    }
    std::cout << "\n";
    return 0;
}