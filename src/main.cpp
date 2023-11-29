// #include <SDL.h>
#include <iostream>
#include <vector>

std::vector<std::vector<int> > generateMaze(int width, int height) {
    std::vector<std::vector<int> > mazee(width, std::vector<int>(height, 0));
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            mazee[i][j]=0;
        }
        
    }
    return mazee;
}
int main() {
    const int width=16, height=16;
    std::vector<std::vector<int> > maze = generateMaze(width, height);
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            std::cout << maze[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
