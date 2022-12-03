#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    int num;
    cin >> num;
    if(verifica(num) == true){
        cout << "numero primo";
    }
    else{
        cout << "numero non primo";
    }
    return 0;
}
