//============================================================================
// Name        : oTravis.cpp
// Author      : Schnee Held
// Version     :
// Copyright   : oTravis copyright
// Description : Project C++
//             : Overview of C++14 language features
//============================================================================

#include "oTravis.h"

using namespace std;

int main() {
	cout << "[DEV]" << endl;
	
	cout << "oTravis C++14 project" << endl;

	cout << "[DEV]" << endl;
	
	oTravis::Tria *t = new oTravis::Tria(2,3,4);

	t->show();

	delete t;

	return 0;
}
