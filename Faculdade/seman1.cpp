#include <iostream>
using namespace std;

int main(){
    int var1 = 5;
    int* pont1 = & var1;//o * significa que é um ponteiro o & significa que o ponteiro recebe a variavel 
    

    
    cout << "Declarando Ponteiros" << endl;
    cout << "valor da variavel, atraves de seu numero " << var1 << endl;
    cout << "valor do ponteiro, atraves de seu numero " << pont1 << endl;
    cout << "valor do ponteiro, atraves de seu numero " << *pont1 << endl;

    int var2;
    //int var2 = *pont1;
    //cout << var2;

    // var1 = 30; //mundando valor de uma variavel com ponteiro;
    //*pont1 = 30; 
    //cout << var1 << endl;

    var2 = 50; //mudando o valor que o ponteiro aponta.
    //pont1 = &var2;
    //cout << *pont1 << endl;

    int* pont2;
    cout << *pont2 << endl;
    


    return 0;
}