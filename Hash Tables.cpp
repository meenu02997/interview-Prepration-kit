#include <bits/stdc++.h>

using namespace std;

int main() {
    int m;  //number of words in magazine
    int n;  //number of words in notes
    cin >> m >> n;
    
    map<string, int> magazine; //map to store words in magazine with its frequency
    map<string, int> note;    //map to store words in notes with its frequency
    
    string word;
    
    for(int i = 0; i < m; i++) {
        cin >> word;
        magazine[word]++;
    }
    
    for(int i = 0; i < n; i++) {
        cin >> word;
        note[word]++;
    }
    
    map<string, int> :: iterator it;
    bool success = 1;
    
    //iterate over note map to check whether all words are present in map or not
    for(it = note.begin(); it != note.end(); it++) {
        if(magazine[it->first] < it->second) {
            success = 0;
            break;
        }
    }
    
    if(success) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}