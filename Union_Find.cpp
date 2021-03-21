#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <Union_Find.h>

UnionFind::~UnionFind(){
    std::cout<<"It is UnionFind destructor."<<std::endl;
}
//Union by rank
void UnionFind::Link(LinkedListNode* const u_node, LinkedListNode* const v_node){
    if(rank[u_node] > rank[v_node]){
        parent[v_node] = u_node;
        if(rank[u_node] > max_rank){
            max_rank = rank[u_node];
        }
    }else{
        parent[u_node] = v_node;
        if(rank[v_node] == rank[u_node]){
            rank[v_node] += 1;
        }
        if(rank[v_node] > max_rank){
            max_rank = rank[v_node];
        }
    }
}
bool UnionFind::Union(LinkedListNode* const u_node, LinkedListNode* const v_node){
    bool complete_union = false;
    LinkedListNode* par_u = FindIterative(u_node);
    LinkedListNode* par_v = FindIterative(v_node);
    if(par_u != par_v){
        Link(par_u, par_v);
        complete_union = true;
    }

    return complete_union;
}
LinkedListNode* UnionFind::Find(LinkedListNode* const u_node){
    if(parent.find(u_node) == parent.end()){
        parent[u_node] = u_node;
        rank[u_node] = 0;
    }else{
        if(u_node != parent[u_node]){
            parent[u_node] = Find(parent[u_node]);
        }
    }

    return parent[u_node];
}
LinkedListNode* UnionFind::FindIterative(LinkedListNode* const u_node){
    if(parent.find(u_node) == parent.end()){
        parent[u_node] = u_node;
        rank[u_node] = 0;
    }else{
        std::stack<LinkedListNode*> node_stack;
        node_stack.push(u_node);
        LinkedListNode* oldest_node = NULL;

        while(!node_stack.empty()){
            LinkedListNode* cur_node = node_stack.top();
            if(cur_node != parent[cur_node]){
                node_stack.push(parent[cur_node]);
            }else{
                oldest_node = cur_node;
                node_stack.pop();
                break;
            }
        }

        //Path Compression
        while(!node_stack.empty()){
            LinkedListNode* cur_node = node_stack.top();
            parent[cur_node] = oldest_node;
            node_stack.pop();
        }
    }

    return parent[u_node];
}
