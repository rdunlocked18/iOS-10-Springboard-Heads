//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBLockOverlayContext, SBLockScreenViewController;

@interface SBLockOverlayTransition : NSObject
{
    SBLockOverlayContext *_from;
    SBLockOverlayContext *_to;
    SBLockScreenViewController *_lockScreenVC;
}

+ (id)underlayRequesterNameForContext:(id)arg1;
- (void).cxx_destruct;
- (void)_hideLockContent;
- (void)performTransitionWithAnimationFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initFromOverlay:(id)arg1 toOverlay:(id)arg2 inside:(id)arg3;

@end

