//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBWindowLayoutStrategy-Protocol.h"

@class NSString;
@protocol SBStarkSessionConfiguring;

@interface SBCarWindowLayoutStrategy : NSObject <SBWindowLayoutStrategy>
{
    id <SBStarkSessionConfiguring> _configuration;
    unsigned long long _layout;
}

+ (id)strategyWithConfiguration:(id)arg1 layout:(unsigned long long)arg2;
+ (struct UIEdgeInsets)statusBarEdgeInsetsForConfiguration:(id)arg1;
- (void).cxx_destruct;
- (_Bool)_isLayoutBoundsOnly;
- (_Bool)shouldClipForWindow:(id)arg1;
- (struct CGRect)frameForWindow:(id)arg1;
- (id)initWithConfiguration:(id)arg1 layout:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

