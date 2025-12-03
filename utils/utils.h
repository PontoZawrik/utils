#pragma once
template <typename T> void deleteArray(T**, unsigned);

template <typename T> T* createArray(unsigned);
template <typename T> T** createArray(unsigned, unsigned);

double* createDouble(unsigned);
double** createDouble(unsigned, unsigned);

int* createInt(unsigned);
int** createInt(unsigned, unsigned);

char* createChar(unsigned);
char** createChar(unsigned, unsigned);

template <typename T> void printArray(T, unsigned);
template <typename T> void printArray(T, unsigned, unsigned);