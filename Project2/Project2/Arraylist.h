#pragma once
template <class T>
class Arraylist
{
	T* arr;
	int length, size;
public:
	Arraylist(void);
	~Arraylist(void);
	T at(int);
	int Length();
	void append(T);
	void expand();
	void insertAt(int, T);
	void deleteAt(int);
};