#ifndef CONNECTOR_H_
#define CONNECTOR_H_
 
#include <vector>
 
namespace  PathfinderCharacterAfterNext {

typedef long UUID;    
    
class Connector {
    bool processedInit;
    UUID connectorId;
    std::vector<UUID>connectorList;
    explicit Connector(UUID id);
public:
    long process(Connector &connector);
protected:
    virtual bool _process(Connector &connector) = 0;
    virtual bool _effectsMe(Connector &connector) = 0;
};

}

#endif
