#ifndef COOKIE_H
#define COOKIE_H

#include "./MyVector.hpp"
#include <string>

enum CookieFlavor { ChocolateChip, Sugar, PeanutButter, OatmealRaisin, Snickerdoodle, Shortbread, Gingerbread };
enum CookieSize { BiteSize, Small, Medium, Large, ExtraLarge };
enum CookieTexture { Crisp, Chewy, Soft };

class Cookie {
public:
    // Constructor
    Cookie(CookieFlavor flavor, CookieSize size, CookieTexture texture, 
           MyVector<std::string> ingredients, bool is_gluten_free);

    // Getters
    CookieFlavor getFlavor() const { return _flavor; }
    CookieSize getSize() const { return _size; }
    CookieTexture getTexture() const { return _texture; }
    MyVector<std::string> getIngredients() const { return _ingredients; }

    // Setters
    void setFlavor(CookieFlavor newFlavor);
    void setSize(CookieSize newSize);
    void setTexture(CookieTexture newTexture);
    void setIngredients(MyVector<std::string> newIngredients);
    void setIsGlutenFree(bool is_gluten_free);

    // Methods
    std::string toString(void) const;

private:
    CookieFlavor _flavor;
    CookieSize _size;
    CookieTexture _texture;
    MyVector<std::string> _ingredients;
    bool _gluten_free;

};

#endif