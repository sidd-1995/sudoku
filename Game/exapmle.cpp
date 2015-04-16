#include <iostream>
#include <fstream>

using namespace std;

class read_write()
{
private:
	struct node
	{
		int datas[9][9];
		int dataa[9][9];
		node* next;
	};
	node* head;
	node* temp;
	
	int sudu[9][9];
	int sol[9][9];
	
public:
	read_write();
	void read(int number_sudoku);
	void add(int add_sudu[9][9],int add_sol[9][9]);
}

read_write::read_write()
{
	head = NULL;
	temp = NULL;
}

void read_write::read(int number_sudoku)
{
	ifstream inFile;
	inFile.open("medium.txt");
	
	for(int a=0;a<number_sudoku;a++)
	{
		for(int i=0; i<9; i++)
		{
			for(int j=0; j<9; j++)
			{
				inFile>>sudu[i][j];
			}
		}
		for(int i=0; i<9; i++)
		{
			for(int j=0; j<9; j++)
			{
				inFile>>sol[i][j];
			}
		}
	}
}

void read_write::add(int add_sudu[9][9],int add_sol[9][9])
{
	ifstream inFile;
	inFile.open("medium.txt");
	node* n;
	
	// Reading the whole file and storing it in the linked list 
	while(!infile.eof)
	{
		n = new node;
		n->next=NULL;
		for(int i=0; i<9; i++)
			for(int j=0; j<9; j++)	inFile>>n->datas[i][j];
			
		
		for(int i=0; i<9; i++)
			for(int j=0; j<9; j++)	inFile>>n->dataa[i][j];
			
		if(head!=NULL)
		{
			temp=head;
			while(temp->next!=NULL) 	temp = temp->next;
			temp->next=n;
			temp = temp->next;
		}
		else head = n;
	}
	
	// Storing the extra element in the linked list
	n = new node;
	n->next = NULL;
	
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			n->datas[i][j] = add_sudu[i][j];
			n->dataa[i][j] = add_sol[i][j];
		}
	}
	temp->next = n;
	
	// Overwriting the whole whole file with the added element
	ofstream oFile;
	oFile.open("medium.txt");
	temp = head;
	
	while(temp!=NULL)
	{
		for(int i=0; i<9; i++)
			for(int j=0; j<9; j++)	oFile << temp->datas[i][j] << " " ;
		
		oFile << endl;
		
		for(int i=0; i<9; i++)
			for(int j=0; j<9; j++)	oFile << temp->dataa[i][j] << " ";
		oFile << endl;
		
		temp=temp->next;
	}
	
}

int main()
{
	
	
}