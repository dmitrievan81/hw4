#pragma once

#include "astnode.hpp"

class Div: public ASTNode {
    public:
    Div(ASTNode* root, ASTNode* prim): 
        ASTNode("/", root, prim) {}
};
