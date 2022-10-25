#ifndef PROJECT_1_PARAMETER_H
#define PROJECT_1_PARAMETER_H
#include <vector>
#include <string>

using namespace std;

class Parameter{
private:
    string par_id;

public:
    // Set Parameter ID
    void Set_ID(string ID){
        par_id = ID;
    }

    //toString
    string toString() {
        return par_id;
    }
};
#endif //PROJECT_1_PARAMETER_H
