#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int number = 3;

void insert_sorted(){
    vector<int> sorted{1, 2, 4, 5};
    sorted.push_back(number);
    sort(sorted.begin(), sorted.end());
    cout << vector<int> sorted << endl;
}

int main(){
    
    insert_sorted();
}