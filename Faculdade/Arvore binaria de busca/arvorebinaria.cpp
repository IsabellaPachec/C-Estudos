#include <iostream>
#include <cstddef>
#include "arvorebinaria.h"
using namespace std;

ArvoreBinariadeBusca::ArvoreBinariadeBusca(){ // construtor
    raiz = NULL; //Primeira coisa a fazer é fazer a raiz ser nula
}      
    ArvoreBinariadeBusca::~ArvoreBinariadeBusca(){} // destrutor

    void ArvoreBinariadeBusca::deletarArvore(No *Noatual){}
{
}
No *ArvoreBinariadeBusca::obterRaiz() {
    return raiz;
}
bool ArvoreBinariadeBusca::estavazio() {
    return (raiz == NULL); //A raiz é nula?
}
bool ArvoreBinariadeBusca::estacheio() {
    try{
        No* temp = new No; //aponta para um espaço de memoria para guardar lugar para o nó
        delete temp;
        return false;
    } catch(bad_alloc expection){
        return true;
    }
}
void ArvoreBinariadeBusca::inserir(Aluno aluno) {}
void ArvoreBinariadeBusca::remover(Aluno aluno) {}
void ArvoreBinariadeBusca::buscar(Aluno &aluno, bool &busca) {}
void ArvoreBinariadeBusca::imprimirpreordem(No *Noatual) {}
void ArvoreBinariadeBusca::imprimirordem(No *Noatual) {}
void ArvoreBinariadeBusca::imprimirposordem(No *Noatual) {}