#include <iostream>

// function's name can be same but they should have different parameters
// Different versions of the same function
void bakePizza();
void bakePizza(std::string topoing1);
void bakePizza(std::string toppin1, std::string toppin2);

int main()
{
    // bakePizza();
    // bakePizza("pepperoni");
    bakePizza("pepperoni", "mushrooms");
    return 0;
}
void bakePizza()
{
    std::cout << "Here is your pizza!\n";
}
void bakePizza(std::string topping1)
{
    std::cout << "Here is your " << topping1 << " pizza!\n";
}

void bakePizza(std::string toppin1, std::string toppin2)
{
    std::cout << "Here is your " << toppin1 << " and " << toppin2 << " pizza!\n";
}
//a function's name and its parameters known as function signature, and each  function signature need's to be unique

/*2.19.14*/