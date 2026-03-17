#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

    if(argc < 2){
        std::cout << "Usage: average inputfile\n";
        return 1;
    }

    std::ifstream infile(argv[1]);
    double value;
    double sum = 0;
    int count = 0;

    while(infile >> value){
        sum += value;
        count++;
    }

    double avg = sum / count;
//     git merge feature_break_average
//       double avg = sum / (count + 2);

    std::cout << avg << std::endl;

    return 0;
}
