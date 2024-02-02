
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
   cout << "*******************************" << endl;
   cout << "* Bem-vindos ao jogo de adivinhacao! Descubra o numero secreto*" << endl;
   cout << "**************************************" << endl;

   cout << "Escolha seu nivel de dificuldade: " << endl;
   cout << "Facil (F), Medio (M) ou Dificil (D)" << endl;

   char dificuldade;
   cin >> dificuldade;
   int num_tentativas;

   if (dificuldade == 'F')
   {
      num_tentativas = 15;
   }
   else if (dificuldade == 'M')
   {
      num_tentativas = 10;
   }
   else
   {
      num_tentativas = 5;
   }

   srand(time(NULL));
   const int NUMERO_SECRETO = rand() % 100;

   

   bool nao_acertou = true;
   int tentativas = 0;
   double pontos = 1000.0;

   for (tentativas = 1; tentativas <= num_tentativas; tentativas++)
   {
      int chute;
      cout << "Tentativa " << tentativas << endl;
      cout << "Qual seu chute? ";
      cin >> chute;

      double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
      pontos = pontos - pontos_perdidos;

      cout << "voce acha que o numero e: " << chute << endl;

      bool acertou = chute == NUMERO_SECRETO;
      bool maior = chute > NUMERO_SECRETO;

      if (acertou)
      {
         cout << "Parabens, voce acertou! O numero secreto e: " << NUMERO_SECRETO << endl;
         nao_acertou = false;
         break;
      }
      else if (maior)
      {
         cout << "O numero que voce digitou é maior que o numero secreto" << endl;
      }
      else
      {
         cout << "O numero que voce digitou é menor que o numero secreto" << endl;
      }
   }

   
   if (nao_acertou)
   {
      cout << "Voce nao acertou o numero secreto! O numero secreto era: " << NUMERO_SECRETO << endl;
   }
   else
   {
      cout << "Voce e muito bom, acertou em " << tentativas << " Tentativas, Parabens!" << endl;
      cout.precision(2);
      cout << fixed;
      cout << " Sua pontuacao no final foi de: " << pontos << endl;
   }
}
