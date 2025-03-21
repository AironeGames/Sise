#pragma once

#include <iostream>
#include <ctime>
#include <string>
#include <stdarg.h>

template <typename A>
void move(A& d, A& l) {
	A temp = d;
	d = l;
	l = temp;

}

template <typename A>
void print(A p) {
	std::cout << p;

}

template <typename A>
void printl(A p) {
	std::cout << p << std::endl;

}

template <typename A>
void entry(A &p) {
	std::cin >> p;

}
