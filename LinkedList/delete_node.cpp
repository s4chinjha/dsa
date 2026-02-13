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
//
class Solution {
public:
    void deleteNode(Node* node) {
		//Since I have acces to the ll after the node given 
        //I don't have access to the head

        //Shift all the node to left by 1 position and delete the last one

        //[0][1][2][3][4][5]
        //Given to delete is [3] : Shift [4] to [3] and delete the last

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

};

int main(){
	
	return 0;
}