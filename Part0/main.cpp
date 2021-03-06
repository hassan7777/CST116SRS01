// Part0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cassert>
#include <iostream>


int main()
{
	std::size_t a = sizeof(bool);
	std::size_t b = sizeof(unsigned char);
	std::size_t c = sizeof(char);
	std::size_t d = sizeof(unsigned short);
	std::size_t e = sizeof(short);
	std::size_t f = sizeof(signed);
	std::size_t g = sizeof(unsigned);
	std::size_t h = sizeof(int);
	std::size_t i = sizeof(unsigned short);
	std::size_t j = sizeof(std::size_t);
	std::size_t k = sizeof(signed long);
	std::size_t l = sizeof(unsigned long);
	std::size_t m = sizeof(long);
	std::size_t n = sizeof(float);
	std::size_t o = sizeof(double);
	std::size_t p = sizeof(long double);

	assert(sizeof(char) == 1);
	assert(sizeof(float) == 4);
	assert(sizeof(double) == 8);
	assert(sizeof(bool) == 1);
	assert(sizeof(short) == 2);
	assert(sizeof(long) == 4);
	assert(sizeof(long double) == 8);


    return 0;
}

