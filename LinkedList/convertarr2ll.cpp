
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
//Length of LL
int lengthofll(Node* head){

	Node* temp = head;
	int cnt = 0;
	while(temp){

		temp = temp->next;

		cnt++;
	}

	return cnt;
}

//Search in a LL

int searchinLL(Node* head,int val){

	Node* temp = head;
	while(temp){
		if(temp->data == val){
			return 1;
		}
		temp = temp->next;
	}

	return 0;

}

int main(){
	

	vector<int> arr = {12,23,45,56,67,78};

	//way to declare in 1 line

	// Node* head = new Node(arr[0]);

	Node* head = convertarr2ll(arr);

	cout << lengthofll(head);

	return 0;
}