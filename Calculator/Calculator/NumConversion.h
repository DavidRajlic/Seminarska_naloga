#pragma once
#ifndef NUMCONVERSION_H
#define NUMCONVERSION_H

#include <string>
#include <iostream>

void numConvertControler(std::string& input);
void numConvert(std::string& input, int from, int to);
void invert(std::string& input);
int dictionary(std::string& input);
bool numConvertErrorCheck(std::string& input);
bool numConvertErrorSecondaryCheck(std::string& input, int numSy);

void numConvertControler(std::string& input) {
    if (numConvertErrorCheck(input) == true) {
        return;
    }
    std::string fromReq = input.substr(0, 3);
    int from = dictionary(fromReq);
    std::string toReq = input.substr(input.length() - 3, 3);
    int to = dictionary(toReq);
    std::string inReq;
    int i = 4;
    while (input[i] != ' ') {
        inReq += input[i];
        i++;
    }

    if (from == 0) {
        input = "From error. Unknown label";
        return;
    }
    else if (from == 1) {
        input = "From error. Supported systems from base 2 to 35";
        return;
    }
    if (to == 0) {
        input = "To error. Unknown label";
        return;
    }
    else if (to == 1) {
        input = "To error. Supported systems from base 2 to 35";
        return;
    }

    if (numConvertErrorSecondaryCheck(inReq, from) == true) {
        input = "Number error. Digit out of bounds";
        return;
    }

    if (from == 10 || to == 10) {
        numConvert(inReq, from, to);
    }
    else {
        numConvert(inReq, from, 10);
        numConvert(inReq, 10, to);
    }
    input = inReq;
}

void numConvert(std::string& input, int from, int to) {
    int mod;
    std::string converted;
    if (from == 10) {
        int val = std::stoi(input);
        while (val != 0) {
            if ((val % to) < 10) {
                mod = 48;
            }
            else {
                mod = 55;
            }
            char temp = (val % to) + mod;
            converted += temp;
            val = val / to;
        }
        invert(converted);
    }
    else if (to == 10) {
        int sum = 0;
        invert(input);
        for (int i = 0; i < input.length(); i++) {
            int temp = input[i];
            if (temp < 58) {
                mod = 48;
            }
            else {
                mod = 55;
            }
            int intVal = input[i];
            sum += (intVal - mod) * pow(from, i); //TODO replace with custom power function
        }
        while (sum != 0) {
            char charVal = (sum % 10) + 48;
            converted += charVal;
            sum = sum / 10;
        }
        invert(converted);
    }
    input = converted;
}

void invert(std::string& input) {
    std::string inverted;
    for (int i = input.length() - 1; i >= 0; i--) {
        inverted += input[i];
    }
    input = inverted;
}

int dictionary(std::string& input) {
    std::string standard[4][2] = {
        {"BIN","2"},
        {"OCT","8"},
        {"DEC","10"},
        {"HEX","16"}
    };
    for (int i = 0; i < sizeof(standard) / sizeof(standard[0]); i++) {
        if (standard[i][0] == input) {
            int val = std::stoi(standard[i][1]);
            return val;
        }
    }
    if (input[0] == 'C') {
        int val = 0;
        if ((input[1] - 48) >= 0 && (input[1] - 48) <= 9) {
            val += (input[1] - 48) * 10;
        }
        else {
            return 0;
        }
        if ((input[2] - 48) >= 0 && (input[2] - 48) <= 9) {
            val += (input[2] - 48);
        }
        else {
            return 0;
        }
        if (val < 2 || val > 35) {
            return 1;
        }
        return val;
    }

    return 0;

}

bool numConvertErrorCheck(std::string& input) {
    int spaceCount = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            spaceCount++;
        }
    }
    if (spaceCount > 2) {
        input = "Syntax error. To many numbers";
        return true;
    }
    else if (spaceCount < 2) {
        input = "Syntax error. Missing spaces";
        return true;
    }
    int temp = 0;
    for (int i = 0; i < 3; i++) {
        if (input[i] == ' ') {
            input = "From error. Unknown label";
            return true;
        }
        temp++;
    }
    if (input[temp] != ' ') {
        input = "From error. Unknown label";
        return true;
    }
    for (int i = input.length() - 1; i > input.length() - 4; i--) {
        if (input[i] == ' ') {
            input = "To error. Unknown label";
            return true;
        }
        temp = i - 1;
    }
    if (input[temp] != ' ') {
        input = "To error. Unknown label";
        return true;
    }
    return false;
}
bool numConvertErrorSecondaryCheck(std::string& input, int numSy) {
    for (int i = 0; i < input.length(); i++) {
        if (input[i] < 48) {
            return true;
        }
        else if (input[i] >= (48 + numSy)) {
            if (numSy < 10) {
                return true;
            }
            if (input[i] >= (55 + numSy)) {
                return true;
            }
        }
    }
    return false;
}

#endif