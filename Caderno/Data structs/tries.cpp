#include<bits/stdc++.h>
using namespace std;

// Store and check for strings

#define MAXN 10019 // Number of words * Maximum length

int trie[MAXN][26];
bool isEnd[MAXN]; // True if i-th node of trie is end of word

int cnt = 1; // Latest node - trie[0] == root

void add(string str, int idx, int node){

	// If its already in the end
	if (str.length() == idx){
		isEnd[node] = true;
		return;
	}

	int &lidx = trie[node][ str[idx]-'a' ]; // Change for 0 if it's number
	
	// If there is no following to that letter
	if (lidx == -1)
		lidx = cnt++;

	add(str, idx+1, lidx);
}

bool search(string str, int idx, int node){

	// Found
	if (idx == str.length())
		return true;

	int &lidx = trie[node][ str[idx]-'a' ]; // Change for 0 if it's number
	// Not found
	if (lidx == -1)
		return false;

	return search(str, idx+1, lidx);
}
	
int main(){

	// Initializing
	memset(trie, -1, sizeof(trie));
	memset(isEnd, 0, sizeof(isEnd));

	add("felipe", 0, 0);

	cout << search("k", 0, 0) << endl;

	// Consider using MAP[maxn] instead of trie[maxn][] if getting TLE
}