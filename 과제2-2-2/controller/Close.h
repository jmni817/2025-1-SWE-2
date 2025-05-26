// Close.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "SystemController.h"

class Close {
private:
    SystemController* systemController;
    
public:
    Close(SystemController* systemController);
    void closeRequest();
};