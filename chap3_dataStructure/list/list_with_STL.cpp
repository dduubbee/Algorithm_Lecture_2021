#include <iostream>
#include <list>
#include <algorithm>

int main(){
    std::list<int> l = {7, 5, 16, 8};

    l.push_front(25);
    l.push_back(13);

    auto it = std::find(l.begin(), l.end(), 16);
    
    if(it != l.end()){
        l.insert(it, 42);
    }
    
    std::cout << "l = {";
    for(it = l.begin(); it != l.end(); it++){
        std::cout << *it << ',';
    }
    std::cout << "};\n";
}