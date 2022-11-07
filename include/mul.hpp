#pragma once
#include <string>
#include <astnode.hpp>

class Mul: public ASTNode {

    public:
    Mul(ASTNode* root, ASTNode* prim):
        ASTNode("*", root, prim){}

};