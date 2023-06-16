#include <iostream>
#include <string>
using namespace std;
#define SUCESSO 0
#define MAX_CAW 3

int main() {
    int nCaw = 0, sonho = 0;
    string falaCorvo;

    while(nCaw < MAX_CAW){
        getline(cin, falaCorvo);


        if(falaCorvo == "caw caw"){
            cout << sonho << "\n";
            sonho = 0;
            nCaw++;
        } else{
            if(falaCorvo[0] == '*'){
                sonho += 4;
            } 
            if(falaCorvo[1] == '*'){
                sonho += 2;
            }
            if(falaCorvo[2] == '*'){
                sonho += 1;
            }
        }
    }
    return SUCESSO;
}