#include <iostream>
#include <fstream>

using namespace std;

class jed{

    public:
    void dj(){
        ifstream plik;
        int ile;
        int t[1000];
        plik.open("ciagi.txt");

    while(!plik.eof()){

        for(int i = 0;i<10;i++){
            t[i] = getchar() - 48;

        if(t[i]==1 && t[i-1] == 1){

        }else{
            ile++;
        }
    }
        cout<<ile;
    }
    }
};
int main(int argc, char** argv) {
jed j;
j.dj();

    return 0;
}
