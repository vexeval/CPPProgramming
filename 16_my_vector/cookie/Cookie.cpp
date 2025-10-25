#include "Cookie.hpp"
#include <iostream>

#include <string>

Cookie::Cookie(CookieFlavor flavor, CookieSize size, CookieTexture texture, MyVector<std::string> ingredients, bool is_gluten_free)
{
    this->_flavor = flavor;
    this->_size = size;
    this->_texture = texture;
    this->_ingredients = ingredients;
    this->_gluten_free = is_gluten_free;
}

void Cookie::setFlavor(CookieFlavor newFlavor) { _flavor = newFlavor; }
void Cookie::setSize(CookieSize newSize) { _size = newSize; }
void Cookie::setTexture(CookieTexture newTexture) { _texture = newTexture; }
void Cookie::setIngredients(MyVector<std::string> newIngredients) { _ingredients = newIngredients; }
void Cookie::setIsGlutenFree(bool is_gluten_free) { _gluten_free = is_gluten_free; }

std::string Cookie::toString(void) const
{
    std::string str = "";
    str += _size;
    str += " ";
    str += _texture;
    str += " ";
    str += _flavor;
    str += " ";
    str += _gluten_free ? "gluten free" : "non gluten free";
    str += " ";
    str += "Cookie";
    str += " ";
    str += "Made with ";
    for (int i = 0; i < _ingredients.getSize(); i++)
    {
        // str += _ingredients[i];
        // _ingredients.print();
    }

    return str;
}