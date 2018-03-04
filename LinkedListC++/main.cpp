//Kevin Nguyen

/*
How to run (linux):
	1.) open command line and cd into directory folder of where this code is
	2.) type in "g++ *.cpp" to compile c++ files
	3.) type in "a.out" to run out file
*/

#include <cstdlib>
#include <iostream>
#include "LinkedList.h"

using namespace std;

//main driver
int main(int argc, char** argv) {
	//local declarations
	LinkedList myList;
	//test runs below
	myList.addNode(4);
	myList.addNode(2);
	myList.addNode(5);
	myList.addNode(1);
	myList.addNode(13);
	myList.removeNode(4);
	myList.removeNode(10); //doesn't exist
	myList.findData(2);
	myList.findData(4); //doesn't exist at this point
	myList.printLinkedList();
}