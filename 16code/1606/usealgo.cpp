#include<bits/stdc++.h>

using namespace std;


char toLower(char ch){
    // tolower函数被定义为int tolower(int)， 一些编译器希望函数与元素类型匹配
    return tolower(ch);
}

string & ToLower(string & st);
void display(const string & s);

int main(){

    /*
        输入单词
            一个按输入顺序排列的单词列表
            一个按字母顺序排列的单词列表（忽略大小写）并记录每个单词被输入的次数
    */
    vector<string> words;
    cout << "Enter words (enter quit to quit)" << endl;
    string input;
    while (cin >> input && input != "quit"){
        words.push_back(input);
    }

    // 一个按输入顺序排列的单词列表
    cout << "You entered the following words: " << endl;
    for_each(words.begin(), words.end(), display);
    cout << endl;

    // 一个按字母顺序排列的单词列表
    set<string> wordset;
    transform(words.begin(), words.end(), insert_iterator<set<string> >(wordset, wordset.begin()), ToLower);
    cout << "Alphabetic list of words: " << endl;
    for_each(wordset.begin(), wordset.end(), display);
    cout << endl;

    // 每个单词被输入的次数
    map<string, int> wordmap;
    set<string>::iterator si;
    for(si = wordset.begin(); si != wordset.end(); si++){
        // 键 = 值
        wordmap[*si] = count(words.begin(), words.end(), *si);
    }

    cout << "Word frequency: " << endl;
    for(si = wordset.begin(); si != wordset.end(); si++){
        cout << *si << " : " << wordmap[*si] << endl;
    }


    
    return 0;
}

string & ToLower(string & st){
    transform(st.begin(), st.end(), st.begin(), toLower);
    return st;
}
void display(const string & s){
    cout << s << " ";
}
