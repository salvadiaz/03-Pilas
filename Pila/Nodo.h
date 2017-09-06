#ifndef NODO_H
#define NODO_H

#include <iostream>

template <class T>
class Nodo{
private:
    T dato;
    Nodo <T> *next;
public:
    Nodo(T dato) : dato(dato) {
        this->dato = dato;
        next = NULL;
    }

    Nodo(T dato, Nodo<T> *next) : dato(dato), next(next) {}

    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        Nodo<T>::dato = dato;
    }

    Nodo<T> *getNext() const {
        return next;
    }

    void setNext(Nodo *next) {
        Nodo<T>::next = next;
    }
};

#endif