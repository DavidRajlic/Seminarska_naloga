#pragma once
#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <iostream>
#include <fstream>
#include "Data.h"
#include <vector>

std::string path = "";
std::vector <std::string> results;

extern void fileHandler(std::string path) {
	std::fstream currentFile;
	std::string answer;
	std::string result;
	currentFile.open(path);
	if (currentFile.is_open()) {
		std::string line;
		int index = 0;
		while (getline(currentFile, line)) {
			answer = line;
			for (int i = 0; i < line.length(); i++) {
				if (line[i] == '=') {
					index = i;
				}
			}
			line = line.substr(0, index);
			while (line[line.length()-1] == ' ') {
				line.pop_back();

			}
			answer = line;
			execute(answer);
			result = line + " = " + answer;
			results.push_back(result);

		}
	currentFile.close();
	}
	currentFile.open(path);
	for (int i = 0; i < results.size(); i++) {
		currentFile << results.at(i) << "\n";
		currentDisplay = results.at(i);
	}
	results.clear();
	currentFile.close();
}

#endif // !FRONTENDCONTROLER_H
