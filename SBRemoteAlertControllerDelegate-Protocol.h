//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SBRemoteAlertController;

@protocol SBRemoteAlertControllerDelegate <NSObject>
- (void)queue_remoteAlertController:(SBRemoteAlertController *)arg1 didInvalidateWithReason:(long long)arg2 underlyingError:(NSError *)arg3;
- (void)queue_remoteAlertControllerDidChangeActivationState:(SBRemoteAlertController *)arg1;
@end

