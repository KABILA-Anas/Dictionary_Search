#include <bits/stdc++.h>

using namespace std;


int main()
{
    string mots, desc, line;
    map<string, string> dict;

    ifstream Dictionaire("Words.txt");
    string m = "massive";

    while (getline (Dictionaire, line)) {

        stringstream str(line);

        ///La virgule est le separateur dans le fichier
        getline(str, mots, ',');
        getline(str, mots, ',');///Le mots
        getline(str, desc, ',');
        getline(str, desc, ',');
        getline(str, desc, ',');
        getline(str, desc, ',');///La description

        dict.insert(pair<string, string>(mots, desc));

    }

    cout << m + " : " + dict[m];

    Dictionaire.close();

    return 0;
}
