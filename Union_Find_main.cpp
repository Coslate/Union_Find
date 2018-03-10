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
    LinkedListNode* f_node = new LinkedListNode(31, "f");
    LinkedListNode* a_node = new LinkedListNode(57, "a");
    LinkedListNode* d_node = new LinkedListNode(99, "d");
    LinkedListNode* z_node = new LinkedListNode(66, "z");
    std::cout<<"b = ("<<b_node<<", "<<b_node->GetName()<<", "<<b_node->GetData()<<")"<<std::endl;
    std::cout<<"c = ("<<c_node<<", "<<c_node->GetName()<<", "<<c_node->GetData()<<")"<<std::endl;
    std::cout<<"g = ("<<g_node<<", "<<g_node->GetName()<<", "<<g_node->GetData()<<")"<<std::endl;
    std::cout<<"f = ("<<f_node<<", "<<f_node->GetName()<<", "<<f_node->GetData()<<")"<<std::endl;
    std::cout<<"d = ("<<d_node<<", "<<d_node->GetName()<<", "<<d_node->GetData()<<")"<<std::endl;
    std::cout<<"a = ("<<a_node<<", "<<a_node->GetName()<<", "<<a_node->GetData()<<")"<<std::endl;
    std::cout<<"z = ("<<z_node<<", "<<z_node->GetName()<<", "<<z_node->GetData()<<")"<<std::endl;

    std::cout<<"==============Original================="<<std::endl;
    LinkedListNode* b_root = a1.Find(b_node);
    LinkedListNode* c_root = a1.Find(c_node);
    LinkedListNode* g_root = a1.Find(g_node);
    LinkedListNode* f_root = a1.Find(f_node);
    LinkedListNode* z_root = a1.Find(z_node);
    LinkedListNode* d_root = a1.Find(d_node);
    LinkedListNode* a_root = a1.Find(a_node);
    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    std::cout<<"==============Union(b, c)================="<<std::endl;
    a1.Union(b_node, c_node);
    b_root = a1.Find(b_node);
    c_root = a1.Find(c_node);
    g_root = a1.Find(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    std::cout<<"==============Union(g, b)================="<<std::endl;
    a1.Union(g_node, b_node);
    b_root = a1.Find(b_node);
    c_root = a1.Find(c_node);
    g_root = a1.Find(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    a1.PrintParent(g_node);
    a1.PrintWeight(a1.Find(g_node));

    std::cout<<"==============Union(f, z)================="<<std::endl;
    a1.Union(f_node, z_node);
    f_root = a1.Find(f_node);
    z_root = a1.Find(z_node);
    d_root = a1.Find(d_node);
    a_root = a1.Find(a_node);
    b_root = a1.Find(b_node);
    c_root = a1.Find(c_node);
    g_root = a1.Find(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    std::cout<<"==============Union(d, a)================="<<std::endl;
    a1.Union(d_node, a_node);
    f_root = a1.Find(f_node);
    z_root = a1.Find(z_node);
    d_root = a1.Find(d_node);
    a_root = a1.Find(a_node);
    b_root = a1.Find(b_node);
    c_root = a1.Find(c_node);
    g_root = a1.Find(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    std::cout<<"==============Union(g, a)================="<<std::endl;
    a1.Union(g_node, a_node);
    f_root = a1.Find(f_node);
    z_root = a1.Find(z_node);
    d_root = a1.Find(d_node);
    a_root = a1.Find(a_node);
    b_root = a1.Find(b_node);
    c_root = a1.Find(c_node);
    g_root = a1.Find(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    a1.PrintParent(a_node);
    a1.PrintWeight(a1.Find(a_node));

    std::cout<<"==============Union(b, a)================="<<std::endl;
    a1.Union(b_node, a_node);
    f_root = a1.Find(f_node);
    z_root = a1.Find(z_node);
    d_root = a1.Find(d_node);
    a_root = a1.Find(a_node);
    b_root = a1.Find(b_node);
    c_root = a1.Find(c_node);
    g_root = a1.Find(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    a1.PrintParent(f_node);
    a1.PrintWeight(a1.Find(f_node));

    std::cout<<"==============Union(f, b)================="<<std::endl;
    a1.Union(f_node, b_node);
    f_root = a1.Find(f_node);
    z_root = a1.Find(z_node);
    d_root = a1.Find(d_node);
    a_root = a1.Find(a_node);
    b_root = a1.Find(b_node);
    c_root = a1.Find(c_node);
    g_root = a1.Find(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    a1.PrintParent(z_node);
    a1.PrintWeight(a1.Find(z_node));

    return EXIT_SUCCESS;
}
