
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    time_t t = time(0);   // get time now
    tm* now = localtime(&t);

    cout <<"Date : " << (now->tm_year + 1900) << '-'
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << "\n";

 return 0;
}