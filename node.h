#ifndef NODE_H
#define NODE_H
#include<vector>
#include<fstream>

struct node{
	int val;
	node *right;
	node *left;
	node *parrent;
	node(int a);
};

class tree{
	node *root;
	std::ofstream file;
	std::vector<int> get_sred(std::vector<int> a);
public:
	node *get_root();
	tree(std::vector<int> arr);
	void add_elem(node *r,int val);
	void add_elem(int val);
	node *find(node *r, int val);
	node *find(int val);
	void replace(node *a, node *b);
	void Print(node *p);
        void Print();
	bool delete_elem(int val);
	void delete_node(node *r);
	~tree();
	std::vector<int> get_val_of_node(node *r);
};
#endif
