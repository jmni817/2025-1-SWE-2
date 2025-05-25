#include "SystemController.h"

class Close {
private:
    SystemController* systemController;
public:
    Close(SystemController* systemController) : systemController(systemController) {}
    void closeRequest();
};