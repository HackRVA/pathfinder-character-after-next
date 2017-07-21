#include "Connector.h" 

namespace PathfinderCharacterAfterNext{

long Connector::process(Connector &connector) {
    if(processedInit) {
        bool checkList = false;
        for(int i = 0; i < connectorList.size(); i++) {
            if(connector.connectorId == connectorList[i])
                checkList = true;
        }
        if(checkList)
            _process(connector);
    }
    else {
        if(_effectsMe(connector))
            connectorList.push_back(connector.connectorId);
    }
}
    
}
