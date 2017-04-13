/*
 * Tria.h
 *
 *  Created on: Apr 12, 2017
 *      Author: Schnee Held
 */

#ifndef TRIA_H_
#define TRIA_H_

namespace oTravis {

class Tria {
public:
	size_t a,b,c;
	Tria();
	Tria(size_t, size_t, size_t);
	virtual ~Tria();
	void show();
};

} /* namespace oTravis */

#endif /* TRIA_H_ */
