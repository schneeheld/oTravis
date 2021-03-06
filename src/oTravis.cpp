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
	
	cout << "oTravis C++14 project" << endl;

	oTravis::Tria *t = new oTravis::Tria(3,2,1);

	t->show();

	delete t;

	return 0;
}
