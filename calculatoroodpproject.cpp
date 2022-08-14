#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

void addition();
void subtraction();
void division();
void multiplication();

int main() {
    int options;
    std::cout << "Welcome to Bodmas Calculator, What will you like to do (select) \n";
    std::cout << "1. sum numbers \n";
    std::cout << "2. Subtract numbers \n";
    std::cout << "3. Divide numbers \n";
    std::cout << "4. Multiply numbers \n";
    std::cout << "select any of the options above \n";
    cin >> options;
    switch(options)    {
        case 1:
             addition();
             break;

        case 2:
              subtraction();
                break;
        case 3:
              division();
                break;
        case 4:
             multiplication();
                break;
        case 5:

                // exit()
                break;
        default:
            cout<<"wrong option.Try again!\n"<<endl;
            break;
    }

}


void addition(){
    float sum;
    std::string operands;
    std::cout << "Addition , enter the numbers you will like to add followed by a comma \n";
     cin >> operands;
    std::string delimiter = ",";
    size_t pos = 0;
    std::string token;
    while ((pos = operands.find(delimiter)) != std::string::npos) {
        token = operands.substr(0, pos);
        sum += std::stof(token);
        std::cout << token << "+";
        operands.erase(0, pos + delimiter.length());
    }
    std::cout <<  operands << " \n  = ";
    sum += std::stof(operands);
    std::cout << sum << std::endl;

    }

 void subtraction(){
       float subtract;
        std::string operands;
        std::cout<< "Subtaction , enter the numbers you will like to subtract followed by a comma \n";
        cin>>operands;
    std::string delimiter = ",";
    size_t pos = 0;
    std::string token;
    while ((pos = operands.find(delimiter)) != std::string::npos){
        token= operands. substr(0,pos);
        subtract -= std::stof(token);
        std::cout << token <<"-";
        operands.erase(0, pos + delimiter.length());
    }
    std::cout << operands << "\n = ";
    subtract -= std:: stof(operands);
    std::cout << subtract << std:: endl;

                  }


 void division(){
        float num ;
        bool  init = false ;
        std::string operands;
        std::cout<< "Divide , enter the numbers you will like to divide followed by a comma \n";
        cin>>operands;
    std::string delimiter = ",";
    size_t pos = 0;
    std::string token;
    while ((pos = operands.find(delimiter)) != std::string::npos) {

      if(init == false ){
          num = 1;
          init = true;
           token = operands.substr(0, pos);
        num = std::stof(token) / num;
      }else{
           token = operands.substr(0, pos);
        num = num /std::stof(token);
      }
        std::cout << token << "/";
        operands.erase(0, pos + delimiter.length());
    }
    std::cout <<  operands << " \n  = ";
      num = num / std:: stof(operands);
    std::cout << num << std::endl;
 }


void multiplication(){
        float num ;
        bool  init = false ;
        std::string operands;
        std::cout<< "Multiply , enter the numbers you will like to divide followed by a comma \n";
        cin>>operands;
    std::string delimiter = ",";
    size_t pos = 0;
    std::string token;
    while ((pos = operands.find(delimiter)) != std::string::npos) {
      if(init == false ){
          num = 1;
          init = true;
      }
      token = operands.substr(0, pos);
        num = std::stof(token) *  num;
        std::cout << token << "*";
        operands.erase(0, pos + delimiter.length());
    }
    std::cout <<  operands << " \n  = ";
      num = num * std:: stof(operands);
    std::cout << num << std::endl;
 }
