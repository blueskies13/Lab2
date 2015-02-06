#include "dynamicArray.h"

DynamicArray::DynamicArray(unsigned int _nbElements)
{
	capacite = _nbElements;
	tabElements = new int[capacite];

	for (unsigned int compteur = 0; compteur < 100; compteur++){
		tabElements[compteur] = 0;
	}
}

DynamicArray::~DynamicArray()
{
	delete[] tabElements;
}

void DynamicArray::setElement(unsigned int _index, int _element)
{
	if (_index >= capacite){
		setCapacite(_index + 1);
	}
	tabElements[_index] = _element;
}

int DynamicArray::getElement(unsigned int _index) const
{
	if (_index <= capacite){
		return tabElements[_index];
	}
}

int DynamicArray::getCapacite() const
{
	return capacite;
}

void DynamicArray::setCapacite(unsigned int _capacite)
{
	if (_capacite <= 0)
	{
		int * nouveauTab = new int[_capacite];

		for (unsigned int i = 0; i < min(capacite, _capacite); i++)
		{
			nouveauTab[i] = tabElements[i];
		}
	}
	//for (unsigned int i = 0; capacite < _capacite; i++)
	//{

	//}
}