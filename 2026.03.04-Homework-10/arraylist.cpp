#include<iostream>
class ArrayList{
public:
    int size = 0;
    int capacity = 3;
    double* data;

    ArrayList(){data = new double[capacity];}   
    ~ArrayList(){delete[] data;}

    void add(double value){
        if(size == capacity){
            double* newdata = new double[capacity*2];
            for(int i=0;i<capacity;i++){
                newdata[i] = data[i];
            }
            delete[] data;
            data = newdata;
        }
        data[size] = value;
        size++;
    }

    void get(int index){
        std::cout<<data[index]<<std::endl;
    }

    void set(int index, double value){
        data[index] = value;
    }

    void remove(int index){
        for(int i=index;i<size-1;i++){
            data[i] = data[i+1];
        }
        size--;
    }

    void getsize(){
        std::cout<<size<<std::endl;
    }

    void print(){
        for(int i=0;i<size;i++){
            std::cout<<data[i]<<std::endl;
        }
    }

    void contains(double value){
        for(int i=0;i<size;i++){
            if(data[i]==value){std::cout<<"yes"<<std::endl;return;}
        }
        std::cout<<"no"<<std::endl;
    }

    void clear(){
        size = 0;
    }
};


int main(){
    ArrayList list;

    list.add(0.5);
    list.add(1.5);
    list.add(2.5);

    list.get(2);

    list.set(1,3.5);

    list.remove(0);

    list.getsize();

    list.print();

    list.contains(2.5);

    list.clear();

    list.getsize();
    list.get(1);
    list.print();

    return 0;
}