//Algorithms to Check Linked List is Palindrome or Not 
//1. Using Stacks
//In this algorithm, we use a stack of list elements. There are three operations needed to be formed to implement our algorithm.
//1-Iterate through all the elements in the given list from head pointer to the tail and push every element to the stack as we traverse.
//2-Now we traverse the list again. And at each node, we pop an element from the stack and compare the element in the popped node with the current node.
//3-If all the nodes match, then we return the boolean value true or else return false.

#include<bits/stdc++.h>
using namespace std;

//Declaration of single node
class Node{
	public:
		int data;
		Node(int d){
			data = d;
		}
		Node *ptr;
};

//Function that retuns Boolean Value
bool isPaline(Node* head){
	
	//Temp Pointer
	Node* slow = head;
	
	//Create a stack
	stack <int> s;
	
	//First traverse to push all elements on the stack
	while(slow != NULL){
		s.push(slow->data);
		slow = slow->ptr;
	}
	
	//Second Travrse to compare the stack and node
	while(head != NULL){
		
		int i = s.top();
		s.pop();
		
		//Compare data
		if(head->data != i){
			return false;
		}
		
		head = head->ptr;
	}
	
	return true;
}

//Driver Function
int main(){
	//Create Nodes
	Node one = Node(31);
	Node two = Node(32);
	Node three = Node(33);
	Node four = Node(32);
	Node five = Node(31);
	
	//Connect All Nodes
	Node* temp = &one;
	one.ptr = &two;
	two.ptr = &three;
	three.ptr = &four;
	four.ptr = &five;
	five.ptr = NULL;
	
	//Call function to return bool if the list is palindropm or not
	int result = isPaline(&one);
	
	if(result == 1){
		cout<<"\nThe Value is True";
	}
	else{
		cout<<"\nThe Value is False";
	}

return 0;
}


