#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int main() {
	int s, t, d;
	cin >> s >> t >> d;
	cout << (d / (s * 2)) * t;
	return 0;
}