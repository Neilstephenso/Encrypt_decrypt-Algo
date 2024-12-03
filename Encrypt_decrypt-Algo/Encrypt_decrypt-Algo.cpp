// ---------------------------------------------------------------------------
//    
//                   University of Wisconsin-Stout
//            Mathematics, Statistics & Computer Science
//
// Encrypt_decrypt-Algo.cpp
//
// Encrypts and decrypts a given statement with a syncronus key cipher arrangment.
// Neil Stephenson
// Date: 11/18/24
//
// ---------------------------------------------------------------------------

#include <iostream>
#include <string>
#include "Decrypt.h"
#include "Encrypt.h"
using namespace std;

int main()
{
    Encrypt en;
    Decrypt de;
    string exStr;

    cout << "Enter a message you would like to encrypt: " << endl;
    getline(cin, exStr);
    exStr = en.encode(exStr);
    en.print();
    exStr = de.decode(exStr);
    de.print();
    
};
