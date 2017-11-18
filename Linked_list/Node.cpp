//Node for integer linked list
#include "Node.h"
#include <cstddef>
using namespace std;

Node::Node(int input){
	val = input;
	next = NULL;
}

Node::Node(int input, Node* n){
		next = n;
		val = input;
}
