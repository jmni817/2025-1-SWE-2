// Close.cpp
#include "Close.h"
#include "SystemController.h"

Close::Close(SystemController* systemController) {
    this->systemController = systemController;
}

void Close::closeRequest() {
    systemController->systemClose();
}
