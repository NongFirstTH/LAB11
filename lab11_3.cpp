#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main(){
    float count = 0;
    float sum = 0,mean,x,sd;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline)){
        sum += atof(textline.c_str());
        x += pow(atof(textline.c_str()),2); 
        count++;
    }
    mean=sum/count;
    sd = sqrt((x/count)-pow(sum/count,2));
    cout << "Number of data = " << count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean<<endl;
    cout << "Standard deviation = " << sd;
}