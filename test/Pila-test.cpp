#include "gtest/gtest.h"
#include "../Pila/Pila.h"

Pila<int> *miPila;

TEST(test_Pila, nuevaPilaVacia) {
    miPila = new Pila<int>();
    EXPECT_EQ(miPila->esVacia(), true);
}

TEST(test_Pila, agregoTres_noVacia) {
    miPila->push(3);
    miPila->push(2);
    miPila->push(1);
    EXPECT_EQ(miPila->esVacia(), false);
}

TEST(test_Pila, popEnSentidoInverso) {
    EXPECT_EQ(miPila->pop(), 1);
    EXPECT_EQ(miPila->pop(), 2);
    EXPECT_EQ(miPila->pop(), 3);
    EXPECT_EQ(miPila->esVacia(), true);
}

TEST(test_Pila, otroPopException) {
    EXPECT_ANY_THROW(miPila->pop());
}
