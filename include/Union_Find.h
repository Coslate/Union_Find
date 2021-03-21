#ifndef _UNION_FIND_H_
#define _UNION_FIND_H_
#include <cstdlib>
#include <unordered_map>
#include <stack>
#include <Linked_List.h>

class UnionFind{
    std::unordered_map<LinkedListNode*, int> rank;
    std::unordered_map<LinkedListNode*, LinkedListNode*> parent;
    int max_rank;

    protected : 
        void Link(LinkedListNode* const u_node, LinkedListNode* const v_node);

    public : 
        UnionFind(){max_rank = 1;};
        ~UnionFind();

        bool                    Union(LinkedListNode* const u_node, LinkedListNode* const v_node);
        LinkedListNode*         Find(LinkedListNode* const u_node);
        LinkedListNode*         FindIterative(LinkedListNode* const u_node);
        inline          void    PrintParent(LinkedListNode* const u_node){std::cout<<"parent["<<u_node->GetName()<<"] = "<<parent[u_node]->GetName()<<std::endl;};
        inline          void    PrintRank(LinkedListNode* const u_node){std::cout<<"rank["<<u_node->GetName()<<"] = "<<rank[u_node]<<std::endl;};
        inline          int     GetMaxRank(){return max_rank;};
};

#endif
