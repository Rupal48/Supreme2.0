#include <iostream>
using namespace std;

class TrieNode {

    public:
        char value;
        TrieNode* children[26];
        bool isTerminal;

    TrieNode(char val) {
        this->value = val;
        for (int i=0;i<26;i++) children[i] = NULL;
        this->isTerminal = false;
    }

};

// insertion
void insertWord(TrieNode *root, string word) {

    // base case
    if (word.length() == 0) {
        root->isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch-'a';
    TrieNode *child;
    if (root->children[index] != NULL) {
        // present
        child = root->children[index];
    }
    else {
        // absent
        child = new TrieNode(ch);
        root->children[index] = child;
    }

    // recursion
    insertWord(child,word.substr(1));

}


// Search
bool searchWord(TrieNode* root, string word) {

    // base case
    if (word.length() == 0) return root->isTerminal;

    char ch = word[0];
    int index = ch-'a';
    TrieNode *child;
    if (root->children[index] != NULL) child = root->children[index]; // found
    else return false; // not found

    // Recursive Call
    return searchWord(child, word.substr(1)); 

}

// Delete
void deleteWord(TrieNode *root, string word) {

    // Base case
    if (word.length() == 0) {
        root->isTerminal = false;
        return;
    }

    char ch = word[0];
    int index = ch-'a';
    TrieNode *child;
    if (root->children[index] != NULL) child = root->children[index]; // found
    else return; // not found

    // Recursive Call
    deleteWord(child, word.substr(1));

}

void printAns(TrieNode* root, string curr) {

    if (root->isTerminal) cout << curr << endl;
    for (int i=0;i<26;i++) {
        if (root->children[i] != NULL) {
            char nextChar = 'a' + i;
            printAns(root->children[i],curr+nextChar);
        }
    }

}

void prefixMatchPrint(TrieNode *root, string prefix, string curr) {

    if (prefix.length() == 0) printAns(root,curr);
    else {
        char ch = prefix[0];
        int index = ch-'a';
        TrieNode *child;
        if (root->children[index] != NULL) child = root->children[index]; // found
        else return; // not found

        prefixMatchPrint(child, prefix.substr(1), curr+ch);
    }

}

void prefixMatchForEachSubstring(TrieNode* root, string match, string curr) {

    // Instead of only calling printAns for/after last char of prefix we do it for every char
    if (root->value != '-') printAns(root,curr);

    char ch = match[0];
    int index = ch-'a';
    TrieNode *child;
    if (root->children[index] != NULL) child = root->children[index]; // found
    else return; // not found

    prefixMatchForEachSubstring(child, match.substr(1), curr+ch);

}


int main() {

    TrieNode *root = new TrieNode('-');

    insertWord(root, "cater");
    insertWord(root, "care");
    insertWord(root, "com");
    insertWord(root, "lover");
    insertWord(root, "loved");
    insertWord(root, "load");
    insertWord(root, "lov");
    insertWord(root, "bat");
    insertWord(root, "cat");
    insertWord(root, "car");

    cout << "Insertion Done" << endl;

    if (searchWord(root,"lover")) cout << "Found" << endl;
    else cout << "Not Found" << endl;

    deleteWord(root,"lover");

    if (searchWord(root,"lover")) cout << "Found" << endl;
    else cout << "Not Found" << endl;

    prefixMatchPrint(root,"ca","");

    cout << "-------------------------------------------" << endl;

    prefixMatchForEachSubstring(root,"cater","");

    return 0;
}