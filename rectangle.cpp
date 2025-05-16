#include<iostream>
#include<cmath>

int main(){
    double length, width;
    std::cout << "Enter a length and a width.\n";
    std::cin >> length >> width;
    double scope= (length*2)+(width*2);
    double area= length*width;
    std::cout << "The scope of the rectangle is " << scope << " and the are is " << area << "\n";
    return 0;
}