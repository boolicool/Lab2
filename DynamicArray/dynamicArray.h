#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_


class DynamicArray
{

public:

	DynamicArray(const DynamicArray & _source);
	DynamicArray(int _capacite = 100);
	~DynamicArray();

	int getCapacite() const;
	int getElement(int _index) const;
	void setElement(int _index, int _valeur);
	void setCapacite(int _nouvelleCapacite);


private:
	int* tabElement;
	int capacite;
};


#endif //DYNAMICARRAY_H_