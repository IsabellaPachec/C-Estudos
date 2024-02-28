#include <iostream>
using namespace std;

class Aluno{
    private:
    int ra;
    std::string nome;

    public:
    Aluno(); //Construção para ocupar memoria
    Aluno(int ra, std::string nome);

    //Função para pegar o nome do aluno
    String obterNome();
    //Função para pegar o RA
    int obterRa();
};