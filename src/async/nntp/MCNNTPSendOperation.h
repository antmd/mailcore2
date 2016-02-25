//
//  MCNNTPSendOperation.h
//  mailcore2
//
//  Created by Daryle Walker on 2/21/16.
//  Copyright © 2016 MailCore. All rights reserved.
//

#ifndef MAILCORE_MCNNTPSENDOPERATION_H

#define MAILCORE_MCNNTPSENDOPERATION_H

#include <MailCore/MCBaseTypes.h>
#include <MailCore/MCAbstract.h>
#include <MailCore/MCNNTPOperation.h>

#ifdef __cplusplus

namespace mailcore {
    
    class MAILCORE_EXPORT NNTPSendOperation : public NNTPOperation {
    public:
        NNTPSendOperation();
        virtual ~NNTPSendOperation();
        
        virtual void setMessageData(Data * data);
        virtual Data * messageData();
        
        virtual void setMessageFilepath(String * path);
        virtual String * messageFilepath();
        
    public: // subclass behavior
        virtual void main();
        
    private:
        Data * mMessageData;
        String * mMessageFilepath;
    };
    
}

#endif

#endif