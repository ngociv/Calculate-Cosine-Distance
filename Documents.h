#ifndef DOCUMENTS_H_
#define DOCUMENTS_H_

#include <string>

using namespace std;

class Document {

private:
	string fullPath;

public:
	Document();

	~Document();

	void getPath(string path);

	//the variable ordinal here is ordinal number of two documents
	//it must be 1 or 2
	void countFrequency(int ordinal);
};


#endif // !DOCUMENTS_H_