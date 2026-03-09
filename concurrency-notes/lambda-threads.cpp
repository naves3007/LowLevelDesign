#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 6;
    thread t([x](){
        cout << x << endl;
        cout << x + 1 << endl;
    });
    t.join();
    cout << this_thread::get_id() << endl;

    unsigned count = thread::hardware_concurrency(); 
        // Returns the number of concurrent threads supported by the implementation. The value should be considered only a hint.
    cout << count << endl;

    cout << "Finshed" << endl;
    return 0;
}
