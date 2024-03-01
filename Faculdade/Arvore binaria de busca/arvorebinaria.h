#include <iostream>
#include "aluno.h"

struct No{
    Aluno aluno; //info fo nó é o objeto da classe aluno
    No* filhoesquerda; //Ponteiros para o nó 
    No* filhodireita;//Ponteiros para o nó 
};

class ArvoreBinariadeBusca{//BST = Binary Search Tree
    private: 
    No* raiz;

    public:
    ArvoreBinariadeBusca();//construtor
    ~ArvoreBinariadeBusca(); //destrutor

    void deletarArvore(No* Noatual);
    No* obterRaiz();
    bool estavazio();
    bool estacheio();
    void inserir(Aluno aluno);
    void remover(Aluno aluno);
    void removerbusca (Aluno aluno, No*& noatual);
    void deletno(No*& noatual);
    void obsucessor(Aluno &AlunoSucessor, No*temp);
    void buscar(Aluno& aluno, bool& busca);
    void imprimirpreordem(No* Noatual);
    void imprimirordem(No* Noatual);
    void imprimirposordem(No* Noatual);


};