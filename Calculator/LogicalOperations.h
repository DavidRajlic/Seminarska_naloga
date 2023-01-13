#pragma once
#ifndef LOGICALOPERATIONS_H
#define LOGICALOPERATIONS_H

#include <string>
#include <iostream>
#include "numConversion.h"

void logicAnalysis(std::string& input);
bool errorCheck(std::string& input);
int findLongest(std::string& input);
void equalizeLengths(std::string& input, int len);
void logicAnalysisControler(std::string& input);
void logicAnalysisCompile(std::string& input);
void bracketControler(std::string& input);

char logicNot(char x) { //prioriteta 0
    if (x == '1') {
        return '0';
    }
    else if (x == '0') {
        return '1';
    }
}

char logicAnd(char x, char y) { //prioriteta 1
    if (x == '1') {
        if (y == '1') {
            return '1';
        }
        else {
            return '0';
        }
    }
    else {
        return '0';
    }
}

char logicNand(char x, char y) { //prioriteta 1
    if (x == '1') {
        if (y == '1') {
            return '0';
        }
        else {
            return '1';
        }
    }
    else {
        return '1';
    }
}

char logicNor(char x, char y) { //prioriteta 1
    if (x == '0' && y == '0') {
        if (y == '0') {
            return '1';
        }
        else {
            return '0';
        }
    }
    else {
        return '0';
    }
}

char logicOr(char x, char y) { // prioriteta 2
    if (x == '1') {
        return '1';
    }
    else if (y == '1') {
        return '1';
    }
    else {
        return '0';
    }
}

char logicXor(char x, char y) { //prioriteta 2
    if (x == y) {
        return '0';
    }
    else {
        return '1';
    }
}

char logicImply(char x, char y) { //prioriteta 3
    if (x == '1') {
        if (y == '0') {
            return '0';
        }
        else {
            return '1';
        }
    }
    else {
        return '1';
    }
}

char logicXnor(char x, char y) { //prioriteta 4
    if (x == y) {
        return '1';
    }
    else {
        return '0';
    }
}

void logicAnalysisControler(std::string& input) {

    std::string numSy = input.substr(0, 3);
    std::string currentNum;
    std::string toConvert;
    int sysId = dictionary(numSy);
    if (sysId == 0) {
        bracketControler(input);
    }
    else {
        int len;
        int id;
        for (int i = 0; i < input.length(); i++) {
            len = 0;
            currentNum = "";
            if (((input[i] + 0) < 58 && (input[i] + 0) > 47)) {
                id = i;
                while ((input[i] + 0) < 58 && (input[i] + 0) > 47) {
                    currentNum += input[i];
                    len++;
                    i++;
                }
                input.erase(id, len);
                toConvert = input.substr(0, 3) + " " + currentNum + " BIN";
                numConvertControler(toConvert);
                input.insert(id, toConvert);
                i += toConvert.length() - len;
            }

        }
        input.erase(0, 4);
        bracketControler(input);
    }
}

void bracketControler(std::string& input) {
    int longest = findLongest(input);
    equalizeLengths(input, longest);
    bool bracketsPresent = false;
    int bracketRatio = 0;
    int totalBrackets = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '(') {
            bracketRatio++;
            totalBrackets++;
            bracketsPresent = true;
        }
        else if (input[i] == ')') {
            bracketRatio--;
            bracketsPresent = true;
        }
    }
    if (bracketsPresent == false) {
        logicAnalysisCompile(input);
        return;
    }
    if (bracketRatio != 0) {
        input = "Error. Mismatched brackets";
        return;
    }
    int lastIndex;
    bool first = true;
    std::string toSolve;
    while (totalBrackets != 0) {
        for (int i = 1; i < input.length();) {
            if (first == true) {
                i--;
                first = false;
            }
            if (input[i] == '(') {
                lastIndex = i;
            }
            else if (input[i] == ')') {
                toSolve = input.substr(lastIndex + 2, i - lastIndex - 3);
                input.erase(lastIndex, i - lastIndex + 1);
                logicAnalysisCompile(toSolve);
                input.insert(lastIndex, toSolve);
                i = 0;
                first = true;
            }
            i++;
        }
        totalBrackets--;
    }
    logicAnalysisCompile(input);
}



