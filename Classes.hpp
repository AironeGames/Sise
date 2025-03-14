#pragma once

#include <iostream>

class futy
{
	friend std::ostream& operator<<(std::ostream& os, const futy& other);
	//friend std::istream& operator>>(std::istream& is, futy& other);

public:
	void operator =(int v) {
		if (v == 2) {
			val = 2;

		}
		else if (v == 3) {
			val = 3;

		}

	}

	bool operator ==(int v) {
		if (v == val) {
			return true;

		}
		else if (v != val) {
			return false;

		}

	}

	bool operator !=(int v) {
		if (v == val) {
			return false;

		}
		else if (v != val) {
			return true;

		}

	}

private:
	int val;

};

std::ostream& operator<<(std::ostream& os, const futy& other) {
	return os << other.val;

}

template <typename A>
int fueq(A var) {
	if (var == 0) {
		return empty;

	}
	else if (var != 0) {
		return full;

	}

}
