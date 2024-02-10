#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cctype> // Para a função tolower
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

string palavra_secreta = "MELANCIA";
map<char, bool> chutou;
vector<char> chutes_errados;

bool letra_existe(char chute)
{
    // Convertendo chute para minúscula
    chute = tolower(chute);

    for (char letra : palavra_secreta)
    {
        if (tolower(letra) == chute) // Convertendo letra para minúscula para comparação
        {
            return true;
        }
    }
    return false;
}

bool nao_acertou()
{
    for (char letra : palavra_secreta)
    {
        if (!chutou[tolower(letra)])
        {
            return true;
        }
    }
    return false;
}

bool nao_enforcou()
{
    return chutes_errados.size() < 5;
}

void imprime_cabecalho()
{
    cout << "************************************" << endl;
    cout << "**** Bem-vindo ao jogo da forca! ****" << endl;
    cout << "************************************" << endl;
}

void erros()
{
    cout << "Chutes errados: ";
    for (char letra : chutes_errados)
    {
        cout << letra << " ";
    }

    cout << endl;
}

void imprime_palavra()
{
    for (char letra : palavra_secreta)
    {
        if (chutou[tolower(letra)]) // Convertendo letra para minúscula
        {
            cout << letra << " ";
        }
        else
        {
            cout << "_ ";
        }
    }

    cout << endl;
}

chuta()
{
    cout << "Chute uma letra: ";

    char chute;
    cin >> chute;

    chute = tolower(chute); // Convertendo chute para minúscula
    chutou[chute] = true;

    if (letra_existe(chute))
    {
        cout << "Você acertou! Esta letra está na palavra" << endl;
    }
    else
    {
        cout << "Você enforcou! Esta letra não está na palavra" << endl;
        chutes_errados.push_back(chute); // adiciona na lista
    }
    cout << endl;
}

vector<string> le_arquivo()
{
    ifstream arquivo;
    arquivo.open("palavras.txt");

    int quantidade_palavras;
    arquivo >> quantidade_palavras;

    vector<string> palavras_arquivo;

    for (int i = 0; i < quantidade_palavras; i++)
    {
        string palavra_lida;
        arquivo >> palavra_lida;
        palavras_arquivo.push_back(palavra_lida);
    }
    
    arquivo.close();
    return palavras_arquivo;
}

sorteio_palavra()
{
    vector<string> palavras = le_arquivo();
    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();

    palavra_secreta = palavras[indice_sorteado];
}

int main()
{
    imprime_cabecalho();

    le_arquivo();
    sorteio_palavra();

    while (nao_acertou() && nao_enforcou())
    {
        erros();

        imprime_palavra();

        chuta();
    }
    cout << "*********************" << endl;
    cout << "**** Fim de Jogo ****" << endl;
    cout << "*********************" << endl;

    if (nao_acertou())
    {
        cout << "Você não acertou! Tente novamente!" << endl;
    }
    else
    {
        cout << "Parabens! Você acertou a palavra secreta!" << endl;
        cout << "A palavra secreta era: " << palavra_secreta << endl;
    }
    return 0;
}
