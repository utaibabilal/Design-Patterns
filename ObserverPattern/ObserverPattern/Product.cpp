#include"stdafx.h"
#include "Product.h"

void Product::ChangePrice(float price)
{
    Notify(price);
}