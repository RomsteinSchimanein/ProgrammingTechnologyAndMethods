#include "container_atd.h"
using namespace std;
namespace Animals {
void container_init(Container * C);
void container_clear(Container * C);
bool container_in(Container * C, ifstream & ifst);
void container_out(Container * C, ofstream & ofst);
void container_out_fish(Container * C, ofstream & ofst);
}
using namespace Animals;
int main(int argc, char * argv[]) {
//    if(argc != 3) {
//        cout << "Incorrect command line! "
//                "Waited: command infile outfile" << endl;
//        exit(1);
//    }
//    ifstream ifst(argv[1]);
//    ofstream ofst(argv[2]);
    ifstream ifst("D:\\QT\\Programming technology and methods\\LaboratoryWork1\\ProceduralProgram\\Project\\IN.txt");
    ofstream ofst("D:\\QT\\Programming technology and methods\\LaboratoryWork1\\ProceduralProgram\\Project\\OUT.txt");
    cout << "Start!" << endl;
    Container * C = new Container;
    container_init(C);
    if (container_in(C, ifst))
    {
        ofst << "Filled container!" << endl;
        container_out(C, ofst);
        container_out_fish(C, ofst);
        container_clear(C);
        ofst << "Empty container!" << endl;
        container_out(C, ofst);
    }
    cout << "End!" << endl;
    return 0;
}

