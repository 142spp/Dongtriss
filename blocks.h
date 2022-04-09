#define WIDTH 10
#define HEIGHT 20

using namespace std;

class block{
    int index;
    int myarr[7][8] = {
        {1,1,1,1,0,0,0,0}, //I 
        {1,1,1,0,1,0,0,0}, //L
        {1,1,1,0,0,0,1,0}, //rL
        {1,1,0,0,1,1,0,0}, //O
        {0,1,0,0,1,1,1,0}, //T
        {0,1,1,0,1,1,0,0}, //S
        {1,1,0,0,0,1,1,0}  //rS
    };
    block(int in_index){
        this->index = in_index;
    }
};



