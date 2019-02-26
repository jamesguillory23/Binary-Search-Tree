#include <iostream>
#ifndef BST_H
#define BST_H
//Creatign class for tree
template <typename T>
class BSearchTree {
//functions for binary search tree
//make public access to  BSearchTree
public:
	struct node {
		T data;
		node* parent_node;
		node* left_node;
		node* right_node;
	};
	BSearchTree()
	{
		root_node = nullptr;
	}
	~BSearchTree(){}
	//creating insert function
	void Insert(T data_to_insert)
	{
		node* node_insert = new node;
		node_insert->parent_node = nullptr;
		node_insert->left_node = nullptr;
		node_insert->right_node = nullptr;
		node_insert->data = data_to_insert;
		if (root_node == nullptr)
		{
			root_node = node_insert;
		}
		else
		{
			node* current = root_node;
			bool insert_found = false;
			while (insert_found == false)
			//Checking the data that is inserted
			{
				if (data_to_insert < current->data)
				{
					if (current->left_node == nullptr) //if the curent left node is the node to be nulled 
					{
						insert_found = true;	//It is true to convert it to a null 
					}
					else
					{
						current = current->left_node;
					}
				}
				else if (data_to_insert > current->data )
				{
					if (current->right_node == nullptr)
					{
						insert_found = true;
					}
					else
					{
						current = current->right_node;
					}
				}
				else
				{
					break;
				}
			}

			if (data_to_insert < current->data)
			{
				current->left_node = node_insert;
			}
			else if (data_to_insert > current->data)
			{
				current->right_node = node_insert;
			}
			else
			{
				return;
			}
			node_insert->parent_node = current;
		}
	}

	node* Find(T data_to_find) 
	{
		node* current = root_node;
		while (current != nullptr && current->data != data_to_find)
		{
			if (data_to_find < current->data)
			{
				current = current->left_node;
			}
			else
			{
				current = current->right_node;
			}
		}
		return current;
	}

	T Maximum()
	{
		if (root_node == nullptr) //If the node is the null pointer targeted
		{
			return NULL; //Remove node
		}
		else
		{
			node* current = root_node; //If the current node is the root node
			while (current->right_node != nullptr) //then it will translate to the largest value, if it isn't the null pointer.
			{
				current = current->right_node;
			}
			return current->data;
		}
	}

private:
	node* root_node;
};
#endif 
// create find function similar to last code

//
