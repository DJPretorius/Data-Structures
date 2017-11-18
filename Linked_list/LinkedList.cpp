//LinkedList class
#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList(){
	head = 0;
	tail = 0;
}

LinkedList::~LinkedList(){
	Node* n, *p;
	n = head;
	head = tail = 0;
	while(n != 0){
		p = n->next;
		delete n;
		n = p;
	}
}

bool LinkedList::insert(int val){
	if(head == 0){
		head = new Node(val);
		tail = head;
		return true;
	}
	Node* p = new Node(val);
	tail->next = p;
	tail = p;
	return true;
}

bool LinkedList::remove(int val){
	if(head == 0){				//list empty
		return false;
	}
	Node *p = head, *n = head;			//p == prev, n = node
	while(n != 0 && n->val != val){
		p = n;
		n = n->next;
	}
	if(n == 0){					//Not found
		return false;
	}else if(n == head){			//val is head
		head = n->next;
		delete n;
	}else{							//val is inbetween
		p->next = n->next;
		if(tail == n){
			tail = p;
		}
		delete n;
	}
	if(head == 0){				//List is empty after insert
		tail = 0;
	}
	return true;
}

bool LinkedList::contains(int val){
	Node* n = head;
	while(n != 0 && n->val != val){
		n = n->next;
	}
	if(n == 0){
		return false;
	}else{
		return true;
	}
}

void LinkedList::print(){
	Node* n = head;
	cout<<"[";
	while(n!= 0){
		if(n->next != 0){
			cout<< n->val<<",";
		}else{
			cout<< n->val<<"]";
		}
		n = n->next;
	}
	cout<< endl;
}
