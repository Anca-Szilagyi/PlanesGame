#include "Jucator.h"
Jucator::Jucator() {
	
	this->numar = 0;
}
Jucator::Jucator(int numar) {

	this->numar = numar;
}
Jucator::Jucator(const Jucator& j) {

	this->numar = j.numar;
}
Jucator::~Jucator() {
	
	this->numar = 0;
}
int Jucator::getNumar() {

	return this->numar;
}
