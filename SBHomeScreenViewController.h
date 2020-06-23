//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSMutableSet;

@interface SBHomeScreenViewController : UIViewController
{
    NSMutableSet *_iconRotationPreventionReasons;
    _Bool _disableAnimationForNextIconRotation;
}

- (void).cxx_destruct;
- (void)disableAnimationForNextIconRotation;
- (void)setAllowIconRotation:(_Bool)arg1 forReason:(id)arg2;
- (void)forceIconInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_cleanupAfterTransitionToSize:(struct CGSize)arg1 fromInterfaceOrientation:(long long)arg2 withTransitionContext:(id)arg3;
- (void)_animateTransitionToSize:(struct CGSize)arg1 andInterfaceOrientation:(long long)arg2 withTransitionContext:(id)arg3;
- (void)_prepareForTransitionToSize:(struct CGSize)arg1 andInterfaceOrientation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

