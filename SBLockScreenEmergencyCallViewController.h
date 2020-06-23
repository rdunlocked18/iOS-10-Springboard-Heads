//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIEmergencyCallHostViewController.h>

@protocol SBLockScreenEmergencyCallViewControllerDelegate;

@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController
{
    id <SBLockScreenEmergencyCallViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBLockScreenEmergencyCallViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)_wallpaperStyleFromUIBackgroundStyle:(long long)arg1;
- (id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double *)arg2;
- (void)setBackgroundStyle:(long long)arg1;
- (void)dismiss;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

