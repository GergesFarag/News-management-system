#include "Arraylist.h"
#include <assert.h>
template <class T>
Arraylist<T>::Arraylist() {
	length = 0;
	size = 5;
	arr = new T[size];
}
template <class T>
void Arraylist<T>::append(T val) {
	arr[length] = val;
	length++;
}
template <class T>
T Arraylist<T>::at(int pos) {
	return arr[pos];
}
template <class T>
void Arraylist<T>::expand() {
	T* arr2 = new T[size * 2];
	for (int i = 0; i < size; i++) {
		arr2[i] = arr[i];
	}
	size *= 2;
	delete[] arr;
	arr = arr2;
}
template <class T>
void Arraylist<T>::insertAt(int pos, T val) {
	assert(pos > 0 && pos < length);
	if (length == size)
		expand();
	for (int i = length; i > pos; i--) {
		arr[i] = arr[i - 1];
	}
	arr[pos] = val;
	length++;
}
template <class T>
void Arraylist<T>::deleteAt(int pos) {
	assert(pos > 0 && pos < length);
	for (int i = pos; i < length - 1; i++) {
		arr[i] = arr[i + 1];
	}
	length--;
}
template <class T>
int Arraylist<T>::Length() {
	return length;
}