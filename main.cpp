#include"node.h"
#include<vector>
#include<iostream>
 void get_sred(std::vector<int> a,std::vector<int> &val);
int main(){
	 int arr[]={25,20,6,10,21,8,1,30,1,2,3,4,5,6,7,8,9};
         std::vector<int> val(arr,arr+16);
	tree Tree(val);// Create from vector
//	Tree.delete_elem(3);//delete element 3
//	Tree.delete_node(Tree.find(25));//delete subtree with root=25
//	Tree.replace(Tree.find(3),Tree.find(25));//Replace elements with children
	Tree.Print();// make full tree
//	Tree.Print(Tree.find(20));//make subtree with root=20
//	std::cout<<Tree.find(5)->parrent->key;//Parrent 5 
	return 0;
}

