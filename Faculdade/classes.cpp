// implementação da classe Time
#include <iostream>
#include "time.h" //arquivos criados são exportados em aspas duplas
using namespace std;

//Getters

int Time ::getHour() const{
    return hour;
}

int Time ::getMinute() const{ //pega o que esta no atributo e retorna uma copia
    return minute;
}

int Time ::getSecond() const{
    return second;
}

//Setters

void Time ::setHour(int hour ){
   this->hour = hour;
}

void Time ::setMinute(int minute ){
    this ->minute = minute;
}

void Time ::setSecond(int second){
    this ->second = second;
}

void Time :: print()const{
    
}