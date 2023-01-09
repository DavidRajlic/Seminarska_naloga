#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int sestevanje();
int odstevanje();
int mnozenje();
double deljenje();
int izracun_ostanka();
int potenciranje();
int korenjenje();
double calculate_equation(string equation);

int main () {
	/*
		cout << sestevanje() << endl;
	cout << odstevanje() << endl;
	cout << mnozenje() << endl;
	cout << deljenje() << endl;
	cout << izracun_ostanka() << endl;
	cout << potenciranje()  << endl;
	cout << korenjenje() << endl;
	*/
	  string equation;
  cout << "Enter an equation: ";
  getline(cin, equation);
  cout << "Result: " << calculate_equation(equation) << endl;
  return 0;
	
}

int sestevanje () {
	int a;
	int b;
	cout << "Vnesi število: ";
	cin >> a;
	cout << "Vnesi število: ";
	cin >> b;
	return a + b;
}

int odstevanje() {
	int a;
	int b;
	cout << "Vnesi število: ";
	cin >> a;
	cout << "Vnesi število: ";
	cin >> b;
	return a - b;
}

int mnozenje() {
	int a;
	int b;
	cout << "Vnesi število: ";
	cin >> a;
	cout << "Vnesi število: ";
	cin >> b;
	return a *  b;
}

double deljenje() {
	double a;
	double b;
	cout << "Vnesi število: ";
	cin >> a;
	cout << "Vnesi število: ";
	cin >> b;
	return a / b;
}

int izracun_ostanka() {
	double a;
	double b;
	cout << "Vnesi število: ";
	cin >> a;
	cout << "Vnesi število: ";
	cin >> b;
	int c = a / b;
	return a - c*b;
}

int potenciranje() {
  double a;
	double b;
	cout << "Vnesi število: ";
	cin >> a;
	cout << "Vnesi število: ";
	cin >> b;
	int rezultat = 1;
	for (int i = 0; i < b; i++) {
		rezultat = a*rezultat;
	}
	return rezultat;
}

int korenjenje() {
	 double a;
	cout << "Vnesi število: ";
	cin >> a;

    double rezultat = a / 2;

    while ((rezultat * rezultat - a) > 0.001)
    {
        rezultat = (rezultat + a / rezultat) / 2;
    }

    return rezultat;

}

double calculate_equation(string equation) {
  stringstream ss;
  ss << equation;
  double result;
  ss >> result;
  char op;
  while (ss >> op) {
    double term;
    ss >> term;
    if (op == '+') result += term;
    else if (op == '-') result -= term;
    else if (op == '*') result *= term;
    else if (op == '/') result /= term;
  }
  return result;
}