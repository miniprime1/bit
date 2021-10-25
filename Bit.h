#pragma once

class Bit {
	unsigned int bit;

public:
	Bit(int B) :bit{ B % 2 } {};
	Bit() :bit{ 0 } {};

	int GetBit() {
		return bit % 2;
	}

	int GetFlipBit() {
		if ((bit % 2) == 0) return 1;
		else return 0;
	}

	Bit& operator+=(Bit b) {
		if ((bit + b.bit) % 2 == 0) bit = 0;
		else bit = 1;
		return *this;
	}

	Bit& operator-=(Bit b) {
		if ((bit - b.bit) % 2 == 0) bit = 0;
		else bit = 1;
		return *this;
	}

	Bit& operator*=(Bit b) {
		if ((bit * b.bit) % 2 == 0) bit = 0;
		else bit = 1;
		return *this;
	}

	Bit& operator/=(Bit b) {
		if (b.bit == 0) bit = 0;
		else {
			if ((bit / b.bit) % 2 == 0) bit = 0;
			else bit = 1;
		}
		return *this;
	}
};

Bit operator+(Bit a, Bit b) {return a += b;}
Bit operator-(Bit a, Bit b) {return a -= b;}
Bit operator*(Bit a, Bit b) { return a *= b; }
Bit operator/(Bit a, Bit b) { return a /= b; }

Bit operator-(Bit a) {
	if (a.GetBit() == 0) return 0;
	else return 1;
}

bool operator==(Bit a, Bit b) { return a.GetBit() == b.GetBit(); }
bool operator!=(Bit a, Bit b) { return !(a == b); }
