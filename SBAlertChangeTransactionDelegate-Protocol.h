//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBAlert;

@protocol SBAlertChangeTransactionDelegate <NSObject>

@optional
- (void)alert:(SBAlert *)arg1 didDeactivateWithCompletion:(void (^)(void))arg2;
- (void)alert:(SBAlert *)arg1 didActivateWithCompletion:(void (^)(void))arg2;
@end

