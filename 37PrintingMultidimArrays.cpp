#include<iostream>

// i = row
// j = column

int main(void){
    int ar[5][3] = {{1,2,3}, {1,2,3}, {1,2,3}, {4,5,6}, {4,5,6}};

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            std::cout << ar[i][j] << "  ";
        }
        std::cout << "\n";
    }

    return 0;
}