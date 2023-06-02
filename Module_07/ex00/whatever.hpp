#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template <typename SW>
void swap(SW &a, SW &b)
{
	SW tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename Mi>
Mi min(Mi a, Mi b)
{
	if (a < b)
		return a;
	return b;
}

template <typename Ma>
Ma max(Ma a, Ma b)
{
	if (a > b)
		return a;
	return b;
}


#endif