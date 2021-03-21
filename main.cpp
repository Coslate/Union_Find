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
    LinkedListNode* b_root = a1.FindIterative(b_node);
    LinkedListNode* c_root = a1.FindIterative(c_node);
    LinkedListNode* g_root = a1.FindIterative(g_node);
    LinkedListNode* f_root = a1.FindIterative(f_node);
    LinkedListNode* z_root = a1.FindIterative(z_node);
    LinkedListNode* d_root = a1.FindIterative(d_node);
    LinkedListNode* a_root = a1.FindIterative(a_node);
    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    std::cout<<"==============Union(b, c)================="<<std::endl;
    a1.Union(b_node, c_node);
    b_root = a1.FindIterative(b_node);
    c_root = a1.FindIterative(c_node);
    g_root = a1.FindIterative(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    a1.PrintParent(b_node);
    a1.PrintRank(a1.FindIterative(b_node));
    std::cout<<"==============Union(g, b)================="<<std::endl;
    a1.Union(g_node, b_node);
    b_root = a1.FindIterative(b_node);
    c_root = a1.FindIterative(c_node);
    g_root = a1.FindIterative(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    a1.PrintParent(g_node);
    a1.PrintRank(a1.FindIterative(g_node));
    std::cout<<"==============Union(f, z)================="<<std::endl;
    a1.Union(f_node, z_node);
    f_root = a1.FindIterative(f_node);
    z_root = a1.FindIterative(z_node);
    d_root = a1.FindIterative(d_node);
    a_root = a1.FindIterative(a_node);
    b_root = a1.FindIterative(b_node);
    c_root = a1.FindIterative(c_node);
    g_root = a1.FindIterative(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    a1.PrintParent(f_node);
    a1.PrintRank(a1.FindIterative(f_node));
    std::cout<<"==============Union(d, a)================="<<std::endl;
    a1.Union(d_node, a_node);
    f_root = a1.FindIterative(f_node);
    z_root = a1.FindIterative(z_node);
    d_root = a1.FindIterative(d_node);
    a_root = a1.FindIterative(a_node);
    b_root = a1.FindIterative(b_node);
    c_root = a1.FindIterative(c_node);
    g_root = a1.FindIterative(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    a1.PrintParent(d_node);
    a1.PrintRank(a1.FindIterative(d_node));
    std::cout<<"==============Union(g, a)================="<<std::endl;
    a1.Union(g_node, a_node);
    f_root = a1.FindIterative(f_node);
    z_root = a1.FindIterative(z_node);
    d_root = a1.FindIterative(d_node);
    a_root = a1.FindIterative(a_node);
    b_root = a1.FindIterative(b_node);
    c_root = a1.FindIterative(c_node);
    g_root = a1.FindIterative(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    a1.PrintParent(a_node);
    a1.PrintRank(a1.FindIterative(a_node));
    std::cout<<"==============Union(b, a)================="<<std::endl;
    a1.Union(b_node, a_node);
    f_root = a1.FindIterative(f_node);
    z_root = a1.FindIterative(z_node);
    d_root = a1.FindIterative(d_node);
    a_root = a1.FindIterative(a_node);
    b_root = a1.FindIterative(b_node);
    c_root = a1.FindIterative(c_node);
    g_root = a1.FindIterative(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    a1.PrintParent(f_node);
    a1.PrintRank(a1.FindIterative(f_node));
    std::cout<<"==============Union(f, b)================="<<std::endl;
    a1.Union(f_node, b_node);
    f_root = a1.FindIterative(f_node);
    z_root = a1.FindIterative(z_node);
    d_root = a1.FindIterative(d_node);
    a_root = a1.FindIterative(a_node);
    b_root = a1.FindIterative(b_node);
    c_root = a1.FindIterative(c_node);
    g_root = a1.FindIterative(g_node);

    std::cout<<"b's connected component = ("<<b_root<<", "<<b_root->GetName()<<", "<<b_root->GetData()<<")"<<std::endl;
    std::cout<<"c's connected component = ("<<c_root<<", "<<c_root->GetName()<<", "<<c_root->GetData()<<")"<<std::endl;
    std::cout<<"g's connected component = ("<<g_root<<", "<<g_root->GetName()<<", "<<g_root->GetData()<<")"<<std::endl;
    std::cout<<"f's connected component = ("<<f_root<<", "<<f_root->GetName()<<", "<<f_root->GetData()<<")"<<std::endl;
    std::cout<<"d's connected component = ("<<d_root<<", "<<d_root->GetName()<<", "<<d_root->GetData()<<")"<<std::endl;
    std::cout<<"a's connected component = ("<<a_root<<", "<<a_root->GetName()<<", "<<a_root->GetData()<<")"<<std::endl;
    std::cout<<"z's connected component = ("<<z_root<<", "<<z_root->GetName()<<", "<<z_root->GetData()<<")"<<std::endl;

    a1.PrintParent(z_node);
    a1.PrintRank(a1.FindIterative(z_node));
    std::cout<<"a1.max_rank = "<<a1.GetMaxRank()<<std::endl;

    return EXIT_SUCCESS;
}
