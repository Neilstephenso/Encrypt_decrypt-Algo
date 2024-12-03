#pragma once
#include <string>
#include <iostream>
using namespace std;
class Decrypt 
{
	float key;
	string toBeDec;
	string decMsg;
	int i = 0;
public: 
	string decode(string str) {
		cout << "Key to be used: ";
		cin >> key;
		for (char& c : str) {
			if (i % 2) {
				float temp = (c - key);
				decMsg += temp;
				i++;
			}
			else {
				float temp = (c + key);
				decMsg += temp;
				i++;
			}
		}
		return decMsg;
	}
	void print() const {
		cout << decMsg << endl;
	}
};


