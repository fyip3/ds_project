// ---
// jupyter:
//   jupytext:
//     text_representation:
//       extension: .cpp
//       format_name: light
//       format_version: '1.5'
//       jupytext_version: 1.14.5
//   kernelspec:
//     display_name: C++17
//     language: C++17
//     name: xcpp17
// ---

// +
#include <iostream>

using namespace std;

cout << "        ___           ";
cout << "       / ||\          ";
cout << "       \___/          ";
cout << "         |            ";
cout << "         |            ";
cout << "        /|\           ";
cout << "       / | \          ";
cout << "         |            ";
cout << "        / \           ";
cout << "       /   \          ";
cout << "      /     \         ";
cout << "   ^ This is Jermey   ";

int main() {
   int i = 0;
    cpsc110(i);
    return 0;
}

int cpsc110(int i) {
    return i + cpsc110(i+1);
}
// -


