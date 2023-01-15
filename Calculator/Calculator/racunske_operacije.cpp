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
int potenciranje(double a, double b);
double korenjenje(double a);
double calculate_equation(string equation);
double enacba(const string& expr) {
    stack<double> nums;
    stack<char> ops;
	 double korenjenec = 0.0;
    for (int i = 0; i < expr.size(); i++) {
        char c = expr[i];
        
        // ignoriraj presledke 
        if(c == ' ' || c == ',') continue;
				// če je število 
        if (c >= '0' && c <= '9') {
            string num;
            while (i < expr.size() && (expr[i] >= '0' && expr[i] <= '9'))
							num += expr[i++];
								// pretvori num v double in ga da na vrh stacka
							nums.push(stod(num));
							i--;
        }
					else if (expr[i] == 's' && expr[i+1] == 'q' && expr[i+2] == 'r' && expr[i+3] == 't'&& expr[i+4] == ' '  ) {
					i += 5;
					string num;
					 string num1;
					
					if (expr[i] == '(') {
						i++;
					
							 while (expr[i] != '+' && expr[i] != '-' && expr[i] != '*' && expr[i] != '/' && expr[i] != ')') {
					 	if (expr[i] >= '0' && expr[i] <= '9') {
								num += expr[i++];
								// pretvori num v double in ga da na vrh stacka
						}
						else {
							i++;
						}
					}
				
				if(expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/') {
					ops.push(expr[i]);
					i++;
				}
				if(expr[i] == ')') {
					double rezultat = korenjenje(stod(num));
					nums.push(rezultat);
				}
				else {
	while (expr[i] != ')') {
						 if ((expr[i] >= '0' && expr[i] <= '9')) {
								num1 += expr[i++];
								// pretvori num v double in ga da na vrh stacka
							nums.push(stod(num1));
							 }
							else {
								i++;
							}
					}
							if (ops.top() == '+') {
							korenjenec = (stod(num) + stod(num1));
								double rezultat = korenjenje(korenjenec);
									nums.top();
									nums.pop();
									ops.pop();
									nums.push(rezultat);
						}
						else if (ops.top() == '-')  {
							korenjenec = (stod(num) - stod(num1));
								double rezultat = korenjenje(korenjenec);
									nums.top();
						nums.pop();
							ops.pop();
						nums.push(rezultat);
						}
						else if (ops.top() == '*')  {
							korenjenec = (stod(num) * stod(num1));
								double rezultat = korenjenje(korenjenec);
									nums.top();
						nums.pop();
							ops.pop();
						nums.push(rezultat);
						}
						else if (ops.top() == '/')  {
							korenjenec = (stod(num) / stod(num1));
								double rezultat = korenjenje(korenjenec);
									nums.top();
						nums.pop();
							ops.pop();
						nums.push(rezultat);
						}
				}
						}
					 }

					 		else if (expr[i] == 'p' && expr[i+1] == 'o' && expr[i+2] == 'w'  && expr[i+3] == ' ') {
					i += 4;
					 string num1;
					if (expr[i] == '(') {
						i++;
					while (expr[i] != ',') {
						if ((expr[i] >= '0' && expr[i] <= '9')) {
								num1 += expr[i++];
								// pretvori num v double in ga da na vrh stacka
						}
						else {
							i++;
						}
					}
							}
						if(expr[i] == ',') {
							i++;
							 string num2;
						 while (expr[i] != ')') {
								 if ((expr[i] >= '0' && expr[i] <= '9')) {
								num2 += expr[i++];
								// pretvori num v double in ga da na vrh stacka
							 }
							else {
								i++;
							}
						
						}
						double rezultat = potenciranje(stod(num1), stod(num2));
						nums.push(rezultat);
						}
					}
				 // če je računska operacija +,-,*,/
				else if (c == '+' || c == '-' || c == '*' || c == '/') {
					// dokler stack z operacijami ni prazen in je hkrati na vrhu stacka * ali /
					
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
			
				
					
					// nums.push(koren);
			
 				
				}
				 while (!ops.empty()) {
        double num1 = nums.top(); nums.pop();
        double num2 = nums.top();
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
 int result = enacba(equation);
 cout << result<< endl;
	
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

int potenciranje(double a, double b) {
	int rezultat = 1;
	for (int i = 0; i < b; i++) {
		rezultat = a*rezultat;
	}
	return rezultat;
}

double korenjenje(double a) {
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