#include <math.h>
#include <string.h>
#include <iostream>

using namespace std;

long fibo(int);
void usage(string);
void printFibo(string, int);

const string VERSION = "1.0.0";
const int MAX_N = 0x5d;
const double G = (1 + sqrt(5)) / 2;
const double T = (1 - sqrt(5)) / 2;
