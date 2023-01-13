#ifndef DATA_H // Preveri ce se Header file ni definiran, tako preprecimo večkratno deklaracijo istih spremenljivk
#define DATA_H	//Če ni ga definira
#include <string>;
#include <regex>;
#include "NumConversion.h";
#include "LogicalOperations.h"
#include "Calculate.h"

extern void execute(std::string& currentDisplay);
void powerconvert(std::string& givenString);
int powerCheck(std::string& givenString, int pos);
void compile(std::string& givenString);
void checkType(std::string& givenString);

extern std::string currentDisplay = " ";

extern int type = 0;

// Type 0: Normal
// Type 1: Conversion
// Type 2: Logic

extern void execute(std::string &currentDisplayGiven) { 
    checkType(currentDisplayGiven);
    
    switch (type) {
    case 0:
        compile(currentDisplayGiven);
        powerconvert(currentDisplayGiven);
        break;
    case 1:
        numConvertControler(currentDisplayGiven);
        break;
    case 2:
        logicAnalysisControler(currentDisplayGiven);
        break;
    }

}

void checkType(std::string& givenString) {
    for (int i = 0; i < givenString.length(); i++) {
        if (givenString.substr(i, 3) == "NOT" ||
            givenString.substr(i, 3) == "AND" ||
            givenString.substr(i, 4) == "NAND" ||
            givenString.substr(i, 3) == "NOR" ||
            givenString.substr(i, 2) == "OR" ||
            givenString.substr(i, 3) == "XOR" ||
            givenString.substr(i, 5) == "IMPLY" ||
            givenString.substr(i, 4) == "XNOR") {
            type = 2;
            return;
        }
    }
    if (givenString[0] == 'C' ||
        givenString.substr(0, 3) == "BIN" ||
        givenString.substr(0, 3) == "OCT" || 
        givenString.substr(0, 3) == "DEC" || 
        givenString.substr(0, 3) == "HEX") {
        type = 1;
        return;
    }
    
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
            givenString.insert(k, " pow (");
        }
    }
    for (int i = 0; i < givenString.length(); i++) {
        if (givenString[i] == ' ' && givenString[i+1] == ' ') {
            givenString.erase(i, 1);
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

extern std::string convertFrom = "";
extern std::string convertTo = "";
extern std::string convertInput = "";

extern void convert() {
    int isStandard = true;
    for (int i = 2; i < convertFrom.length(); i++) {
        int temp = convertFrom[i];
        if (temp < 65 || temp > 90) {
            isStandard = false;
        }
    }
    if (convertFrom.length() > 3 && isStandard == false) {
        convertFrom.erase(1, 1);
    }
    else if (isStandard == true) {
        convertFrom.erase(0, 2);
    }
    isStandard = true;
    for (int i = 2; i < convertTo.length(); i++) {
        int temp = convertTo[i];
        if (temp < 65 || temp > 90) {
            isStandard = false;
        }
    }
    if (convertTo.length() > 3 && isStandard == false) {
        convertTo.erase(1, 1);
    }
    else if (isStandard == true) {
        convertTo.erase(0, 2);
    }
    
    currentDisplay = convertFrom + " " + convertInput + " " + convertTo;
};

extern void deleteOneLogic(std::string &currentDisplayGiven) {
    if (currentDisplayGiven.length() < 2) {
        return;
    }
    if (currentDisplayGiven[currentDisplayGiven.length() - 1] == ' ') {
        currentDisplayGiven.pop_back();
        while (currentDisplayGiven[currentDisplayGiven.length() - 1] + 0 > 57) {
            currentDisplayGiven.pop_back();
        }
        if (currentDisplayGiven[currentDisplayGiven.length() - 1] == ' ' && currentDisplayGiven.length() != 1) {
            if ((currentDisplayGiven[currentDisplayGiven.length() - 2] + 0) < 65 || (currentDisplayGiven[currentDisplayGiven.length() - 2] + 0) > 90) {
                currentDisplayGiven.pop_back();
            }
            
        }
    }
    else {
        currentDisplayGiven.pop_back();
    }
}
#endif	//Zaključek if stavka

