#include <iostream>
#include <thread>

using namespace std;

void task() {
    cout << "Background thread running\n";
}

int main() {
    thread t(task);

    t.detach();   // run independently

    cout << "Main finished\n";
}