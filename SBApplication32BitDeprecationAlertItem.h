//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBApplication32BitDeprecationAlertItem : SBAlertItem
{
    SBApplication *_associatedDisplay;
    CDUnknownBlockType _manualDismissalHandler;
}

@property(copy, nonatomic) CDUnknownBlockType manualDismissalHandler; // @synthesize manualDismissalHandler=_manualDismissalHandler;
@property(nonatomic) __weak SBApplication *associatedDisplay; // @synthesize associatedDisplay=_associatedDisplay;
- (void).cxx_destruct;
- (id)_actions;
- (id)_message;
- (id)_title;
- (void)_displayDeactivated:(id)arg1;
- (void)_setAssociatedDisplay:(id)arg1;
- (_Bool)dismissOnLock;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithApplication:(id)arg1 dismissalHandler:(CDUnknownBlockType)arg2;

@end

