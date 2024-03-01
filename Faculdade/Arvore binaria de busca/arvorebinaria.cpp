#include <iostream>
#include <cstddef>
#include "arvorebinaria.h"
using namespace std;

ArvoreBinariadeBusca::ArvoreBinariadeBusca()
{                // construtor
    raiz = NULL; // Primeira coisa a fazer é fazer a raiz ser nula
}
ArvoreBinariadeBusca::~ArvoreBinariadeBusca() {} // destrutor

void ArvoreBinariadeBusca::deletarArvore(No *Noatual) {}
{
}
No *ArvoreBinariadeBusca::obterRaiz()
{
    return raiz;
}
bool ArvoreBinariadeBusca::estavazio()
{
    return (raiz == NULL); // A raiz é nula?
}
bool ArvoreBinariadeBusca::estacheio()
{
    try
    {
        No *temp = new No; // aponta para um espaço de memoria para guardar lugar para o nó
        delete temp;
        return false;
    }
    catch (bad_alloc expection)
    {
        return true;
    }
}
// como inserir
void ArvoreBinariadeBusca::inserir(Aluno aluno)
{
    if (estacheio()) // verifica se esta cheio
    {
        cout << "A arvore esta cheia" << endl;
    }
    else
    {                        // SE NÃO é criado um espaço na memoria para colocar o NoNovo já adicionando as tres informações que ele precisa
        No *Nonovo = new No; // sempre criar um novo nó com NEW para caso precise deletar
        NoNovo->aluno = aluno;
        NoNovo->Filhodireita = NULL;
        NoNovo->Filhoesquerda = NULL;
        if (raiz == NULL) // então verifica se a raiz esta vazia ent ela se torna o NoNovo
        {
            raiz = NoNovo;
        }
        else
        {
            No *temp = raiz;
            while (temp != NULL) // enquanto temp for diferente de NULL
            {
                if (aluno.obterRa() < temp->aluno.obterRa()) // pergunta se é menor
                {
                    if // se for menor pergunta se a esquerda esta NULL
                        (temp->filhoesquerda == NULL)
                    {
                        temp->filhoesquerda = NoNovo; // se estiver temp se torna o NoNovo da esquerda
                        break;
                    }
                    else
                    { // se houver filhos temp passa para o proximo
                        temp = temp->filhoesquerda;
                    }
                }
                else // se temp for maior ele vai para a direita
                {    // se veio para a direita perguna se a direita tem filhos
                    if (temp->filhodireita == NULL)
                    { // se não tiver temp se torna o NoNovo da direita
                        temp->filhodireita = NoNovo;
                        break;
                    }
                    else
                    { // se tiver filho ent temp passa para o proximo
                        temp = temp->filhodireita;
                    }
                }
            }
        }
    }
}
void ArvoreBinariadeBusca::remover(Aluno aluno)
{
    removerbusca(aluno, raiz);
}

void ArvoreBinariadeBusca::removerbusca(Aluno aluno, No *&noatual)
{
    if (aluno.obterRa() < noatual->aluno.obterRa())
    {
        removerbusca(aluno, noatual->filhoesqueda);
    }
    else if (aluno.obterRa() > noatual->aluno.obterRa())
    {
        removerbusca(aluno, noatual->filhodireita);
    }
    else
    {
        deletno(noatual);
    }
}
void ArvoreBinariadeBusca::deletno(No *&noatual)
{
    No *temp = noatual;
    if (noatual->filhoesquerda == NULL)
    {
        noatual = noatual->filhodireita;
        delete temp;
    }
    else if (noatual->filhodireita == NULL)
    {
        noatual = noatual->filhoesquerda;
        delete temp;
    }
    else
    {
        Aluno AlunoSucessor;
        obsucessor(AlunoSucessor, noatual);
        noatual->aluno = AlunoSucessor
            removerbusca(AlunoSucessor, noatual->filhodireita);
    }
}
void ArvoreBinariadeBusca::obsucessor(Aluno &AlunoSucessor, No *temp)
{
    temp = temp->filhodireita;
    while (temp->filhoesquerda != NULL)
    {
        temp = temp->filhoesquerda;
    }

    AlunoSucessor = temp->aluno;
}

void ArvoreBinariadeBusca::buscar(Aluno &aluno, bool &busca)
{                       // o & siginifa que busca por referencia
    busca = false;      // começa deixando como false
    No *noatual = raiz; // criamos um ponteiro que aponta para o mesmo lugar que o ponteiro raiz esta apontando
    while (noatual != NULL)
    {                                                   // enquanto o no atual for diferente de null faça
        if (aluno.obterRa() < noatual->aluno.obterRa()) // enquanto esse nó atual for diferente de null vamos comparar o ra do aluno que foi mandado para esse metodo
        {
            noatual = noatual->filhoesquerda; // Então se o Ra for menor que o aluno que esta naquele no ele vai para a esquerda de onde ele esta
        }
        else if (aluno.obterRa() > noatual->aluno.obterRa()) // se não for menor MAS sim maior que o aluno que esta la no nó atual que estou comparando então ele vai para o filho da direita de onde ele estava apontando
        {
            noatual = noatual->filhodireita;
        }
        else // se não for nem maior nem menor então sera igual
        {
            busca = true;           // encontrou
            aluno = noatual->aluno; // recebe o nome do aluno além do ra
            break;
        }
    }
}
void ArvoreBinariadeBusca::imprimirpreordem(No *Noatual) {}
void ArvoreBinariadeBusca::imprimirordem(No *Noatual) {}
void ArvoreBinariadeBusca::imprimirposordem(No *Noatual) {}