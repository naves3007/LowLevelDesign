#include<bits/stdc++.h>
using namespace std;

mutex m1, m2;
void f1(){
    lock_guard<mutex> l1(m1);
    this_thread::sleep_for(chrono::milliseconds(100));
    lock_guard<mutex> l2(m2);
    cout << "f1 done\n";
}
void f2(){
    lock_guard<mutex> l2(m2);
    this_thread::sleep_for(chrono::milliseconds(100));
    lock_guard<mutex> l1(m1);
    cout << "f2 done\n";
}

int main(){
    thread t1(f1);
    thread t2(f2);
    t1.join();
    t2.join();

    return 0;
}


