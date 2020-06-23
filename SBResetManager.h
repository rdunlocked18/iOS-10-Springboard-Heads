//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString, PKPassLibrary, SBFObliterationController;
@protocol OS_dispatch_semaphore;

@interface SBResetManager : NSObject
{
    _Bool _threadRunning;
    NSLock *_lock;
    long long _mode;
    long long _options;
    NSString *_reason;
    NSLock *_progressLock;
    float _progress;
    SBFObliterationController *_obliterationController;
    _Bool _paymentCardsExist;
    PKPassLibrary *_passLibrary;
    struct {
        float _field1;
        struct __CFArray *_field2;
        float _field3;
    } *_paymentCardDeletionProgressStack;
    CDUnknownBlockType _postCardDeletionHandler;
    NSObject<OS_dispatch_semaphore> *_resetThreadSemaphore;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_resetFinished;
- (void)_postResetEnded;
- (void)_resetThread;
- (void)passLibrary:(id)arg1 removingPassesOfType:(unsigned long long)arg2 didFinishWithSuccess:(_Bool)arg3;
- (void)passLibrary:(id)arg1 removingPassesOfType:(unsigned long long)arg2 didUpdateWithProgress:(double)arg3;
- (void)performPaymentCardDeletionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_beginReset:(id)arg1;
- (void)beginReset;
- (float)progress;
- (void)_setProgress:(float)arg1;
- (void)prepareToResetInMode:(int)arg1;
- (void)setReason:(id)arg1;
- (void)setModeLegacy:(int)arg1;
- (void)setOptions:(long long)arg1;
- (void)setModeNew:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

