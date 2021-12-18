#include<bits/stdc++.h>
using namespace std;
class Trie{
	Trie *child[26];
	bool end;
	public:
	Trie()
	{
		for(int i=0;i<26;i++)
		this->child[i]=NULL;
		
		this->end=false;
	}
	
		bool search(Trie *root,string word);
		void insert(Trie *root,string word);
		bool isEmpty(Trie *root);
		Trie* remove(Trie*root, string word,int depth);
};
void Trie::insert(Trie *root,string word)
{
	Trie* temp=root;
	for(int i=0;word[i];i++)
	{
		int index=word[i]-'a';
		if(!temp->child[index])
		temp->child[index]=new Trie();
		
		temp=temp->child[index];
	}
	temp->end=true;
	return;
}

bool Trie::search(Trie *root,string word)
{
	Trie* temp=root;
	for(int i=0;word[i];i++)
	{
		int index=word[i]-'a';
		if(!temp->child[index])
		return false;
		
		temp=temp->child[index];
	}
	return (temp->end);
}
bool Trie::isEmpty(Trie *root)
{
	for(int i=0;i<26;i++)
	{
		if(root->child[i])
		return false;
	}
	return true;
}
Trie* Trie::remove(Trie *root,string word,int depth)
{
	if(root==NULL)
	return NULL;
	
	if(depth==word.length())
	{
		if(root->end)
		root->end=false;
		
		if(isEmpty(root))
		{
			delete (root);
			root=NULL;
		}
		
		return root;
	}
	
	int index=word[depth]-'a';
	root->child[index]=remove(root->child[index],word,depth+1);
	
	if(isEmpty(root) && root->end==false)
	{
		delete (root);
		root=NULL;
		return root;
	}
	return root;
}
int main()
{
	Trie *root=new Trie();
	root->insert(root,"abcd");
	root->insert(root,"xyz");
	if(root->search(root,"abcd"))
	cout<<"found"<<"\n";
	else
	cout<<"not found"<<"\n";
	if(root->search(root,"abc"))
	cout<<"found"<<"\n";
	else
	cout<<"not found"<<"\n";
	if(root->search(root,"xyz"))
	cout<<"found"<<"\n";
	else
	cout<<"not found"<<"\n";
	if(root->search(root,"xy"))
	cout<<"found"<<"\n";
	else
	cout<<"not found"<<"\n";
	cout<<root->isEmpty(root)<<"\n";
	root->remove(root,"abcd",0);
	if(root->search(root,"abcd"))
	cout<<"found"<<"\n";
	else
	cout<<"not found"<<"\n";
	cout<<root->isEmpty(root);
	root->remove(root,"xyz",0);
	if(root->search(root,"xyz"))
	cout<<"found"<<"\n";
	else
	cout<<"not found"<<"\n";
}
