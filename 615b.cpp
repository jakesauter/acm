#include <iostream>
#include <string>

using namespace std;

int longestPath = 0;

struct Node
{
	Node *nodes;
	int connections = 0;
     public: 
	void addNode(Node n);
};

Node::addNode(Node n)
{
	this->connections++;
	this->nodes = new Node[connections];
	for(int i=0; i < connections;i++)
	{
	}
} 

int main()
{
	
	int point = 0, segments = 0;
	cin >> points >> segments;
	for(int i=0;i<segments;i++)
	{
		
	}
	cout << longestPath;
}
