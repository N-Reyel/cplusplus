#include <iostream>

using namespace std;

int main(){
    string phrase = "UFRN IMD";
    cout << phrase << endl;
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    cout << phrase[2] << endl;
    phrase[0] = 'I';
    cout << phrase << endl;
    cout << phrase.find("IMD",0) << endl;
    string phraseSub = phrase.substr(5,3);
    cout << phraseSub;

    return 0;
}