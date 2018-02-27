//Kevin Nguyen

class LinkedList {
	private: //private access functions
		//node structure
		typedef struct node {
			int data; //actual value
			node* next; //point to next node
		}* nodePtr; //predefine pointer for future declarations

		nodePtr head;
		nodePtr current;
		nodePtr temp;
		nodePtr previous;

	public: //public access functions
		//constructor
		LinkedList();
		//add to list
		void addNode(int newData);
		//remove from list
		void removeNode(int badData);
		//print list
		void printLinkedList();
		//get size of list
		int size();
		//find data inside list
		int findData(int tgtData);
};