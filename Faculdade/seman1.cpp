#include <iostream>
using namespace std;

int main(){
    int var1 = 5;
    int* pont1 = & var1;//o * significa que é um ponteiro o & significa que o ponteiro recebe a variavel 
    

    
    cout << "Declarando Ponteiros" << endl;
    cout << "valor da variavel, atraves de seu numero " << var1 << endl;
    cout << "valor do ponteiro, atraves de seu numero " << pont1 << endl;
    cout << "valor do ponteiro, atraves de seu numero " << *pont1 << endl;

    return 0;
}