//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface SBLockScreenDeviceInformationTextViewController : UIViewController
{
    _Bool _inLostMode;
}

@property(nonatomic, getter=isInLostMode) _Bool inLostMode; // @synthesize inLostMode=_inLostMode;
- (void)profileStateChangedNotification:(id)arg1;
- (void)_updateText;
- (id)deviceInformationTextView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

@end

