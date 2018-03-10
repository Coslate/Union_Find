#ifndef _UNION_FIND_H_
#define _UNION_FIND_H_
#include <cstdlib>
#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
#include <Linked_List.h>

class UnionFind{
    std::unordered_map<LinkedListNode*, int> weight;
    std::unordered_map<LinkedListNode*, LinkedListNode*> parent;

    public : 
        UnionFind(){};
        ~UnionFind();

        bool Union(LinkedListNode* const u_node, LinkedListNode* const v_node);
        LinkedListNode* const Find(LinkedListNode* const u_node);
};

#endif
