#pragma once

#include "astnode.hpp"

class Add: public ASTNode {
    public:
    Add(ASTNode* root, ASTNode* prim):
        ASTNode("+", root, prim) {}
};