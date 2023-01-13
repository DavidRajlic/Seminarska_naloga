#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <stack>
using namespace std;

int sestevanje();
int odstevanje();
int mnozenje();
double deljenje();
int izracun_ostanka();
int potenciranje();
int korenjenje();
double calculate_equation(string equation);
double eval(const std::string& expr) {
    std::stack<double> nums;
    std::stack<char> ops;

    for (std::size_t i = 0; i < expr.size(); i++) {
        char c = expr[i];
        
				
        // ignoriraj presledke 
        if(c == ' ') continue;
				// če je število 
        if (c >= '0' && c <= '9') {
            std::string num;
            while (i < expr.size() && (expr[i] >= '0' && expr[i] <= '9'))
                num += expr[i++];
            nums.push(std::stod(num));
            i--;
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            while (!ops.empty() && (ops.top() == '*' || ops.top() == '/')) {
                double num1 = nums.top(); nums.pop();
                double num2 = nums.top(); nums.pop();
                char op = ops.top(); ops.pop();
                if (op == '*') nums.push(num1 * num2);
                else if (op == '/') nums.push(num2 / num1);
            }
            ops.push(c);
        } else if (c == '(') {
            ops.push(c);
        } else if (c == ')') {
            while (ops.top() != '(') {
                double num1 = nums.top(); nums.pop();
                double num2 = nums.top(); nums.pop();
                char op = ops.top(); ops.pop();
                if (op == '+') nums.push(num1 + num2);
                else if (op == '-') nums.push(num2 - num1);
                else if (op == '*') nums.push(num1 * num2);
                else if (op == '/') nums.push(num2 / num1);
            }
            ops.pop();
        }
    }

    while (!ops.empty()) {
        double num1 = nums.top(); nums.pop();
        double num2 = nums.top(); nums.pop();
        char op = ops.top(); ops.pop();
        if (op == '+') nums.push(num1 + num2);
        else if (op == '-') nums.push(num2 - num1);
        else if (op == '*') nums.push(num1 * num2);
        else if (op == '/') nums.push(num2 / num1);
    }

    return nums.top();
}

int main () {
	/*
	cout << sestevanje() << endl;
	cout << odstevanje() << endl;
	cout << mnozenje() << endl;
	cout << deljenje() << endl;
	cout << izracun_ostanka() << endl;
	cout << potenciranje()  << endl;
	cout << korenjenje() << endl;
	 string equation;
  cout << "Enter an equation: ";
  getline(cin, equation);
  cout << "Result: " << calculate_equation(equation) << endl;
  return 0;
	
	*/
string equation;
cout << "Vstavi: ";

 getline(cin, equation);
 cout << eval(equation) << endl;
	
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
  char operacija;
  while (ss >> operacija) {
    double term;
    ss >> term;
		if (operacija == '*') result *= term;
    else if (operacija == '/') result /= term;
    else if (operacija == '+') result += term;
    else if (operacija == '-') result -= term;
  
  }
  return result;
}