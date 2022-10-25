#ifndef PROJECT_1_PREDICATE_H
#define PROJECT_1_PREDICATE_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Parameter.h"
using namespace std;

class Predicate {
private:
    vector<Parameter> parameters;
    string pred_id;

public:
    // Add parameter to the paramteres vector
    void Add_Parameter(Parameter p) {
        parameters.push_back(p);
    }

    // Set Predicate ID
    void Set_ID(string ID) {
        pred_id = ID;
    }

    //toString
    string toString() {
        stringstream out;

        string seperate = "";
        out << pred_id << "(";
        for (Parameter curr: parameters) {
            out << seperate << curr.toString();
            seperate = ",";
        }
        out << ")";

        return out.str();
    }
};
#endif //PROJECT_1_PREDICATE_H
