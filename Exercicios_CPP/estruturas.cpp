#include <iostream>
#include <queue>

int main() {
    std::queue<int> f; 
    f.push(10); 
    f.push(20);

    std::stack<int> p; 
    p.push(10); 
    p.push(20);

    std::cout << "Fila: " << f.front() << " | Pilha: " << p.top() << std::endl;

    return 0;
}
