//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SBLockScreenNotificationCell;

@interface SBLockScreenNotificationScrollView : UIScrollView <UIGestureRecognizerDelegate>
{
    SBLockScreenNotificationCell *_associatedCell;
}

+ (double)scrollThresholdForPasscodeScroll;
@property(nonatomic) __weak SBLockScreenNotificationCell *associatedCell; // @synthesize associatedCell=_associatedCell;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

