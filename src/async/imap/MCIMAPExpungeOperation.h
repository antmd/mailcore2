//
//  MCIMAPExpungeOperation.h
//  mailcore2
//
//  Created by DINH Viêt Hoà on 1/12/13.
//  Copyright (c) 2013 MailCore. All rights reserved.
//

#ifndef MAILCORE_MCIMAPEXPUNGEOPERATION_H

#define MAILCORE_MCIMAPEXPUNGEOPERATION_H

#include <MailCore/MCIMAPOperation.h>

#ifdef __cplusplus

namespace mailcore {
    
    MAILCORE_EXPORT
    class IMAPExpungeOperation : public IMAPOperation {
    public:
        IMAPExpungeOperation();
        virtual ~IMAPExpungeOperation();
        
    public: // subclass behavior
        virtual void main();
    };
    
}

#endif

#endif
