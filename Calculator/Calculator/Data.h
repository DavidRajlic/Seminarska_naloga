#ifndef DATA_H // Preveri ce se Header file ni definiran, tako preprecimo večkratno deklaracijo istih spremenljivk
#define DATA_H	//Če ni ga definira
#include "string";
#include "regex";

extern void execute(std::string& currentDisplay);
void powerconvert(std::string& givenString);
int powerCheck(std::string& givenString, int pos);
void compile(std::string& givenString);

extern std::string currentDisplay = " ";

extern void execute(std::string &currentDisplayGiven) { 
    
    compile(currentDisplay);
    powerconvert(currentDisplay);

}

void compile(std::string &givenString) {
    for (int i = 0; i < givenString.length(); i++) {
        if (givenString[i] == '+' ||
            givenString[i] == '-' ||
            givenString[i] == '*' ||
            givenString[i] == '/' ||
            givenString[i] == '%' ||
            givenString[i] == '^') {
            givenString.insert(i+1, " ");
            givenString.insert(i, " ");
            i += 1;
        }
        else if (givenString[i] == '(') {
            givenString.insert(i + 1, " ");
        }
        else if (givenString[i] == ')') {
            givenString.insert(i, " ");
            i += 1;
        }
    }
}

void powerconvert(std::string &givenString) {
    for (int i = 0; i < givenString.length(); i++) {
        if (givenString[i] == '^') {
            givenString[i] = ',';
            int j = i + 2;
            if (givenString[j] == '(') {
                int bracketRatio = 1;
                j++;
                while (bracketRatio != 0) {
                    if (givenString[j] == '(') {
                        bracketRatio++;
                    }
                    else if (givenString[j] == ')') {
                        bracketRatio--;

                    }
                    j++;
                }
            }
            else {
                while (givenString[j] != ' ') {
                    j++;
                    j = powerCheck(givenString, j);
                }

            }

            int k = i - 2;
            if (givenString[k] == ')') {
                int bracketRatio = 1;
                k--;
                while (bracketRatio != 0) {
                    if (givenString[k] == ')') {
                        bracketRatio++;
                    }
                    else if (givenString[k] == '(') {
                        bracketRatio--;
                    }
                    k--;
                }
            }
            else {
                while (givenString[k] != ' ') {
                    k--;
                }
            }
            givenString.insert(j, " )");
            givenString.insert(k, " pow ( ");
        }
    }
}
int powerCheck(std::string& givenString, int pos) {
    if (givenString[pos + 1] == '^') {
        pos += 3;
        while (givenString[pos] != ' ') {
            pos++;
        }
        pos = powerCheck(givenString, pos);
    }
    return pos;
}
extern void deleteOne (std::string &currentDisplayGiven) {
    if (currentDisplayGiven.length() < 2) {
        return;
    }
    if (currentDisplayGiven[currentDisplayGiven.length() - 1] == '(') {
        currentDisplayGiven.pop_back();
        while (currentDisplay[currentDisplayGiven.length()-1] + 0 > 96 && currentDisplay[currentDisplayGiven.length() - 1] + 0 < 122) {
            currentDisplayGiven.pop_back();
        }
    }
    else {
        currentDisplayGiven.pop_back();
    }
}


#endif	//Zaključek if stavka

