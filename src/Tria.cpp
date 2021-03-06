/*
 * Tria.cpp
 *
 *  Created on: Apr 12, 2017
 *      Author: Schnee Held
 */

#include "oTravis.h"

namespace oTravis {

Tria::Tria() :
		Tria(0, 0, 0) {
}

Tria::Tria(size_t s1, size_t s2, size_t s3) :
		a(s1), b(s2), c(s3) {
}

void Tria::show() {
	std::array<size_t, 3> tuple = { this->a, this->b, this->c };
	// ranged for loop is supported
	for (const auto& t : tuple) {
		std::cout << t << ' ';
	}
	std:: cout << std::endl;	
}

Tria::~Tria() {
	// TODO Auto-generated destructor stub
}

} /* namespace OTravis */
