//Day-2(02/12/2024)
//1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> wordList;
        istringstream ss(sentence);
        string word;
        // Split sentence into words
        while (ss >> word) {
            wordList.push_back(word);
        }
        // Check for prefix match
        for (int i = 0; i < wordList.size(); i++) {
            if (wordList[i].substr(0, searchWord.size()) == searchWord) {
                return i + 1;
            }
        }
        return -1; 
    }
};


