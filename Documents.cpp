#include <fstream>
#include <iostream>

#include "GlobalVariable.h"

unordered_map <string, Frequency*> g_unorMap;

Document::Document() {
	fullPath = "";
}

Document::~Document() {
	fullPath = "";
}

void Document::getPath(string path) {
	fullPath = path;
}

//the variable ordinal here is ordinal number of two documents
//it must be 1 or 2
void Document::countFrequency(int ordinal) {
	ifstream doc;
	string word;
	doc.open(fullPath, ios::in);

	if (doc.fail()) {
		cout << "Cannot open file " << fullPath << endl;
		cout << "Please check the path again, or make sure that the path does not contain quotation marks" << endl;
		exit(404);
	}

	while (doc >> word) {
		switch (ordinal) {
		case 1: {
			if (g_unorMap.find(word) == g_unorMap.end()) {
				g_unorMap[word] = new Frequency{ 1,0 };
			}
			else {
				g_unorMap[word]->doc_1++;
			}
			break;
		}
		case 2: {
			if (g_unorMap.find(word) == g_unorMap.end()) {
				g_unorMap[word] = new Frequency{ 0,1 };
			}
			else {
				g_unorMap[word]->doc_2++;
			}
			break;
		}
		}
	}
	doc.close();
}