#include <iostream>
#include <string.h>
#include <vector>
#include <hash_set>
using namespace std;
//how to take the sum of the vector element in c++
struct Node{
	struct Node *Genesis;
	struct Node *parent;
	float value;
	struct Node *child;
	int nodeNumber;
	char nodeId[],referenceNodeId[],*chilRefrenceNodeId,*genesisRefrenceNodeId;
};
//vector <float> value;
vector <float> children;
//taking sum of the child node vector
bool checksum(vector <float> children,struct Node *Genesis){
	int sum=0;
	int i=0;
	for(std::vector<float>::iterator it = children.begin(); it != children.end(); ++it){
	sum += *it;}
	if(sum>Genesis->value)
		return 0;
	return 1;
}
struct Node newNode(float value){
	Node *temp=new Node;
	temp->parent=NULL;
	temp->child=NULL;
}
/*	hash_set <int> id;
 
// Create an empty hash_set hst1 with the key comparison function of less than
	hash_set <int, hash_compare<int, equal<int> > > value;
	for(std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it)
    sum_of_elems += *it;

 
// Create an empty hash_set hst2 with the key comparison function of greater than
	//hash_set<int, hash_compare<int, greater<int> > > hst2;*/
char verifyOwner(char ownerId[],float value,char name[]){
	int flag=1;
	int l=ownerId.length();
	int hs1[l];
	pair<ownerId , value > ;
	int h=name.length();
	int hs3[][];
	for(int i=0;i<l&& i<h;i++){
		hs1[i++];
		for(int j=0;j<l;j++){
		hash_compare<<char>,equal<float>>hs3;
		}
	f(hs1[i]==hs3[i][j])
		flag=0;
	flag=1;
	}
	if(!flag)
		return ownerId;
	return 0;
	


}
int editValue(int value){
	char z;
	cout<<"what is the form of editing";
	cin>>z;
	switch(z){
		case 's': //editing in subtree
					if(Genesis->child!=NULL)
						cout<<child->value;
						break;
	}
}
int main() {
	char x;
	cout<<"do you want to start(Y/N)";
	cin>>x;
	if(x=='Y')
		Node* Genesis=newNode(3);
	
	int n;
	// flag=1;
	cout<<"Mention the no. of child NOdes of genesis: ";
	cin>>n;
	for(int i=0;i<n;i++){
		float v;
		cout<<"give the value of ith child node";
		cin>>v;
		Genesis->child=newNode(v);
		children.push_back(child->value);
	
	bool res=checksum(children,Genesis);
	if(!res)
		cout<<"invalid data";
	char ownerId[];char name[];
	cout<<"checking the ownership of the node";
	char result=verifyOwner(ownerId,v,name);
	}
	
	// your code goes here
	return 0;
}