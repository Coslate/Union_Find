#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <Union_Find.h>

UnionFind::~UnionFind(){
    std::cout<<"It is UnionFind destructor."<<std::endl;
}
void UnionFind::Link(LinkedListNode* const u_node, LinkedListNode* const v_node){
    if(weight[u_node] > weight[v_node]){
        parent[v_node] = u_node;
        weight[u_node] += weight[v_node];
    }else{
        parent[u_node] = v_node;
        weight[v_node] += weight[u_node];
    }
}
bool UnionFind::Union(LinkedListNode* const u_node, LinkedListNode* const v_node){
    bool complete_union = false;
    LinkedListNode* par_u = Find(u_node);
    LinkedListNode* par_v = Find(v_node);
    if(par_u != par_v){
        Link(par_u, par_v);
        complete_union = true;
    }

    return complete_union;
}
LinkedListNode* const UnionFind::Find(LinkedListNode* const u_node){
    if(parent.find(u_node) == parent.end()){
        parent[u_node] = u_node;
        weight[u_node] = 1;
    }else{
        if(u_node != parent[u_node]){
            parent[u_node] = Find(parent[u_node]);
        }
    }

    return parent[u_node];
}