void logicAnalysisCompile(std::string& input) {

    std::string subLine;
    std::string result;
    int longest = findLongest(input);
    for (int id = 0; id < longest; id++) {
        for (int i = 0; i < input.length(); i++) {
            if ((input[i] + 0) < 58 && (input[i] + 0) > 47) {
                subLine += input[i + id];
                i = i + longest - 1;
            }
            else {
                subLine += input[i];
            }
        }
        logicAnalysis(subLine);
        result += subLine;
        subLine = "";
    }
    input = result;

}

int findLongest(std::string& input) {
    int longest = 0;
    int current;
    for (int i = 0; i < input.length(); i++) {
        if ((input[i] + 0) < 58 && (input[i] + 0) > 47) {
            current = 0;
            while ((input[i] + 0) < 58 && (input[i] + 0) > 47 && i < input.length()) {
                current++;
                i++;
            }
            if (current > longest) {
                longest = current;
            }
        }
    }
    return longest;
}

void equalizeLengths(std::string& input, int len) {
    int current;
    int startIndex;
    for (int i = 0; i < input.length(); i++) {
        if ((input[i] + 0) < 58 && (input[i] + 0) > 47) {
            startIndex = i;
            current = 0;
            while ((input[i] + 0) < 58 && (input[i] + 0) > 47 && i < input.length()) {
                current++;
                i++;
            }
            while (current < len) {
                input.insert(startIndex, "0");
                current++;
                i++;
            }
        }
    }
}

void logicAnalysis(std::string& input) {

    if (errorCheck(input) == true) {
        return;
    }

    for (int i = 0; i < input.length(); i++) { //preverjanje za prioriteto 0
        if (input.substr(i, 3) == "NOT") {
            std::string newVal;
            newVal = logicNot(input[i + 4]);
            input.replace(i, 5, newVal);
            i--;
        }
    }

    for (int i = 0; i < input.length(); i++) { //preverjanje za prioriteto 1
        if (input.substr(i, 3) == "AND" && input[i - 1] != 'N') { //NE DELA
            std::string newVal;
            newVal = logicAnd(input[i - 2], input[i + 4]);
            input.replace(i - 2, 7, newVal);
            i--;
        }
        if (input.substr(i, 4) == "NAND") { //ne dela
            std::string newval;
            newval = logicNand(input[i - 2], input[i + 5]);
            input.replace(i - 2, 8, newval);
            i--;
        }
        if (input.substr(i, 3) == "NOR" && input[i - 1] != 'X') {
            std::string newVal;
            newVal = logicNor(input[i - 2], input[i + 4]);
            input.replace(i - 2, 7, newVal);
            i--;
        }
    }

    for (int i = 0; i < input.length(); i++) { //preverjanje za prioriteto 2
        if (input.substr(i, 2) == "OR" && input[i - 1] != 'N' && input[i - 1] != 'X') { //ne dela
            std::string newval;
            newval = logicOr(input[i - 2], input[i + 3]);
            input.replace(i - 2, 6, newval);
            i--;
        }
        if (input.substr(i, 3) == "XOR") {
            std::string newVal;
            newVal = logicXor(input[i - 2], input[i + 4]);
            input.replace(i - 2, 7, newVal);
            i--;
        }
    }

    for (int i = 0; i < input.length(); i++) {
        if (input.substr(i, 5) == "IMPLY") {
            std::string newVal;
            newVal = logicImply(input[i - 2], input[i + 6]);
            input.replace(i - 2, 9, newVal);
            i--;
        }
    }

    for (int i = 0; i < input.length(); i++) {
        if (input.substr(i, 4) == "XNOR") {
            std::string newVal;
            newVal = logicXnor(input[i - 2], input[i + 5]);
            input.replace(i - 2, 8, newVal);
            i--;
        }
    }
}

bool errorCheck(std::string& input) {
    for (int i = 0; i < input.length(); i++) {
        if (input[i] + 0 > 90 && input[i] + 0 < 65) {
            if (input[i] + 0 != 48 && input[i] + 0 != 49) {
                std::string error;
                error = input[i];
                input = "Error. Unknown character" + error + "present";
                return true;
            }
        }
    }
    return false;
}

#endif
