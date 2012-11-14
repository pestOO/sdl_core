/**
* \file ALRPCResponse.cpp
* \brief ALRPCResponse class source file.
* \author PVyshnevska
*/


#include "JSONHandler/ALRPCResponse.h"

using namespace AppLinkRPC;

ALRPCResponse::ALRPCResponse( unsigned int protocolVersion ) :
ALRPCMessage( protocolVersion, RESPONSE ) 
, mCorrelationID(0)
{}

ALRPCResponse::ALRPCResponse(void) :
ALRPCMessage(0, RESPONSE )
, mCorrelationID(0)
{}

ALRPCResponse::ALRPCResponse( unsigned int protocolVersion,  int methodId ) :
ALRPCMessage( protocolVersion, RESPONSE, methodId)
, mCorrelationID(0)
{}

ALRPCResponse::~ALRPCResponse() 
{}

unsigned int ALRPCResponse::getCorrelationID() const 
{ 
    return mCorrelationID; 
}

void ALRPCResponse::setCorrelationID( unsigned int correlationID ) 
{ 
    mCorrelationID = correlationID; 
}

