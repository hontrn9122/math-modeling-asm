//---------------------------------------------------------------------------

#ifndef PnetH
#define PnetH
//---------------------------------------------------------------------------
#include<iostream>
#include <vector>
#include<string>
#include <sstream>
using namespace std;
//---------------------------------------------------------------------------
bool ArrEqual(int* a, int* b, int n);

class MarkingList {
public:
	class Node;
private:
	Node* head;
	Node* tail;
public:
	class Node {
	private:
		int* marking;
		Node* next;
		friend class MarkingList;
	public:
		Node() : marking(nullptr), next(nullptr) {}
		Node(int* _marking, int P);
	};
public:
	MarkingList() : head(nullptr), tail(nullptr) {}
	~MarkingList();
	void push(int* _marking, int P);
	bool found(int* _marking, int P);
};

string vecToString(vector<string> a);

class Pnet {
private:
	int P, T;
	int** adMatrix;
	string* Ptag;
	string* Ttag;
	int* marking;
	bool* enableT;
public:
	Pnet(int _P, int _T);
	~Pnet();
	void setAdMatrix(int** _adMatrix);
	void setIM(int* IM);
	void setPtag(string* tag);
	void setTtag(string* tag);
	void fire(int _T);
	void updateEnable();
	bool checkdeadlock();
	string markingToString();
	string printRM();
	void printRMhelper(MarkingList* a, vector<string> firingseq, int& count, string& output);
};

//---------------------------------------------------------------------------
#endif
