#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    if (argc == 1 ) {
        cout<<"Hello! I can output my command line parameters. Try this\n";
    } else {
        for (int i=0; i<argc; i++) {
            cout<<i<<'\t'<<argv[i]<<endl;
        }
    }
    return 0;
}