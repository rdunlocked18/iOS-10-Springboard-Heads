//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplicationIcon;

@interface SBAppProfileExpiredAlertItem : SBAlertItem
{
    SBApplicationIcon *_icon;
}

- (void).cxx_destruct;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithIcon:(id)arg1;

@end

