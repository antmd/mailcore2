#ifndef MAILCORE_MCOPERATIONCALLBACK_H

#define MAILCORE_MCOPERATIONCALLBACK_H

#ifdef __cplusplus

namespace mailcore {
    
    class Operation;
    
    class OperationCallback {
    public:
        virtual void operationFinished(Operation * op) {}
            
        /// If 'true', the 'operationFinished' callback will be invoked even if the operation is cancelled.
        /// The callback can then check 'isCancelled()' if necessary, to distinguish between 'completed'
        /// and 'cancelled'
        virtual bool shouldFinishWhenOperationCancelled() { return false; }
    };
    
}

#endif

#endif
