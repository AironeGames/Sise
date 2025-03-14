#pragma once

template <typename A>
void move(A& d, A& l) {
	A temp = d;
	d = l;
	l = temp;

}

//void move(string &d, string &l) {
//	string temp = d;
//	d = l;
//	l = temp;
//
//}
//
//void move(long &d, long &l) {
//	long temp = d;
//	d = l;
//	l = temp;
//
//}
//
//void move(short &d, short &l) {
//	short temp = d;
//	d = l;
//	l = temp;
//
//}
//
//void move(double &d, double &l) {
//	double temp = d;
//	d = l;
//	l = temp;
//
//}
//
//void move(char &d, char &l) {
//	char temp = d;
//	d = l;
//	l = temp;
//
//}
//
//void move(float &d, float &l) {
//	float temp = d;
//	d = l;
//	l = temp;
//
//}

template <typename A>
void print(A p) {
	std::cout << p;

}
template <typename A>
void print(A b, A a, ...) {
	std::cout << b;
	va_list ptr;
	va_start(ptr, a);
	while (a != '\0') {
		if (a == SP || a == ' ') {
			std::cout << " ";
			a = va_arg(ptr, A);
			continue;
		}
		std::cout << a;
		a = va_arg(ptr, A);

	}
	va_end(ptr);

}

template <typename A>
void printl(A p) {
	std::cout << p << std::endl;

}
template <typename A>
void printl(A b, A a, ...) {
	std::cout << b; nextl;
	va_list ptr;
	va_start(ptr, a);
	while (a != '\0') {
		if (a == SP || a == ' ') {
			std::cout << " "; nextl;
			a = va_arg(ptr, A);
			continue;
		}
		std::cout << a; nextl;
		a = va_arg(ptr, A);

	}
	va_end(ptr);

}
