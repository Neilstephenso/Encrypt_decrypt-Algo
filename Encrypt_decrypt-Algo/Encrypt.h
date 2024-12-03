#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
class Encrypt
{
private:
	float key;
	string toBeEnc = "Testing phrase to be encoded";
	string encMsg;
	int i = 0;

public:
	string encode(string str) {
		cout << "Key to be used: ";
		cin >> key;
		for (char& c : str) {
			if (i % 2) {
				float temp = (c + key);
				encMsg += temp;
				i++;
			}
			else {
				float temp = (c - key);
				encMsg += temp;
				i++;
			}
		}
		return encMsg;
	}
	void print() const{
		cout << encMsg << endl;
	}
};



