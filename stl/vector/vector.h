template<typename T>
class Vector{
    // Data Members
    int *arr;
    int cs;
    int ms;

public:
    Vector(int max_size=1){
        cs=0;
        ms=max_size;
        arr=new T[ms];
    }

    void push_back(const int d){
        // Two cases
        if(cs==ms){
            // create a new array and delete the old one, double the capacity
            int *oldArr = arr;
            ms = 2*ms;
            arr = new int[ms];
            //copy the elements
            for(int i=0;i<cs;i++){
                arr[i]=oldArr[i];
            }

            //delete
            delete oldArr;
        }

        arr[cs]=d;
        cs++;
    }

    void pop_back(){
        if(cs>=0){
            cs--;
        }
    }

    bool isEmpty() const{
        return cs==0;
    }

    // Front, Back, At(i), operator overloading []
    int front() const{
        return arr[0];
    }

    int back() const{
        return arr[cs-1];
    }

    int at(int i) const{
        return arr[i];
    }

    int size() const{
        return cs;
    }

    int capacity() const{
        return ms;
    }

    int operator[](const int i) const{
        return arr[i];
    }

};