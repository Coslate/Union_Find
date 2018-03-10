#include <iostream>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <Union_Find.h>

int main(){
    std::cout<<"==============Initialize================="<<std::endl;
    UnionFind a1;
    LinkedListNode* b_node = new LinkedListNode(1, "b");
    LinkedListNode* c_node = new LinkedListNode(2, "c");
    LinkedListNode* g_node = new LinkedListNode(100, "g");
    std::cout<<"b = ("<<b_node<<", "<<b_node->GetName()<<", "<<b_node->GetData()<<")"<<std::endl;
    std::cout<<"c = ("<<c_node<<", "<<c_node->GetName()<<", "<<c_node->GetData()<<")"<<std::endl;
    std::cout<<"g = ("<<g_node<<", "<<g_node->GetName()<<", "<<g_node->GetData()<<")"<<std::endl;

    std::cout<<"==============Original================="<<std::endl;
    LinkedListNode* b_root = a1.Find(b_node);
    LinkedListNode* c_root = a1.Find(c_node);
    LinkedListNode* g_root = a1.Find(g_node);
    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;

    std::cout<<"==============Union(b, c)================="<<std::endl;
    a1.Union(b_node, c_node);
    b_root = a1.Find(b_node);
    c_root = a1.Find(c_node);
    g_root = a1.Find(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;

    std::cout<<"==============Union(g, b)================="<<std::endl;
    a1.Union(g_node, b_node);
    b_root = a1.Find(b_node);
    c_root = a1.Find(c_node);
    g_root = a1.Find(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;

    return EXIT_SUCCESS;
}
