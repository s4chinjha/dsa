#include<bits/stdc++.h>
using namespace std;

//Main Function

class Node{
public:
	//LL initalized
	//1. data 2. pointer

	int data;
	Node* next;

public:
	//constructer intialization

	Node(int data1){
		data = data1;
		next = nullptr;
	}

public:

	Node(int data1,Node* next1){

		data = data1;
		next = next1;

	}
};

//convert ARR to LL
Node* convertarr2ll(vector<int> &arr){

	Node* head = new Node(arr[0]);

	Node* mover = head;

	for(int i = 1;i < arr.size(); i++){

		Node* temp = new Node(arr[i]);

		mover->next = temp;
		//move mover
		mover = temp;
	}

	return head;
} 
//Print LL
void print(Node* head){
	while(head != NULL){

		cout << head->data << " " ;

		head = head->next;
	}

	cout  << endl;
}
//delete the head of the LL

Node* deletehead(Node* head){
	Node* temp = head;

	//If there is no element in the LL
	if(head == NULL) return head;

	//if there is 1 ele
	if(head->next == NULL){
		delete head;
		return head;
	}

	//more than 2;

	head = head->next;
	
	delete temp;

	return head;

}

//delete the tail
Node* deletetail(Node* head)
{
	Node* temp = head;
	//For 0 and 1 ele
	if(head == NULL || head->next == NULL){
		return NULL;
	}



	while(temp->next->next != NULL){

		temp = temp->next;
	}
	// delete temp->next;
	delete temp->next;
	temp->next = nullptr;
	

	return head;
}
//delete a kth node with numbering(index)

Node* deletekthnode(Node* head,int k){

	//0 ele
	if(head == NULL){
		return head;
	}

	//1 ele

	if(k == 1){
		Node* temp = head;
		//remove head element
		head = head->next;//NULL

		free(temp);

		return head;

	}

	//other kth element

	int cnt = 0;

	Node* prev = NULL;

	Node* temp = head;

	while(temp != NULL){

		cnt++;

		if(cnt == k){

			prev->next = prev->next->next;
			free(temp);
			break;
		}
		//at 1 loop the prev will be intialized with temp(head)
		prev = temp;

		temp = temp->next;

	}

	return head;

}

//delete with the value
Node* deletevalnode(Node* head,int ele){

	//0 ele
	if(head == NULL){
		return head;
	}

	//1 ele

	if(head->data == ele){
		Node* temp = head;
		//remove head element
		head = head->next;//NULL

		free(temp);

		return head;

	}

	//other kth element

	Node* prev = NULL;

	Node* temp = head;

	while(temp != NULL){
		if(temp->data == ele){

			prev->next = prev->next->next;
			free(temp);
			break;
		}
		//at 1 loop the prev will be intialized with temp(head)
		prev = temp;

		temp = temp->next;

	}

	return head;

}

//delete a node
void deleteNode(Node* node){
	    Node* temp1 = node;

        Node* prev = node;
        temp1 = temp1->next;

        while (temp1 != NULL) {
            prev->data = temp1->data;
            prev = temp1;
            temp1 = temp1->next;
        }
		// delete the last node
        Node* temp = node;
        while (temp->next->next != NULL) {

            temp = temp->next;
        }
        // delete temp->next;
        delete temp->next;
        temp->next = nullptr;

        
}

int main(){
	vector<int> arr = {12,23,45,56,67,78};

	Node* head = convertarr2ll(arr);
	print(head);
	// head = deletehead(head);

	head = deletekthnode(head,4);
	head = deletevalnode(head,23);


	print(head);

	return 0;
}