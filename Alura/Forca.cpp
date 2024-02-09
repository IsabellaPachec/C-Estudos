#include <iostream>
#include <string> //biblioteca para usasr string
using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";
bool letra_existe(char chute){
     for(int i = 0; i < PALAVRA_SECRETA.size(); i++){
          if(chute == PALAVRA_SECRETA[i]){
               return true;
          }
     }
     return false;
}
int main()
{
   
    bool nao_acertou = true;
    bool nao_enforcou = true;

    while (nao_acertou && nao_enforcou)
    {
        char chute;
        cin >> chute;

        if (letra_existe(chute))
        {
            cout << "Você acertou! Esta letra esta na palavra" << endl;
        }
        else
        {
            cout << "Você errou! Esta letra nao esta na palavra" << endl;
        }
    }
}