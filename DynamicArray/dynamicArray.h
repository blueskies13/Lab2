#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

#include <iostream>
#include <algorithm>

using namespace std;

class DynamicArray
{

public:
	DynamicArray(unsigned int _nbElements = 100);
	~DynamicArray();
	void setElement(unsigned int _index, int _valeur);
	int getElement(unsigned int _index) const;
	int getCapacite() const;
	void setCapacite(unsigned int _capacite);

private:
	int* tabElements;
	unsigned int capacite;
};


#endif //DYNAMICARRAY_H_