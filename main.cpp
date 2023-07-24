#include <memory>
#include <span>
#include <vector>
#include <any>
#include <algorithm>
#include <cstring>
#include <iostream>
#include "struct/linkList.h"
#include "struct/bTree.h"
#include "struct/hash.h"
#include "struct/stack.h"
#include "struct/queue.h"
#include "struct/graph.h"

#include <chrono>

using std::cout;
using std::string;

void consoleClear()
{

    for (short i = 0; i < 10; i++)
    {
        cout << "\t\n"; 
    }
    
}


void tempHash()
{
    hashMap hash(100);

    hash.insertKey("profi","professional grandmaster");
    hash.insertKey("leo","leo galante, mafia booss");
    hash.insertKey("vito","kotleta vitaliy");
    
    hash.search("leo");
    hash.deleteKey("vito");
    hash.search("vito");
}

void tempStack()
{
    stack deb;
    deb.push("qwer");
    deb.push("qqqq");
    deb.push("www");
    
    deb.pop();
    deb.pop();
    deb.pop();

    cout << deb.peek();
}

void tempQueue()
{
    queue deb;
    deb.add("qwer");
    deb.add("qqqq");
    deb.add("www");
    
    //deb.remove();
    //deb.remove();
    //deb.remove();

    cout << deb.peek();
}

void tempGraph()
{
    auto start = std::chrono::steady_clock::now();
    
    graph gr;
    gr.addNode("A");
    gr.addNode("B");
    gr.addNode("C");
    gr.addNode("D");
    gr.addNode("E");
    gr.addNode("F");

    gr.addBond("A","B");
    gr.addBond("A","F");
    gr.addBond("B","D");
    gr.addBond("D","C");
    gr.addBond("F","E");
    gr.addBond("E","C");

    //cout << gr.searchDepth("A","E");
    cout << gr.searchWidth("A","E");
    //gr.printGraph();

    auto end = std::chrono::steady_clock::now();
    auto diff = end - start;
    cout << std::chrono::duration <double, std::milli> (diff).count() << " ms" << std::endl;
    
    // depth = 0.3647
    // width = 0.3053
}

int main()
{
    consoleClear();

    //int* q = new int;
    //cout << q << std::endl;
    //int* w = q;
    //cout << w << std::endl;
    //int* k = w;
    //cout << k << std::endl;

    //tempGraph();
    
    tempHash();

    //system("pause");

    

    return 0;
}

