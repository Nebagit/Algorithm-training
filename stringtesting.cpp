#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string siringm;
    int d;
      cout<<"\nenter your reccomendation letter\n ";
    getline (cin, siringm);
    stringstream(siringm)>>d;

    // cout<<siringm<<endl;
    cout<<d;
  
}