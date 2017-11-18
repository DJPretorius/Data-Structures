#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(){
	LinkedList myList;
	for(int c =0; c<10; c++){
		myList.insert(c);
	}
	for(int c =0; c < 5; c++){
		cout<< myList.contains(c)<< " that list contains "<< c <<endl;
	}

	myList.print();
	cout<< "Removing 0, 9 and 5"<<endl;
	myList.remove(0);				//remove head
	myList.remove(9);				//remove tail
	myList.remove(5);				//remove in between
	cout<< myList.contains(5)<< " that list contains "<< 5 <<endl;
	cout<< "inserting 10"<<endl;
	myList.insert(10);
	myList.print();
}
