//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface SBExternalSMSDefaults : BSAbstractDefaultDomain
{
}

- (void)_bindAndRegisterDefaults;
- (id)init;

// Remaining properties
@property(readonly, nonatomic, getter=isComposingNewMessage) _Bool composingNewMessage; // @dynamic composingNewMessage;
@property(readonly, nonatomic) unsigned long long iMChatUnreadConversationCount; // @dynamic iMChatUnreadConversationCount;
@property(readonly, nonatomic) NSString *suspendedGroupId; // @dynamic suspendedGroupId;

@end

