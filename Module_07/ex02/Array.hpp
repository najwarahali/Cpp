#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template<typename T>
class Array
{
private:
	T *array_t;
	unsigned int n;
public:
	Array();
	~Array();
	Array(unsigned int n);
	Array(const Array  &obj);
	Array & operator=(const Array &obj);
	T &operator[](unsigned int index) const;
	class OutOfBounds: public std::exception{
		const char *what() const throw();
	};
	unsigned int size() const;
};

template<typename T>
Array<T>::Array(){
	std::cout << "default" << std::endl;
	array_t = nullptr;
	n = 0;
}

template<typename T>
Array<T>::~Array(){
	delete array_t;
}

template<typename T>
Array<T>::Array(unsigned int n){
	array_t =  new T[n]();
	this->n = n;
}

template<typename T>
Array<T>::Array(const Array  &obj){
	n = obj.n;
	array_t =  new T[n]();
	for(unsigned int i = 0; i < n ; i++){
		array_t[i] = obj.array_t[i];
	}
}

template<typename T>
Array<T> & Array<T>::operator=(const Array  &obj){
	delete array_t;
	n = obj.n;
	array_t =  new T[n]();
	for(unsigned int i = 0; i < n ; i++){
		array_t[i] = obj.array_t[i];
	}
	return (*this);
}

template<typename T>
T  &Array<T>::operator[](unsigned int index) const {
	if (index >= n)
		throw OutOfBounds();
	return (array_t[index]);
}
 
template<typename T>
const char * Array<T>::OutOfBounds::what() const throw(){
	return ("Index Is Out Of Bounds");
}

template<typename T>
unsigned int Array<T>::size() const{
	return (n);
}
#endif