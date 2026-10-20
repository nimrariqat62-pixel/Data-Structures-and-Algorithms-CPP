
#include <iostream>
using namespace std;

	
	struct node {
		int data;
		node* next;
	};
	 
	 int main(){
	 	node* head = new node();
	 	node* second = new node();
	 	node* third = new node();
	 	
	 	head->data= 10;
	 	head->next = second;
	 	
	 	second->data = 20;
	 	second->next = third;
	 	
	 	third->data = 30;
	 	third->next = nullptr;
	 	
	 	
	 	node* temp = head;
	
	 	while(temp != nullptr) {
	 		
	 		cout << temp->data << "    ";
	 		temp = temp->next;
	 	}
	 	
	 	cout << endl;
	 	delete third;
	 	delete second;
	 	delete head;
	 	
	 	return 0;
	 }
	 		
	
		