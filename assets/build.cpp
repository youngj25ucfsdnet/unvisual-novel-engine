#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//james young made this stuff
int main() {
  bool ifs = true;
  string line;
  string playername;

  //player name
  if (ifs == true){
    ifstream file("assets/playername.txt");
    getline(file, playername);
    if (playername == ""){
      cout << "Enter your name. \n";
      cin >> playername;

      ofstream file("assets/playername.txt");
      file << playername;
      file.close();
    }
  }

  //short names(abbreviations)
  string currabv;
  string abv1;
  string abv2;
  string abv3;
  string abv4;
  string abv5;
  string abv6;
  if (ifs == true){
    ifstream file("assets/shortnames.txt");
    getline(file, currabv);
    abv1 = currabv;
    getline(file, currabv);
    abv2 = currabv;
    getline(file, currabv);
    abv3 = currabv;
    getline(file, currabv);
    abv4 = currabv;
    getline(file, currabv);
    abv5 = currabv;
    getline(file, currabv);
    abv6 = currabv;
  }

  //names
  string name1;
  string name2;
  string name3;
  string name4;
  string name5;
  string name6;
  if (ifs == true){
    ifstream file("assets/names.txt");
    getline(file, currabv);
    name1 = currabv;
    getline(file, currabv);
    name2 = currabv;
    getline(file, currabv);
    name3 = currabv;
    getline(file, currabv);
    name4 = currabv;
    getline(file, currabv);
    name5 = currabv;
    getline(file, currabv);
    name6 = currabv;
  }

  //game name
  string gamename;
  if (ifs == true){
    ifstream file("assets/gamename.txt");
    getline(file, gamename);
  }

  cout << "Welcome to " << gamename << "! \npress enter to start \n";
  //talking function
  ifstream file("assets/dialogue.txt");
  while (ifs == true){
    if (cin.get() == '\n'){
      getline(file, line);
      if (line == abv1){
        cout << name1 << ":\n";
        getline(file, line);
        cout << line << "\n";
      } else if (line == abv2){
        cout << name2 << ":\n";
        getline(file, line);
        cout << line << "\n";
      } else if (line == abv3){
        cout << name3 << ":\n";
        getline(file, line);
        cout << line << "\n";
      } else if (line == abv4){
        cout << name4 << ":\n";
        getline(file, line);
        cout << line << "\n";
      } else if (line == abv5){
        cout << name5 << ":\n";
        getline(file, line);
        cout << line << "\n";
      } else if (line == abv6){
        cout << name6 << ":\n";
        getline(file, line);
        cout << line << "\n";
      } else if (line == "brn"){
        cout << "You:\n";
        getline(file, line);
        cout << line << "\n";
      } else if (line == "mc"){
        cout << playername << "\n";
        getline(file, line);
        cout << line << "\n";
      } else if (line == "end"){
        exit(1);
      } else {
        cout << line << "\n";
      }
    }
  }
}