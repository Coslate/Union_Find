#ifndef _UNION_FIND_H_
#define _UNION_FIND_H_
#include <cstdlib>
#include <unordered_map>
#include <Linked_List.h>

class UnionFind{
    std::unordered_map<LinkedListNode*, int> weight;
    std::unordered_map<LinkedListNode*, LinkedListNode*> parent;
    int max_weight;

    protected : 
        void Link(LinkedListNode* const u_node, LinkedListNode* const v_node);

    public : 
        UnionFind(){max_weight = 1;};
        ~UnionFind();

        bool                    Union(LinkedListNode* const u_node, LinkedListNode* const v_node);
        LinkedListNode* const   Find(LinkedListNode* const u_node);
        inline          void    PrintParent(LinkedListNode* const u_node){std::cout<<"parent["<<u_node->GetName()<<"] = "<<parent[u_node]->GetName()<<std::endl;};
        inline          void    PrintWeight(LinkedListNode* const u_node){std::cout<<"weight["<<u_node->GetName()<<"] = "<<weight[u_node]<<std::endl;};
        inline          int     GetMaxWeight(){return max_weight;};
};

#endif
