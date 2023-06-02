#ifndef ITER_H
#define ITER_H

#include <iostream>

template<typename T>
void iter(T *array, int lenth , void (*print)(T)){
	for (int i = 0; i < lenth; i++)
		print((array[i]));
}

template<typename T>
void print(T a){
	std ::cout << "- "<< a << std::endl; 
	return ;
}
#endif