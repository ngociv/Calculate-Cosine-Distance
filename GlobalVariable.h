#ifndef GLOBAL_VARIABLE_H_
#define GLOBAL_VARIABLE_H_

#include <unordered_map>
#include "Documents.h"

//store frequency of words in two documents
struct Frequency {
	int doc_1;
	int doc_2;
};

extern Document g_document_1, g_document_2;

extern unordered_map <string, Frequency*> g_unorMap;


#endif // !GLOBAL_VARIABLE_H_
