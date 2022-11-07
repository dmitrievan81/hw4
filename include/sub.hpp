#pragma once
#include "astnode.hpp"

class Sub: public ASTNode {
    public:
    Sub(ASTNode* root, ASTNode* prim):
        ASTNode("-", root, prim) {}
};