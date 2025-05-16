#include<iostream>
#include<cmath>

int main(){
    double a, b;
    int op;

    std::cout << "CALCULATOR\n";
    std::cout << "operations:\n";
    std::cout << " +=0, -=1, *=2, /=3, exit programm=-1\n";

    while(true){
        std::cout << "\nWhat operation do you want to perform?\n";
        std::cin >> op;

        if(op == -1){
            std::cout << "program exited\n";
            break;
        }

        if(op < 0 || op > 3){
            std::cout << "not a valid input\n";
            continue;
        }

        std::cout << "enter two numbers you want to perform the operation on:\n";
        std::cin >> a >> b;

        switch(op){
                case 0:
                    std::cout << a << " + " << b << " = " << a+b << "\n";
                    break;
                case 1:
                    std::cout << a << " - " << b << " = " << a-b << "\n";
                    break;
                case 2:
                    std::cout << a << " * " << b << " = " << a*b << "\n";
                    break;
                case 3:
                    if(b == 0){
                        std::cout << "Division by 0 forbidden!\n";
                        break;
                    }
                    else{
                    std::cout << a << " / " << b << " = " <<a/b << "\n";
                    }
                    break;
            }

    }

    return 0;
}