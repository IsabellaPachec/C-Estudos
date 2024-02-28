#include "aluno.h"
using namespace std;

Aluno::Aluno(){
    ra= -1;
    nome = "";
}

Aluno::Aluno(int ra, std::string nome){
    ra = ra;
    nome = nome;
}

String Aluno:: obterNome(){
    return nome;
}

int Aluno::obterRa(){
    return ra;
}