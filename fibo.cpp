/*
Calculating Nth Fibonacci number using Binet's formula.
1st, 2nd, 3th, 4th, 5th, 6th, 7th, 8th, 9th, 10th, 11th,
1  , 1  , 2  , 3  , 5  , 8  , 13 , 21 , 34 , 55  , 89  , ...
Author: Remisa Yousefvand <remisa.yousefvand@gmail.com>
*/

#include "fibo.hpp"

int main(int argc, char const *argv[])
{
  string app = argv[0];
  if (argc == 1) {
    int n;
    cout << "Which Fibonacci number to calculate?" << endl;
    cin >> n;
    printFibo(app, n);
  } else if (argc == 2) {
    string flag = argv[1];
    if (flag == "--all" || flag == "-A") {
      for (int i = 1; i < MAX_N; i++) {
        cout << fibo(i) << ", ";
      }
      cout << "..." << endl;
    } else if (flag == "--help" || flag == "-H") {
      usage(app);
    } else if (flag == "--version" || flag == "-V") {
      cout << VERSION << endl;
      return 0;
    } else {
      int n;
      try
      {
        n = stoi(argv[1]);
      }
      catch(const exception &e)
      {
        cout << "Error: " << e.what() << endl;
        usage(app);
        return 1;
      }
      printFibo(app, n);
    }
  } else {
    usage(app);
  }
  return 0;
}

long fibo(int n) {
  return (pow(G, n) - pow(T, n)) / sqrt(5);
}

void usage(string app) {
  cout << "Usage\tTo calculate Nth Fibonacci number type: " << app << " N" << endl;
  cout << '\t' << "--all,     -A\tPrints sequence up to " << MAX_N << endl;
  cout << '\t' << "--help,    -H\tPrints help" << endl;
  cout << '\t' << "--version, -V\tPrints version number" << endl;
}

void printFibo(string app, int n) {
  if (n < 1 || n >= MAX_N) {
    cout << "N should be an integer between 0 and " << MAX_N << " (0 < n < " << MAX_N << ")." << endl;
  } else {
    cout << fibo(n) << endl;
  }
}
