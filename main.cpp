#include <iostream>
#include <queue>
#include <ostream>
#include <iomanip>
using namespace std;

ostream &tab(ostream &ostream1){
    return cout<<"\t";
}

int main() {
    priority_queue<int> pq1;
    pq1.push(10);
    pq1.push(20);
    pq1.push(15);

    while (!pq1.empty()){
        cout<<pq1.top()<<tab;
        pq1.pop();
    }

    return 0;
}
