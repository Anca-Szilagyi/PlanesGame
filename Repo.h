#pragma once
#include<map>
#include<iostream>
#include "Avion.h"
#include "Tabla de joc.h"
using namespace std;
class Repo {
protected:

	map<int,Tabla> elem = {};
	int key = 0;
public:
	Repo();
	virtual ~Repo();
	virtual void addElem(Tabla);
	virtual int delElem(int i);
	virtual int updateElem(int i, const Tabla nou);
	int getSize();
	map<int, Tabla> getAll();
	void clearMap();
	Tabla find(int i);
	Tabla addAvion(Tabla& t, Avion a);
	void findAvion(Tabla& t,string x, int y,int poz);

};
Repo::Repo() {
}
Repo::~Repo() {
}
void Repo::addElem(Tabla e) {

	elem.insert(pair<int, Tabla>(key++, e));


}
int Repo::delElem(int i) {
	auto itr = elem.find(i);
	if (itr != elem.end()) {
		elem.erase(itr);
		return 0;
	}
	else
		return -1;
}
int Repo::updateElem(int i, const Tabla nou) {

	if (i >= 0 && i < elem.size()) {
		delElem(i);
		elem.emplace(i, nou);
		return 0;
	}
	else
		return -1;
}
int Repo::getSize() {

	return elem.size();

}
map<int, Tabla> Repo::getAll() {

	return elem;
}
void Repo::clearMap() {

	elem.clear();
	key = 0;
}
Tabla Repo::find(int i)
{
	int poz = 0;
	for (auto itr = elem.begin(); itr != elem.end(); itr++) {
		if (poz == i) { return itr->second; }
		else { itr++; poz++; }
	}
}
Tabla Repo::addAvion(Tabla& t,Avion a) {

	return t.addAvion(a);
}
void Repo::findAvion(Tabla& t, string x, int y,int poz) {

	updateElem(poz,t.findAvion(x, y));
	
	
}

