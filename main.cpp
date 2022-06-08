//program to calculate cosine distance of two documents
//by Nguyen Van Ngoc
//time complexity : O(n)


#include <iostream>
#include <cmath>
#include "GlobalVariable.h"

Document g_document_1, g_document_2;

void inputData();
float calculateCosineDistance();

int main() {
	inputData();
	cout << "The cosine distance of two documents is " << calculateCosineDistance() << " radian" << endl;
	return 0;
}

void inputData() {
	string path_1, path_2;
	cout << "Fullpath of the first document: ";
	cin >> path_1;
	cout << endl << "Fullpath of the second document: ";
	cin >> path_2;
	cout << endl;
	g_document_1.getPath(path_1);
	g_document_2.getPath(path_2);
}

float calculateCosineDistance() {
	g_document_1.countFrequency(1);
	g_document_2.countFrequency(2);
	
	unsigned int S = 0, N = 0, M = 0;
	for (auto x : g_unorMap) {
		S += x.second->doc_1 * x.second->doc_2;
		N += pow(x.second->doc_1, 2);
		M += pow(x.second->doc_2, 2);
	}
	float cos = (S * 1.00) / (sqrt(N * M));
	return acos(cos);
}