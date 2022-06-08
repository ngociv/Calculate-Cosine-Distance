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

	void countFrequency(int ordinal);
};


#endif // !DOCUMENTS_H_